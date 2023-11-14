
// Generated from LucidusLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LucidusLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, OR = 2, NOT = 3, EQ = 4, NEQ = 5, PLUS = 6, SUB = 7, STAR = 8, 
    DIV = 9, MOD = 10, OPAREN = 11, CPAREN = 12, COMMA = 13, SEMI = 14, 
    DEF = 15, STRUCT = 16, DECL = 17, ARROW = 18, GTR = 19, LESS = 20, DCOL = 21, 
    PTR = 22, COL = 23, RETURN = 24, LABEL = 25, GOTO = 26, DOT = 27, DOTS = 28, 
    IF = 29, IMPRT = 30, ELSE = 31, LCURLY = 32, RCURLY = 33, LBRACK = 34, 
    RBRACK = 35, INT = 36, FLOAT = 37, ID = 38, WS = 39, COMMENT = 40, STRING = 41
  };

  explicit LucidusLexer(antlr4::CharStream *input);

  ~LucidusLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

