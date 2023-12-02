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

// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"
#include "errorHandler.h"

#include "MyVisitor.h"
#include "compile.h"
#include "../../../usr/include/llvm-10/llvm/IR/Constants.h"

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

llvm::Value *get_size(llvm::Type *t, llvm::IRBuilder<>& irb)
{
    llvm::Value *sizePtr = irb.CreateGEP(t->getContainedType(0),
            irb.CreateIntToPtr(llvm::ConstantInt::get(irb.getInt8Ty(), 0), t),
            llvm::ConstantInt::get(irb.getInt8Ty(), 1));

    return irb.CreatePtrToInt(sizePtr, irb.getInt64Ty());
}

antlrcpp::Any MyVisitor::visitDec(LucidusParser::DecContext *ctx) {
        std::string functionName = ctx->ID()->getText();
        llvm::Type* rtype = getTypes(ctx->type(), this->controller, this->structs);
        std::vector<llvm::Type*> types;
        bool ellip = false;
        // std::cout << ctx->param().size() << std::endl;
        this->functionNameScope.insert({functionName, {std::vector<std::string>(), false}});
        if(ctx->param().size() !=0) {
            llvm::Type* type;
            LucidusParser::IdecContext * idec;
            for(int i = 0; i<ctx->param().size(); i++) {
                if(ctx->param(i)->DOTS() != nullptr) {
                    ellip = true;
                    this->functionNameScope[functionName].second = true;
                } else {
                    idec = ctx->param(i)->idec();
                    type = getTypes(idec->type(), this->controller, this->structs);
                    types.push_back(type);
                    this->functionNameScope[functionName].first.push_back(idec->ID()->getText());
                }
            }
        }
        if(this->controller->module->getFunction(functionName) == nullptr)
        controller->declareFunction(functionName.c_str(), llvm::FunctionType::get(rtype, types, ellip));

        this->blocks.clear();
        return visitChildren(ctx);
}

