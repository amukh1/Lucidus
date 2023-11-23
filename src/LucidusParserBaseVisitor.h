
// Generated from LucidusParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LucidusParserVisitor.h"


/**
 * This class provides an empty implementation of LucidusParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LucidusParserBaseVisitor : public LucidusParserVisitor {
public:

  virtual std::any visitProgram(LucidusParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRawtype(LucidusParser::RawtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFptr(LucidusParser::FptrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(LucidusParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdec(LucidusParser::IdecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(LucidusParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec(LucidusParser::DecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRet(LucidusParser::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVdec(LucidusParser::VdecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfdec(LucidusParser::InfdecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEdec(LucidusParser::EdecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(LucidusParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(LucidusParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoto(LucidusParser::GotoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(LucidusParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile(LucidusParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImrt(LucidusParser::ImrtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(LucidusParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef(LucidusParser::DefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(LucidusParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(LucidusParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(LucidusParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }


};

