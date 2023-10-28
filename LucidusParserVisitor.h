
// Generated from LucidusParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LucidusParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LucidusParser.
 */
class  LucidusParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LucidusParser.
   */
    virtual std::any visitProgram(LucidusParser::ProgramContext *context) = 0;

    virtual std::any visitRawtype(LucidusParser::RawtypeContext *context) = 0;

    virtual std::any visitType(LucidusParser::TypeContext *context) = 0;

    virtual std::any visitIdec(LucidusParser::IdecContext *context) = 0;

    virtual std::any visitParam(LucidusParser::ParamContext *context) = 0;

    virtual std::any visitDec(LucidusParser::DecContext *context) = 0;

    virtual std::any visitRet(LucidusParser::RetContext *context) = 0;

    virtual std::any visitVdec(LucidusParser::VdecContext *context) = 0;

    virtual std::any visitEdec(LucidusParser::EdecContext *context) = 0;

    virtual std::any visitVdef(LucidusParser::VdefContext *context) = 0;

    virtual std::any visitStat(LucidusParser::StatContext *context) = 0;

    virtual std::any visitDef(LucidusParser::DefContext *context) = 0;

    virtual std::any visitExpr(LucidusParser::ExprContext *context) = 0;

    virtual std::any visitStruct(LucidusParser::StructContext *context) = 0;

    virtual std::any visitFunc(LucidusParser::FuncContext *context) = 0;


};