antlrcpp::Any MyVisitor::visitExpr(LucidusParser::ExprContext *ctx) {
    if(ctx->INT() != nullptr && ctx->children.size() == 1) {
        int v = std::stoi(ctx->INT()->getText());
        llvm::Value *val = llvm::ConstantInt::get(llvm::Type::getInt32Ty(controller->ctx), v);
        return val;
    }else if(ctx->FLOAT() != nullptr && ctx->children.size() == 1) {
        float v = std::stof(ctx->FLOAT()->getText());
        llvm::Value *val = llvm::ConstantFP::get(llvm::Type::getFloatTy(controller->ctx), v);
        return val;
    }else if(ctx->STRING() != nullptr && ctx->children.size() == 1) {
        // auto str = controller->builder->CreateGlobalStringPtr(ctx->STRING()->getText());
        // // load and return str
        // auto loadedStr = controller->builder->CreateLoad(str->getType(), str);
        // // now make loadStr llvm::Value* and return
        // return (llvm::Value*)loadedStr;
        // forget all that, make it an an array of chars, but in pointer form
        // ^:skull: now that I have done this I am too lazy to do it correctly.
        std::string str = ctx->STRING()->getText();
        replaceAll(str, "\\n", "\n");
        replaceAll(str, "\\t", "\t");
        replaceAll(str, "\\r", "\r");
        replaceAll(str, "\\v", "\v");
        replaceAll(str, "\\b", "\b");
        replaceAll(str, "\\f", "\f");
        replaceAll(str, "\\a", "\a");
        replaceAll(str, "\\e", "\e");
        replaceAll(str, "\\0", "\0");
        replaceAll(str, "\\'", "\'");
        replaceAll(str, "\\\"", "\"");
        replaceAll(str, "\\\\", "\\");
        replaceAll(str, "\\?", "\?");
        std::vector<llvm::Constant*> chars;
        for(int i = 1; i<str.length()-1; i++) {
            chars.push_back(llvm::ConstantInt::get(llvm::Type::getInt8Ty(controller->ctx), str[i]));
        }
        chars.push_back(llvm::ConstantInt::get(llvm::Type::getInt8Ty(controller->ctx), 0));
        auto arr = llvm::ConstantArray::get(llvm::ArrayType::get(llvm::Type::getInt8Ty(controller->ctx), chars.size()), chars);
        auto global = new llvm::GlobalVariable(*controller->module, llvm::ArrayType::get(llvm::Type::getInt8Ty(controller->ctx), chars.size()), true, llvm::GlobalValue::PrivateLinkage, arr, "str");
        auto ptr = controller->builder->CreateInBoundsGEP(global->getValueType(), global, {controller->builder->getInt32(0), controller->builder->getInt32(0)});
        return ptr;
    }else if(ctx->func() != nullptr) {
        return visit(ctx->func());
    }else if(ctx->ID() != nullptr && ctx->children.size() == 1) {
        // if variable is in function scope
        if(loadingAvailable == true) {
            if(this->functionScope.count(ctx->ID()->getText()))
                return (llvm::Value*) controller->builder->CreateLoad(((llvm::AllocaInst*)this->functionScope[ctx->ID()->getText()])->getAllocatedType(),this->functionScope[ctx->ID()->getText()]);
        // else check if it is in global vars, if so, this->controller->module->getNamedGlobal(name)
            else if(this->controller->module->getNamedGlobal(ctx->ID()->getText()))
                return (llvm::Value*) controller->builder->CreateLoad(this->controller->module->getNamedGlobal(ctx->ID()->getText())->getValueType(), this->controller->module->getNamedGlobal(ctx->ID()->getText()));
            else if(this->controller->module->getFunction(ctx->ID()->getText()) != nullptr) {
                return (llvm::Value*) this->controller->module->getFunction(ctx->ID()->getText());
            }else{
                std::cout << "Variable " << ctx->ID()->getText() << " not found" << std::endl;
                return (llvm::Value*) llvm::ConstantPointerNull::get(llvm::Type::getInt8PtrTy(controller->ctx));
            }
        }else {
            if(this->functionScope.count(ctx->ID()->getText()))
                return (llvm::Value*) this->functionScope[ctx->ID()->getText()];
        // else check if it is in global vars, if so, this->controller->module->getNamedGlobal(name)
            else if(this->controller->module->getNamedGlobal(ctx->ID()->getText()) != nullptr)
                return (llvm::Value*) this->controller->module->getNamedGlobal(ctx->ID()->getText());
            else if(this->controller->module->getFunction(ctx->ID()->getText()) != nullptr) {
                return (llvm::Value*) this->controller->module->getFunction(ctx->ID()->getText());
            }else {
                std::cout << "Variable " << ctx->ID()->getText() << " not found" << std::endl;
                return (llvm::Value*) llvm::ConstantPointerNull::get(llvm::Type::getInt8PtrTy(controller->ctx));
            }
        }
    }else if(ctx->PLUS() != nullptr) {
        return (llvm::Value*) controller->builder->CreateAdd(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->STAR() != nullptr && ctx->children.size() == 3) {
        return (llvm::Value*) controller->builder->CreateMul(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->SUB() != nullptr && ctx->children.size() == 3) {
        return (llvm::Value*) controller->builder->CreateSub(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->SUB() != nullptr && ctx->children.size() == 2) {
        // -expr
        return (llvm::Value*) controller->builder->CreateNeg(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))));
    } else if(ctx->DIV() != nullptr) {
        return (llvm::Value*) controller->builder->CreateSDiv(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->MOD() != nullptr) {
        return (llvm::Value*) controller->builder->CreateSRem(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->EQ(0) != nullptr && ctx->EQ().size() == 2){
        // ==
        return (llvm::Value*) controller->builder->CreateICmpEQ(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->NEQ() != nullptr) {
        // !=
        return (llvm::Value*) controller->builder->CreateICmpNE(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    } else if (ctx->SIZEOF() != nullptr) {
        // return sizeof type
        // std::cout << ctx->type()->getText() << std::endl;

        auto type = getTypes(ctx->type(), this->controller, this->structs);
        const llvm::DataLayout* TD = &controller->module->getDataLayout();
        // std::cout << TD->getTypeAllocSize(type) << std::endl;
        auto size = TD->getTypeAllocSize(type);
        // return (llvm::Value*) llvm::ConstantInt::get(llvm::Type::getInt64Ty(controller->ctx), size);
        return (llvm::Value*) llvm::ConstantInt::get(llvm::Type::getInt32Ty(controller->ctx), size);
    } else if (ctx->GTR() != nullptr && ctx->children.size() == 3) {
        // expr > expr
        return (llvm::Value*) controller->builder->CreateICmpSGT(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->LESS() != nullptr && ctx->children.size() == 3) {
        // expr < expr
        return (llvm::Value*) controller->builder->CreateICmpSLT(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0))), std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
    }else if(ctx->PTR() != nullptr) {
        bool old = this->loadingAvailable;
        loadingAvailable = false;
        auto ptr = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));
        loadingAvailable = old;

        return (llvm::Value*)ptr;
        // controller->builder->CreateStore(std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))), val);
        // auto temp = controller->builder->CreateAlloca(val->getType(), nullptr);
        // controller->builder->CreateStore(val, temp);
        // return (llvm::Value*)controller->getVariable(temp);
        // std::cout << llvm::isa<llvm::AllocaInst>(val) << std::endl;
        // if(llvm::isa<llvm::AllocaInst>(val))
        // return (llvm::Value*) llvm::dyn_cast<llvm::AllocaInst>(val);
        // else {
        //     auto allocaval = controller->builder->CreateAlloca(val->getType(), nullptr);
        //     controller->builder->CreateStore(val, allocaval);
        //     return (llvm::Value*)allocaval;
        // }
        // return ptr to allocainst
        // return (llvm::Value*)allocval;
        // auto valptr = controller->builder->CreateGEP(allocval->getType(), allocval, std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1))));
        // return (llvm::Value*)val;
    } else if (ctx->STAR() && ctx->children.size() == 2) {
        // make ref
        // std::cout << ctx->getText() << std::endl;
        auto val = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));// gives bad any_cast  
        // auto val = std::any_cast<llvm::AllocaInst*>((std::any)visitExpr(ctx->expr(0)));// also gives b_a_c
        // get dereferenced type
        auto dtype = val->getType()->getContainedType(0);
        auto valnotptr = controller->builder->CreateLoad(dtype, val);
        // auto valptr = controller->getVariable(val);
        // auto valptrptr = controller->builder->CreateAlloca(dtype, nullptr);
        // controller->assignVariable((llvm::AllocaInst*)valptrptr, valptr);
        return (llvm::Value*)valnotptr;
    } else if(ctx->ARROW() != nullptr && ctx->children.size() == 3) {
        auto old = this->loadingAvailable;
        this->loadingAvailable = true;
        auto structPtr = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));
        this->loadingAvailable = old; 
        auto structType = structPtr->getType()->getContainedType(0);
        auto structName = structType->getStructName().str();
        auto structMember = ctx->ID()->getText();
        // auto structMemberIndex = this->structs[structName]->getStructMemberIndex(structMember); // doesnt work, function is not defined
        auto structMemberIndex = 0;
        for(int i = 0; i<this->structs[structName]->getNumElements(); i++) {
            if(this->structNames[structName][i] == structMember) {
                structMemberIndex = i;
                break;
            }
        }
        auto structMemberType = this->structs[structName]->getStructElementType(structMemberIndex);
        auto structMemberPtr = controller->builder->CreateStructGEP(structType, structPtr, structMemberIndex);

        
        return (llvm::Value*)structMemberPtr;
        // return visitChildren(ctx);
    }else if(ctx->DOT() != nullptr && ctx->children.size() == 3) {
        auto old = this->loadingAvailable;
        this->loadingAvailable = true;
        auto structPtr = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));
        this->loadingAvailable = old;
        auto structType = structPtr->getType()->getContainedType(0);
        auto structName = structType->getStructName().str();
        auto structMember = ctx->ID()->getText();
        // auto structMemberIndex = this->structs[structName]->getStructMemberIndex(structMember); // doesnt work, function is not defined
        auto structMemberIndex = 0;
        for(int i = 0; i<this->structs[structName]->getNumElements(); i++) {
            if(this->structNames[structName][i] == structMember) {
                structMemberIndex = i;
                break;
            }
        }
        auto structMemberType = this->structs[structName]->getStructElementType(structMemberIndex);
        auto structMemberPtr = controller->builder->CreateStructGEP(structType, structPtr, structMemberIndex);

        if(this->loadingAvailable == true)
        return (llvm::Value*)controller->builder->CreateLoad(structMemberType, structMemberPtr);
        else return (llvm::Value*)structMemberPtr;
        // return visitChildren(ctx);
    }else if(ctx->expr(0) != nullptr && ctx->children.size() == 3) {
        return visit(ctx->expr(0));
    }else if(ctx->ARROW() != nullptr && ctx->children.size() == 5) {
        // bitcast, ex: C: (int) 3.5; Source Syntax: (3.5)->(int)
        /*
        auto val = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));
        auto type = getTypes(ctx->type(), this->controller, this->structs);
        return (llvm::Value*)controller->builder->CreateBitCast(val, type);
        */ // why are compilers so smart? wrote this and thought i was home free. now i need to program logic to decide which cast to use smh
        auto val = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));
        auto type = getTypes(ctx->type(), this->controller, this->structs);
        // if type is a ptr
        if(val->getType()->isPointerTy() && type->isIntegerTy()) {
            return (llvm::Value*)controller->builder->CreatePtrToInt(val, type);
        }else if(val->getType()->isIntegerTy() && type->isPointerTy()) {
            return (llvm::Value*)controller->builder->CreateIntToPtr(val, type);
        }else {
            // least powerful cast lol
            return (llvm::Value*)controller->builder->CreateBitCast(val, type);
        }
    }else if(ctx->LBRACK() != nullptr && ctx->RBRACK() != nullptr && ctx->children.size() == 4) {
        // expr [ expr ]
        // bascially return (expr->(int) + int*sizeof type)- >(type*)
        auto old = this->loadingAvailable;
        this->loadingAvailable = true;
        auto val = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(0)));
        this->loadingAvailable = old;
        // std::cout << "check" << std::endl;
        if(!llvm::isa<llvm::PointerType>(val->getType())) {
            std::cout << "WE HAVE A PROBLEM" << std::endl;
            return nullptr;
        }
        auto pointerType = llvm::dyn_cast<llvm::PointerType>(val->getType());
        auto type = pointerType->getContainedType(0);
        auto old2 = this->loadingAvailable;
        this->loadingAvailable = true;
        auto index = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->expr(1)));
        this->loadingAvailable = old2;
        // std::cout << "check" << std::endl;
        auto gep = controller->builder->CreateGEP(type, val, index);
        // std::cout << this->loadingAvailable << std::endl;
        if(this->loadingAvailable == true)
        return (llvm::Value*)controller->builder->CreateLoad(type, gep);
        else 
        return gep;
        // return gep;

    } else{
        // return (llvm::Value *)llvm::ConstantInt::get(llvm::Type::getInt32Ty(controller->ctx), 0);
        // return llvm nullptr LOOOL
        return (llvm::Value*) llvm::ConstantPointerNull::get(llvm::Type::getInt8PtrTy(controller->ctx));
    }

    // return visitChildren(ctx);
    // return  controller->builder->CreateCall(controller->module->getFunction("printf"), {});
}

