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
#include "errorHandler.h"

class MyVisitor : public LucidusParserBaseVisitor {
public:
    std::map<std::string, llvm::Value*> functionScope;
    std::map<std::string, std::map<std::string, llvm::Value*>> functionParamScope;
    std::map<std::string, std::pair<std::vector<std::string>,int>> functionNameScope;
    std::map<std::string, llvm::StructType*> structs;
    std::map<std::string, std::vector<std::string>> structNames;
    bool loadingAvailable = true;
    std::map<std::string, llvm::BasicBlock*> blocks;
    std::vector<llvm::BasicBlock*> allBlocks;
    std::shared_ptr<LLVMController> controller;
    std::shared_ptr<errorHandler> e_handler;
    int blockCount = 0;
    antlrcpp::Any visitProgram(LucidusParser::ProgramContext *ctx) override {
        // std::cout << "Visiting program" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitStat(LucidusParser::StatContext *ctx) override;
    
    antlrcpp::Any visitDec(LucidusParser::DecContext *ctx) override;

    antlrcpp::Any visitFunc(LucidusParser::FuncContext *ctx) override;

    antlrcpp::Any visitExpr(LucidusParser::ExprContext *ctx) override;

    antlrcpp::Any visitDef(LucidusParser::DefContext *ctx) override;

    std::any visitStruct(LucidusParser::StructContext *ctx) override;

};