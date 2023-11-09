#include <string>
#include <vector>
#include <map>

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include "llvm/IR/IRBuilder.h"
#include <llvm/IR/Verifier.h>
#include <llvm/Support/raw_ostream.h>

#include "LLVMController.h"
#include "MyVisitor.h"

LLVMController::LLVMController() {
    // this->ctx = std::make_unique<llvm::LLVMContext>();
    this->module = std::make_unique<llvm::Module>("amukh", ctx);
}


llvm::Function* LLVMController::declareFunction(std::string name, llvm::FunctionType* type) {

    llvm::Function* fn = this->module->getFunction(name);
    if(fn != nullptr) {
        return fn;
    }

    fn = llvm::Function::Create(type, llvm::Function::ExternalLinkage, name, *module);
    verifyFunction(*fn);
    return fn;
}//suf

llvm::BasicBlock* LLVMController::defineFunction(std::string name) {
    llvm::Function* fn = this->module->getFunction(name);
    if(fn == nullptr) {
        return nullptr;
    }

    llvm::BasicBlock* entry = llvm::BasicBlock::Create(this->ctx, "entry", fn);
    this->builder->SetInsertPoint(entry);
    return entry;
}

llvm::AllocaInst* LLVMController::declareVariable(std::string name, llvm::Type* type) {
  return this->builder->CreateAlloca(type, nullptr, name);
}

llvm::StoreInst* LLVMController::assignVariable(llvm::AllocaInst* ref, llvm::Value* value) {
  return this->builder->CreateStore(value, ref);
}

llvm::LoadInst* LLVMController::getVariable(llvm::AllocaInst* ref) {
  return this->builder->CreateLoad(ref->getAllocatedType(),ref);
}

llvm::AllocaInst* LLVMController::getVariableRef(std::string name) {
  return this->builder->CreateAlloca(this->module->getNamedGlobal(name)->getType(), nullptr, name);
}


llvm::AllocaInst* LLVMController::declareArray(std::string name, llvm::Type* type, llvm::Value* size) {
  return this->builder->CreateAlloca(type, size, name);
}

llvm::StoreInst* LLVMController::assignArray(llvm::AllocaInst* ref, llvm::Value* index, llvm::Value* value) {
  llvm::Value* ptr = this->builder->CreateGEP(index->getType(), ref, index);
  return this->builder->CreateStore(value, ptr);
}

llvm::LoadInst* LLVMController::getArray(llvm::AllocaInst* ref, llvm::Value* index, llvm::Type* type) {
  llvm::Value* ptr = this->builder->CreateGEP(ref->getAllocatedType(), ref, index);
return this->builder->CreateLoad(type, ptr);
}

llvm::Type* getTypes(LucidusParser::TypeContext *ctx, std::shared_ptr<LLVMController> controller, std::map<std::string, llvm::StructType*> structs) {
  // given a string like int** or int or int* deduce the type and output llvm type
  //int: controller->builder->getInt32Ty()
  llvm::Type* ltype;
  std::string type = ctx->getText();
  if(ctx->ID() != nullptr)
  type = ctx->ID()->getText();
  if((type == "int"|| type == "char" || type == "void" || type == "bool" || type=="float" || ctx->fptr() != nullptr)) {
    // we know it is primitive type
    if(type == "int") {
      ltype = controller->builder->getInt32Ty();
    }else if(type == "char") {
      ltype = controller->builder->getInt8Ty();
    }else if(type == "void") {
      ltype = controller->builder->getVoidTy();
    }else if(type == "bool") {
      ltype = controller->builder->getInt1Ty();
    }else if(type == "float") {
      ltype = controller->builder->getFloatTy();
    }
    else if(ctx->fptr() != nullptr) {
      // function type
      // std::cout << "function type" << std::endl;
      std::vector<llvm::Type*> args;
      auto size = ctx->fptr()->type().size();
      for(int i = 0; i<ctx->fptr()->type().size()-1; i++) {
        args.push_back(getTypes(ctx->fptr()->type(i), controller, structs));
      }
      // param types are all the types except the last one
      // return type is the last one
      // make args into llvm arrayref
      llvm::ArrayRef<llvm::Type*> argsRef(args);
      ltype = llvm::FunctionType::get(getTypes(ctx->fptr()->type(size-1), controller, structs), argsRef, false);
      // return function type with no parameters and return type int
      // ltype = llvm::FunctionType::get(controller->builder->getInt32Ty(), false);
    }
  }else {
    // we know it is a struct
    // ltype = structs[type]; // cannot do this, causes problems later on
    // ltype = llvm::StructType::create(controller->ctx, type);
    // std::cout << "type: " << type << std::endl;
    ltype = controller->module->getNamedGlobal(type)->getType();

  }

  // now for the pointer bit.
  for(int i = 0; i<ctx->STAR().size(); i++) {
    ltype = ltype->getPointerTo();
  }

  return ltype;

}

// llvm::Value* LLVMController::getFromScope(std::string name) {
//     llvm::Value* value = this->globalScope[name];
//     if(value == nullptr) {
//         return nullptr;
//     }
//     return value;
// }