antlrcpp::Any MyVisitor::visitDef(LucidusParser::DefContext *ctx) {
    // check if function is declared, if not, declare it first.
    /* for refernce, this is the dec function:
    std::string functionName = ctx->ID()->getText();
        llvm::Type* rtype = getTypes(ctx->type(), this->controller, this->structs);
        std::vector<llvm::Type*> types;
        bool ellip = false;
        // std::cout << ctx->param().size() << std::endl;
        this->functionNameScope.insert({functionName, {std::vector<std::string>(), false}});
        if(ctx->param().size() !=0) {
            llvm::Type* type;
            LucidusParser::IdecContext * idec;
            for(int i = 0; i<ctx->param().size(); i++) {
                if(ctx->param(i)->DOTS() != nullptr) {
                    ellip = true;
                    this->functionNameScope[functionName].second = true;
                } else {
                    idec = ctx->param(i)->idec();
                    type = getTypes(idec->type(), this->controller, this->structs);
                    types.push_back(type);
                    this->functionNameScope[functionName].first.push_back(idec->ID()->getText());
                }
            }
        }
        controller->declareFunction(functionName.c_str(), llvm::FunctionType::get(rtype, types, ellip));
    */
    if (this->controller->module->getFunction(ctx->ID()->getText()) == nullptr){
        std::string functionName = ctx->ID()->getText();
        llvm::Type* rtype = getTypes(ctx->type(), this->controller, this->structs);
        std::vector<llvm::Type*> types;
        bool ellip = false;
        // std::cout << ctx->param().size() << std::endl;
        this->functionNameScope.insert({functionName, {std::vector<std::string>(), false}});
        if(ctx->param().size() !=0) {
            llvm::Type* type;
            LucidusParser::IdecContext * idec;
            for(int i = 0; i<ctx->param().size(); i++) {
                if(ctx->param(i)->DOTS() != nullptr) {
                    ellip = true;
                    this->functionNameScope[functionName].second = true;
                } else {
                    idec = ctx->param(i)->idec();
                    type = getTypes(idec->type(), this->controller, this->structs);
                    types.push_back(type);
                    this->functionNameScope[functionName].first.push_back(idec->ID()->getText());
                }
            }
        }
        controller->declareFunction(functionName.c_str(), llvm::FunctionType::get(rtype, types, ellip));
    }
    this->controller->defineFunction(ctx->ID()->getText());
    this->functionScope = {};
    for(int i = 0; i<ctx->param().size(); i++) {
            if(ctx->param(i)->DOTS() == nullptr){
                this->functionScope[ctx->param(i)->idec()->ID()->getText()] = controller->declareVariable(ctx->param(i)->idec()->ID()->getText(),getTypes(ctx->param(i)->idec()->type(), controller, this->structs));
                // llvm::StoreInst* val = controller->assignVariable((llvm::AllocaInst*)this->functionScope[ctx->param(i)->idec()->ID()->getText()], this->functionParamScope[ctx->ID(i)->getText()][ctx->param(i)->idec()->ID()->getText()]);
                // ith argument value (from llvm):
                llvm::Value* arg = this->controller->module->getFunction(ctx->ID()->getText())->getArg(i);
                llvm::StoreInst* val = controller->assignVariable((llvm::AllocaInst*)this->functionScope[ctx->param(i)->idec()->ID()->getText()], arg);
            }
        }
    return visitChildren(ctx);
}

