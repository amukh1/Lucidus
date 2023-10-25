#pragma once

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

class MyVisitor : public LucidusParserBaseVisitor {
public:
    std::shared_ptr<LLVMController> controller;
    antlrcpp::Any visitProgram(LucidusParser::ProgramContext *ctx) override {
        // std::cout << "Visiting program" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitStat(LucidusParser::StatContext *ctx) override {
        // std::cout << "Visiting statement" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitExpr(LucidusParser::ExprContext *ctx) override {
        // std::cout << "Visiting expression" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitDec(LucidusParser::DecContext *ctx) override {
        std::string functionName = ctx->ID()->getText();
        llvm::Type* rtype = getTypes(ctx->type(), controller);
        std::vector<llvm::Type*> types;
        bool ellip = false;
        for(int i = 0; i<ctx->param().size(); i++) {
            if(ctx->param(i)->DOTS() != nullptr) { // fixed the typo here and used size() method
                ellip = true;
            }else
            types.push_back(getTypes(ctx->param(i)->idec()->type(), controller));
        }
        controller->declareFunction(functionName.c_str(), llvm::FunctionType::get(rtype, types, ellip));
        return visitChildren(ctx);
    }

};