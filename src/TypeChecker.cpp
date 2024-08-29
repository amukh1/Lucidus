#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <memory>

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Argument.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Bitcode/LLVMBitCodes.h>
#include "llvm/IR/DataLayout.h"
#include <llvm/IR/Value.h>

#include "LLVMController.h"
#include "Codegen.h"
#include "TypeChecker.h"

PtrType* Type::pointerTo() {
    PtrType* t = new PtrType();
    t->type = this->type->getPointerTo();
    t->name = this->name + "*";
    t->ptr = true;
    t->containedType = this;
    return t;
};

void PtrType::selfPoint() {
    PtrType* type = new PtrType();
    type->name = this->name;
    type->type = this->type;
    type->containedType = this->containedType;
    type->ptr = true;

    this->type = type->type->getPointerTo();
    this->name = type->name + "*";
    this->containedType = type;
    this->ptr = true;
}

Type* TypeChecker::typeLit(LucidusParser::ExprContext* ctx, std::shared_ptr<LLVMController> controller, Codegen* visitor) {
    if(ctx->INT() != nullptr && ctx->children.size() == 1) {
        Type *t = new Type();
        t->type = controller->builder->getInt32Ty();
        t->name = "int";
        t->ptr = false;
        return t;
    }else if(ctx->FLOAT() != nullptr && ctx->children.size() == 1) {
        Type *t = new Type();
        t->type = controller->builder->getFloatTy();
        t->name = "float";
        t->ptr = false;
        return t;
    }else if(ctx->STRING() != nullptr && ctx->children.size() == 1) {
        // char* string
        PtrType *t = new PtrType();
        t->type = controller->builder->getInt8PtrTy();
        t->containedType = new Type();
        t->containedType->type = controller->builder->getInt8Ty();
        t->containedType->name = "char";
        t->containedType->ptr = false;
        t->name = "char*";
        t->ptr = true;
        return t;
    }else if(ctx->func() != nullptr) {
        std::string name = ctx->func()->ID()->getText();
        if(visitor->functionNameScope.find(name) == visitor->functionNameScope.end()) {
            std::cerr << "Function " << name << " not found" << std::endl;
            return nullptr;
        }
        auto func = controller->module->getFunction(name);
        Type *t = new Type();
        t->type = func->getFunctionType()->getReturnType();
        // continue later...
        return t;
    }

}

Type* TypeChecker::parseType(LucidusParser::TypeContext* ctx, std::shared_ptr<LLVMController> controller, Codegen* visitor) {
    std::string name;
    Type* t = new Type();
    if(ctx->ID() != nullptr) {
        name = ctx->ID()->getText();
        t->name = name;
        if((t->name == "int"|| t->name == "char" || t->name == "void" || t->name == "bool" || t->name=="float" || ctx->fptr() == nullptr)) {
            // we know it is primitive type
            if(t->name == "int") {
                t->type = controller->builder->getInt32Ty();
            }else if(t->name == "char") {
                t->type = controller->builder->getInt8Ty();
            }else if(t->name == "void") {
                t->type = controller->builder->getVoidTy();
            }else if(t->name == "bool") {
                t->type = controller->builder->getInt1Ty();
            }else if(t->name == "float") {
                t->type = controller->builder->getFloatTy();
            }else {
                // structType
                if(visitor->structs.find(t->name) == visitor->structs.end()) {
                    std::cerr << "Struct " << t->name << " not found" << std::endl;
                    return nullptr;
                }
                t->type = visitor->structs[t->name];
            }
        }
        t->ptr = false;
    }
    
    if(ctx->STAR().size() == 0) {
        return t;
    }

    PtrType* type = new PtrType();
    type->type = t->type->getPointerTo();
    type->name = t->name + "*";
    type->containedType = t;
    type->ptr = true;
    for(int i = 1; i<ctx->STAR().size(); i++) {
        type->selfPoint();
    }

    return type;
}