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
std::map<std::string, llvm::Value*> globalScope;
std::map<std::string, llvm::Value*> functionScope;
public:
    std::shared_ptr<LLVMController> controller;
    antlrcpp::Any visitProgram(LucidusParser::ProgramContext *ctx) override {
        // std::cout << "Visiting program" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitStat(LucidusParser::StatContext *ctx) override;
    
    antlrcpp::Any visitDec(LucidusParser::DecContext *ctx) override;

    antlrcpp::Any visitFunc(LucidusParser::FuncContext *ctx) override;

    antlrcpp::Any visitExpr(LucidusParser::ExprContext *ctx) override;

    antlrcpp::Any visitDef(LucidusParser::DefContext *ctx) override;

};