antlrcpp::Any MyVisitor::visitFunc(LucidusParser::FuncContext *ctx)  {
        // make a default dummy function
        int h = 0;
        auto func = this->controller->module->getFunction("printf");
        if(ctx->ID() != nullptr)
        func = this->controller->module->getFunction(ctx->ID()->getText());
        else {
        // func is expr(0)
        h = 1;
        func = (llvm::Function*) std::any_cast<llvm::Value*>(visit(ctx->expr(0)));
        }
        // auto func = std::any_cast<llvm::Function*>(visit(ctx->ID()));
        // get params
        if(func != nullptr){
        std::vector<llvm::Value*> params;
        for(int i = h; i<ctx->expr().size(); i++) {
            params.push_back(std::any_cast<llvm::Value*>((std::any)visit(ctx->expr(i))));
            // param name
        }

        // error handling (type) (check all params)
        // bool error = false;
        // if(params.size() != func->arg_size()) {
        //     std::cout << "Parameter mismatch at line " << ctx->getStart()->getLine() << std::endl;
        //     std::cout << "> " << ctx->getText() << std::endl;
        //     std::cout << func->getName().str() << " expects " << func->arg_size() << " parameters, but " << params.size() << " were given" << std::endl;
        //     exit(1);
        // };
        // for(int i = 0; i<params.size(); i++) {
        //     if(params[i]->getType() != func->getArg(i)->getType()) {
        //         std::cout << "Type error at line " << ctx->getStart()->getLine() << std::endl;
        //         std::cout << "> " << ctx->getText() << std::endl;
        //         // show types/ underline types
        //         // figure out what character the first type is on, and put an arrow under it + its type
        //         // do the same for the second type
        //         // put spaces upto the start of the type
        //         int chars = ctx->expr(i)->getStart()->getCharPositionInLine();
        //         for(int i = 0; i<chars; i++) {
        //             std::cout << " ";
        //         }
        //         std::string typeStr;
        //         typeStr.clear();
        //         llvm::raw_string_ostream rso2(typeStr);
        //         params[i]->getType()->print(rso2);
        //         std::cout << "^ " << rso2.str() << ", expected ";
        //         typeStr.clear();
        //         llvm::raw_string_ostream rso3(typeStr);
        //         func->getArg(i)->getType()->print(rso3);
        //         std::cout << rso3.str() << std::endl;
        //         error = true;
        //     }
        // }
        // if(error) exit(1);

        return (llvm::Value*)this->controller->builder->CreateCall(func, params);
        }else {
            std::cout << "Function " << ctx->ID()->getText() << " not found" << std::endl;
            return nullptr;
        }
}

