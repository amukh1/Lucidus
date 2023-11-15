
// Generated from LucidusParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LucidusParser : public antlr4::Parser {
public:
  enum {
    AND = 1, OR = 2, NOT = 3, EQ = 4, NEQ = 5, PLUS = 6, SUB = 7, STAR = 8, 
    DIV = 9, MOD = 10, OPAREN = 11, CPAREN = 12, COMMA = 13, SEMI = 14, 
    DEF = 15, STRUCT = 16, DECL = 17, ARROW = 18, GTR = 19, LESS = 20, DCOL = 21, 
    PTR = 22, COL = 23, RETURN = 24, LABEL = 25, GOTO = 26, DOT = 27, DOTS = 28, 
    IF = 29, IMPRT = 30, ELSE = 31, SIZEOF = 32, LCURLY = 33, RCURLY = 34, 
    LBRACK = 35, RBRACK = 36, INT = 37, FLOAT = 38, ID = 39, WS = 40, COMMENT = 41, 
    STRING = 42
  };

  enum {
    RuleProgram = 0, RuleRawtype = 1, RuleFptr = 2, RuleType = 3, RuleIdec = 4, 
    RuleParam = 5, RuleDec = 6, RuleRet = 7, RuleVdec = 8, RuleInfdec = 9, 
    RuleEdec = 10, RuleAssign = 11, RuleLabel = 12, RuleGoto = 13, RuleIf = 14, 
    RuleImrt = 15, RuleStat = 16, RuleDef = 17, RuleFunc = 18, RuleExpr = 19, 
    RuleStruct = 20
  };

  explicit LucidusParser(antlr4::TokenStream *input);

  LucidusParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LucidusParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class RawtypeContext;
  class FptrContext;
  class TypeContext;
  class IdecContext;
  class ParamContext;
  class DecContext;
  class RetContext;
  class VdecContext;
  class InfdecContext;
  class EdecContext;
  class AssignContext;
  class LabelContext;
  class GotoContext;
  class IfContext;
  class ImrtContext;
  class StatContext;
  class DefContext;
  class FuncContext;
  class ExprContext;
  class StructContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    std::vector<DefContext *> def();
    DefContext* def(size_t i);
    std::vector<StructContext *> struct_();
    StructContext* struct_(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  RawtypeContext : public antlr4::ParserRuleContext {
  public:
    RawtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RawtypeContext* rawtype();

  class  FptrContext : public antlr4::ParserRuleContext {
  public:
    FptrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPAREN();
    antlr4::tree::TerminalNode* OPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CPAREN();
    antlr4::tree::TerminalNode* CPAREN(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FptrContext* fptr();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    FptrContext *fptr();
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  IdecContext : public antlr4::ParserRuleContext {
  public:
    IdecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COL();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdecContext* idec();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdecContext *idec();
    antlr4::tree::TerminalNode *DOTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  DecContext : public antlr4::ParserRuleContext {
  public:
    DecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *CPAREN();
    antlr4::tree::TerminalNode *ARROW();
    TypeContext *type();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecContext* dec();

  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetContext* ret();

  class  VdecContext : public antlr4::ParserRuleContext {
  public:
    VdecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdecContext *idec();
    antlr4::tree::TerminalNode *EQ();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VdecContext* vdec();

  class  InfdecContext : public antlr4::ParserRuleContext {
  public:
    InfdecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DCOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InfdecContext* infdec();

  class  EdecContext : public antlr4::ParserRuleContext {
  public:
    EdecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdecContext *idec();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EdecContext* edec();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  GotoContext : public antlr4::ParserRuleContext {
  public:
    GotoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoContext* goto_();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfContext* if_();

  class  ImrtContext : public antlr4::ParserRuleContext {
  public:
    ImrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPRT();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImrtContext* imrt();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VdecContext *vdec();
    InfdecContext *infdec();
    EdecContext *edec();
    AssignContext *assign();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMI();
    DecContext *dec();
    RetContext *ret();
    LabelContext *label();
    GotoContext *goto_();
    IfContext *if_();
    ImrtContext *imrt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  DefContext : public antlr4::ParserRuleContext {
  public:
    DefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *CPAREN();
    antlr4::tree::TerminalNode *ARROW();
    TypeContext *type();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefContext* def();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPAREN();
    antlr4::tree::TerminalNode* OPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CPAREN();
    antlr4::tree::TerminalNode* CPAREN(size_t i);
    antlr4::tree::TerminalNode *ID();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *STRING();
    FuncContext *func();
    antlr4::tree::TerminalNode *PTR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SIZEOF();
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *CPAREN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MOD();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GTR();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ARROW();
    TypeContext *type();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  StructContext : public antlr4::ParserRuleContext {
  public:
    StructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<IdecContext *> idec();
    IdecContext* idec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructContext* struct_();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

