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
#include <llvm/Support/raw_ostream.h>

#include "LLVMController.h"

// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"

#include "MyVisitor.h"

antlrcpp::Any MyVisitor::visitDec(LucidusParser::DecContext *ctx) {
        std::string functionName = ctx->ID()->getText();
        llvm::Type* rtype = getTypes(ctx->type(), this->controller);
        std::vector<llvm::Type*> types;
        bool ellip = false;
        for(int i = 0; i<ctx->param().size(); i++) {
            if(ctx->param(i)->DOTS() != nullptr) { // fixed the typo here and used size() method
                ellip = true;
            }else
            types.push_back(getTypes(ctx->param(i)->idec()->type(), this->controller));
        }
        controller->declareFunction(functionName.c_str(), llvm::FunctionType::get(rtype, types, ellip));
        return visitChildren(ctx);
}

antlrcpp::Any MyVisitor::visitExpr(LucidusParser::ExprContext *ctx) {
    if(ctx->INT() != nullptr) {
        int v = std::stoi(ctx->INT()->getText());
        llvm::Value *val = llvm::ConstantInt::get(llvm::Type::getInt32Ty(controller->ctx), v);
        return val;
    }else if(ctx->STRING() != nullptr) {
        // auto str = controller->builder->CreateGlobalStringPtr(ctx->STRING()->getText());
        // // load and return str
        // auto loadedStr = controller->builder->CreateLoad(str->getType(), str);
        // // now make loadStr llvm::Value* and return
        // return (llvm::Value*)loadedStr;
        // forget all that, make it an an array of chars, but in pointer form
        std::string str = ctx->STRING()->getText();
        std::vector<llvm::Constant*> chars;
        for(int i = 0; i<str.length(); i++) {
            chars.push_back(llvm::ConstantInt::get(llvm::Type::getInt8Ty(controller->ctx), str[i]));
        }
        chars.push_back(llvm::ConstantInt::get(llvm::Type::getInt8Ty(controller->ctx), 0));
        auto arr = llvm::ConstantArray::get(llvm::ArrayType::get(llvm::Type::getInt8Ty(controller->ctx), chars.size()), chars);
        auto global = new llvm::GlobalVariable(*controller->module, llvm::ArrayType::get(llvm::Type::getInt8Ty(controller->ctx), chars.size()), true, llvm::GlobalValue::PrivateLinkage, arr, "str");
        auto ptr = controller->builder->CreateInBoundsGEP(global->getValueType(), global, {controller->builder->getInt32(0), controller->builder->getInt32(0)});
        return ptr;
    }else if(ctx->func() != nullptr) {
        return visit(ctx->func());;
    }else
    return (llvm::Value *)llvm::ConstantInt::get(llvm::Type::getInt32Ty(controller->ctx), 0);
    // return visitChildren(ctx);
    // return  controller->builder->CreateCall(controller->module->getFunction("printf"), {});
}

antlrcpp::Any MyVisitor::visitDef(LucidusParser::DefContext *ctx) {
    this->controller->defineFunction(ctx->ID(0)->getText());
    // for(int i = 0; i<ctx->stat().size(); i++) {
    //     visit(ctx->stat(i));
    // }
    return visitChildren(ctx);
}

antlrcpp::Any MyVisitor::visitFunc(LucidusParser::FuncContext *ctx)  {
        auto func = this->controller->module->getFunction(ctx->ID()->getText());
        // get params
        std::vector<llvm::Value*> params;
        for(int i = 0; i<ctx->expr().size(); i++) {
            params.push_back(std::any_cast<llvm::Value*>((std::any)visit(ctx->expr(i))));

            // params.push_back(std::any_cast<llvm::Value*>(visit(ctx->expr(i))));
        }
        return this->controller->builder->CreateCall(func, params);
}

antlrcpp::Any MyVisitor::visitStat(LucidusParser::StatContext *ctx) {
    if(ctx->expr() != nullptr) {
        return visit(ctx->expr());
    }
    return visitChildren(ctx);
}