antlrcpp::Any MyVisitor::visitStat(LucidusParser::StatContext *ctx) {
    // std::cout << ctx->children.size()  << std::endl;
    // std::cout << ctx->getText() << std::endl;
    if(ctx->expr() !=nullptr && ctx->children.size() == 1) {
        return visit(ctx->expr());
    } else if(ctx->ret() != nullptr && ctx->children.size() == 1) {
        auto rvalue = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->ret()->expr()));
        // error checking (type)
        // if rvalue->getType() neq parent func return type, we got a problem
        if(rvalue->getType() != controller->builder->GetInsertBlock()->getParent()->getReturnType()) {
            std::cout << "Type error at line " << ctx->ret()->getStart()->getLine() << std::endl;
            std::cout << "> " << ctx->ret()->getText() << std::endl;
            // show types/ underline types
            // figure out what character the first type is on, and put an arrow under it + its type
            // do the same for the second type
            // put spaces upto the start of the type
            int chars = ctx->ret()->expr()->getStart()->getCharPositionInLine();
            for(int i = 0; i<chars; i++) {
                std::cout << " ";
            }
            std::string typeStr;
            typeStr.clear();
            llvm::raw_string_ostream rso2(typeStr);
            rvalue->getType()->print(rso2);
            std::cout << "^ " << rso2.str() << ", expected ";
            typeStr.clear();
            llvm::raw_string_ostream rso3(typeStr);
            controller->builder->GetInsertBlock()->getParent()->getReturnType()->print(rso3);
            std::cout << rso3.str() << std::endl;
            std::cout << "---------------------" << std::endl;
            // exit(1);
        }
        return controller->builder->CreateRet(rvalue);
    }else if(ctx->vdec() != nullptr && ctx->children.size() == 1) {
        std::string name = ctx->vdec()->idec()->ID()->getText();
        llvm::Type* type = getTypes(ctx->vdec()->idec()->type(), this->controller, this->structs);
        // llvm::Value* val = controller->builder->CreateAlloca(type, std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->vdec()->expr())), name);
        llvm::AllocaInst* ptr = controller->declareVariable(name, type);
        // llvm::StoreInst* val = controller->assignVariable(ptr, std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->vdec()->expr())));
        // manually handle storeInst
        auto evaluatedExpr = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->vdec()->expr()));
        llvm::StoreInst* val = controller->builder->CreateStore(evaluatedExpr, ptr);
        this->functionScope[name] = (llvm::Value*)ptr;

        // error checking (type)
        // errorHandler e_handler2;
        // e_handler2.llvmController = this->controller;
        // // e_handler2.visitor = std::make_shared<MyVisitor>(this);
        // e_handler2.structs = this->structs;
        // e_handler2.typeError<LucidusParser::VdecContext*>(ctx->vdec()->idec()->type(), ctx->vdec()->expr()->type(), ctx->vdec());
        // this->e_handler->typeError<LucidusParser::VdecContext*>(ctx->vdec()->idec()->type(), ctx->vdec()->expr()->type(), ctx->vdec());


        if(evaluatedExpr->getType() != type) {
            std::cout << "Type error at line " << ctx->vdec()->getStart()->getLine() << std::endl;
            std::cout << "> " << ctx->vdec()->getText() << std::endl;
            // show types/ underline types
            // figure out what character the first type is on, and put an arrow under it + its type
            // do the same for the second type
            auto charOfTypeOne = ctx->vdec()->idec()->type()->getStart()->getCharPositionInLine();
            // put spaces upto the start of the type
            for(int i = 0; i<charOfTypeOne; i++) {
                std::cout << " ";
            }
            std::string typeStr;
            llvm::raw_string_ostream rso(typeStr);
            type->print(rso);
            std::cout << "^ " << rso.str();
            // add more spaces to get to where second type is
            for(int i = 0; i<ctx->vdec()->idec()->type()->getText().length(); i++) {
                std::cout << " ";
            }
            typeStr.clear();
            llvm::raw_string_ostream rso2(typeStr);
            std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->vdec()->expr()))->getType()->print(rso2);
            std::cout << "^ " << rso2.str() << std::endl;
            std::cout << "---------------------" << std::endl;
            // exit(1);
        }

        return ptr;
    }else if(ctx->edec() != nullptr && ctx->children.size() == 1) {
        std::string name = ctx->edec()->idec()->ID()->getText();
        llvm::Type* type = getTypes(ctx->edec()->idec()->type(), this->controller, this->structs);
        // llvm::Value* val = controller->builder->CreateAlloca(type, std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->vdec()->expr())), name);
        llvm::AllocaInst* ptr = controller->declareVariable(name, type);
        this->functionScope[name] = (llvm::Value*)ptr;
        // return ptr;
        return visitChildren(ctx);
    }else if(ctx->infdec() != nullptr && ctx->children.size() == 1) {
        std::string name = ctx->infdec()->ID()->getText();
        auto val = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->infdec()->expr()));
        llvm::Type* type = val->getType(); 
        llvm::AllocaInst* ptr = controller->declareVariable(name, type);
        controller->assignVariable(ptr, val);
        this->functionScope[name] = (llvm::Value*)ptr;
        return ptr;
    }else if(ctx->assign() != nullptr && ctx->children.size() == 1) {
        // std::cout << "here" << std::endl;
        // any x = 4;
        // expr = expr, first exp is probably a pointer.
                    bool old = this->loadingAvailable;
                    this->loadingAvailable = false;
        
        auto non_ptr = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->assign()->expr(0)));
                    this->loadingAvailable = old;
        // get ptr to non_ptr
        // auto temp = controller->builder->CreateAlloca(non_ptr->getType(), nullptr);
        // controller->builder->CreateStore(non_ptr, temp);
        // auto ptr = controller->getVariable(temp);
        
        auto val = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->assign()->expr(1)));
        controller->builder->CreateStore(val, non_ptr);

        // error checking (type)
        // if it is not a struct type
        // get the type of the allocated value
        // auto type = ((llvm::AllocaInst*)non_ptr)->getAllocatedType();
        // do the same thing as line above but make it work for other types of pointers besides allocas
        auto type = non_ptr->getType()->getContainedType(0);
        if(llvm::isa<llvm::StructType>(type)){
        // n = the nth member of the struct, check the index of the member called
        int n = 0;
        for(int i = 0; i<this->structs[type->getStructName().str()]->getNumElements(); i++) {
            if(this->structNames[type->getStructName().str()][i] == ctx->assign()->expr(0)->ID()->getText()) {
                n = i;
                break;
            }
        }
        type = type->getContainedType(n);
        }

        if(val->getType() != type) {
            std::cout << "Type error at line " << ctx->assign()->getStart()->getLine() << std::endl;
            std::cout << "> " << ctx->assign()->getText() << std::endl;
            // show types/ underline types
            // figure out what character the first type is on, and put an arrow under it + its type
            // do the same for the second type
            // put spaces upto the start of the type
            int chars = ctx->assign()->expr(0)->getStart()->getCharPositionInLine();
            for(int i = 0; i<chars; i++) {
                std::cout << " ";
            }
            std::string typeStr;
            typeStr.clear();
            llvm::raw_string_ostream rso2(typeStr);
            type->print(rso2);
            std::cout << "^ " << rso2.str() << std::endl;
            // underline next object
            chars = ctx->assign()->expr(1)->getStart()->getCharPositionInLine();
            for(int i = 0; i<chars; i++) {
                std::cout << " ";
            }
            typeStr.clear();
            llvm::raw_string_ostream rso3(typeStr);
            val->getType()->print(rso3);
            std::cout << "^ " << rso3.str() << std::endl;
            std::cout << "---------------------" << std::endl;
            // exit(1);
        }
        // controller->assignVariable(ptr, val);
        return (llvm::Value*)non_ptr;
    }else if(ctx->label() != nullptr && ctx->children.size() == 1) {
        // make basic block
        // parent function
        llvm::BasicBlock*  bb;
        auto parent = controller->builder->GetInsertBlock()->getParent();
        if(blocks[ctx->label()->ID()->getText()] == nullptr)
        bb = llvm::BasicBlock::Create(this->controller->ctx, ctx->label()->ID()->getText(), parent);
        else bb = blocks[ctx->label()->ID()->getText()];
        // insert basic block
        blocks.insert(std::pair(ctx->label()->ID()->getText(), bb));
        controller->builder->SetInsertPoint(bb);
        // return bb;
        return visitChildren(ctx);
    } else if(ctx->goto_() != nullptr && ctx->children.size() == 1) {
        auto name = ctx->goto_()->ID();
        if(blocks[name->getText()] == nullptr)
            // make block
            blocks[name->getText()] = llvm::BasicBlock::Create(this->controller->ctx, name->getText(), controller->builder->GetInsertBlock()->getParent());
        // get  basic block from llvm by name
         // goto statement/ jump statment
        // get block
        controller->builder->CreateBr(blocks[name->getText()]);
        // increment opcode count
        // controller->builder->CreateAdd(controller->builder->getInt32(0), controller->builder->getInt32(0));
        //  llvm::Instruction* inst = controller->builder->GetInsertBlock()->getTerminator();
        return visitChildren(ctx);
    }else if(ctx->if_() != nullptr && ctx->children.size() == 1) {
        // if statement
        // get condition
        auto cond = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->if_()->expr()));
        // get parent function
        auto parent = controller->builder->GetInsertBlock()->getParent();
        // make basic blocks
        // no else block just regular if then

        // auto iff = llvm::BasicBlock::Create(this->controller->ctx, "if", parent);
        // auto iff = llvm::BasicBlock::Create(this->controller->ctx, "if", parent);
