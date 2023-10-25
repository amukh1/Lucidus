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
    return llvm::ConstantInt::get(llvm::Type::getInt32Ty(controller->ctx), 0);
}

antlrcpp::Any MyVisitor::visitDef(LucidusParser::DefContext *ctx) {
    this->controller->defineFunction(ctx->ID(0)->getText());
    return visitChildren(ctx);
}

antlrcpp::Any MyVisitor::visitFunc(LucidusParser::FuncContext *ctx)  {
        auto func = this->controller->module->getFunction(ctx->ID()->getText());
        // get params
        std::vector<llvm::Value*> params;
        for(int i = 0; i<ctx->expr().size(); i++) {
            params.push_back(std::any_cast<llvm::Value*>(visit(ctx->expr(i))));
        }
        return this->controller->builder->CreateCall(func, params);
}