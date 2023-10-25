#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <memory>
// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"

class MyVisitor : public LucidusParserBaseVisitor {
public:
    antlrcpp::Any visitProgram(LucidusParser::ProgramContext *ctx) override {
        std::cout << "Visiting program" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitStat(LucidusParser::StatContext *ctx) override {
        std::cout << "Visiting statement" << std::endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitExpr(LucidusParser::ExprContext *ctx) override {
        std::cout << "Visiting expression" << std::endl;
        return visitChildren(ctx);
    }
};