auto then = llvm::BasicBlock::Create(this->controller->ctx, "", parent);
auto endThen = llvm::BasicBlock::Create(this->controller->ctx, "", parent);
// auto merge = llvm::BasicBlock::Create(this->controller->ctx, "merge", parent);

// insert basic blocks
controller->builder->CreateCondBr(cond, then, endThen);
//  controller->builder->CreateAdd(controller->builder->getInt32(0), controller->builder->getInt32(0));
controller->builder->SetInsertPoint(then);
// visit if block
for(int i = 0; i<ctx->if_()->stat().size(); i++)
    visit(ctx->if_()->stat(i));


// End of 'then' block
if(then->getTerminator() == nullptr)
controller->builder->CreateBr(endThen);
// controller->builder->CreateAdd(controller->builder->getInt32(0), controller->builder->getInt32(0));
// inc opcode numbering
// controller->builder->CreateAdd(controller->builder->getInt32(0), controller->builder->getInt32(0));
controller->builder->SetInsertPoint(endThen);

// merge block should be AFTER the if statement and NOT contain the then body
// controller->builder->CreateBr(merge);
// controller->builder->SetInsertPoint(merge);
// return visitChildren(ctx);
    return nullptr;

    }else if(ctx->while_() != nullptr && ctx->children.size() == 1) {
        // w s
        auto parent = controller->builder->GetInsertBlock()->getParent();

        /*
        // two blocks: while, end
        at the end of while block, jump to while block if cond
        else jump to end condition
        */
        auto while_ = llvm::BasicBlock::Create(this->controller->ctx, "", parent);
        auto endWhile = llvm::BasicBlock::Create(this->controller->ctx, "", parent);

        // insert basic blocks
        controller->builder->CreateBr(while_);
        controller->builder->SetInsertPoint(while_);
        // visit while block
        for(int i = 0; i<ctx->while_()->stat().size(); i++)
            visit(ctx->while_()->stat(i));

        // now visit condition
        auto cond = std::any_cast<llvm::Value*>((std::any)visitExpr(ctx->while_()->expr()));
        controller->builder->CreateCondBr(cond, while_, endWhile);
        controller->builder->SetInsertPoint(endWhile);
        // return visitChildren(ctx);
        return nullptr;
    }else if(ctx->imrt() != nullptr) {
        // import statement
        // 'import' STRING

        // get string
        std::string str = ctx->imrt()->STRING()->getText();
        // put string in std::ifstring
        std::ifstream file(str.substr(1, str.length()-2));
        compile(this->controller, file, *this);
        return nullptr;
    } else
    return visitChildren(ctx);
}

std::any MyVisitor::visitStruct(LucidusParser::StructContext *ctx) {
    std::string name = ctx->ID()->getText();

    // declare struct before defining it

    std::vector<llvm::Type*> types;
    llvm::StructType* stype = llvm::StructType::create(this->controller->ctx, name);
    // put struct into ir
    this->controller->module->getOrInsertGlobal(name, stype); // why does this segfault..
    for(int i = 0; i<ctx->idec().size(); i++) {
        // std::cout << ctx->idec(i)->getText() << std::endl;
        types.push_back(getTypes(ctx->idec(i)->type(), this->controller, this->structs));
    }
    this->structs[name] = stype;
    stype->setName(name);
    // setbody
    stype->setBody(types);
    // now for the names or whatever they are (ID inside idec)
    std::vector<std::string> names;
    for(int i = 0; i<ctx->idec().size(); i++) {
        names.push_back(ctx->idec(i)->ID()->getText());
    }
    this->structNames[name] = names;
    return stype;
}