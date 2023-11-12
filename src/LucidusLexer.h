
// Generated from LucidusLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LucidusLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, OR = 2, NOT = 3, EQ = 4, PLUS = 5, SUB = 6, STAR = 7, DIV = 8, 
    MOD = 9, OPAREN = 10, CPAREN = 11, COMMA = 12, SEMI = 13, DEF = 14, 
    STRUCT = 15, DECL = 16, ARROW = 17, GTR = 18, LESS = 19, DCOL = 20, 
    PTR = 21, COL = 22, RETURN = 23, LABEL = 24, GOTO = 25, DOT = 26, DOTS = 27, 
    IF = 28, IMPRT = 29, ELSE = 30, LCURLY = 31, RCURLY = 32, INT = 33, 
    FLOAT = 34, ID = 35, WS = 36, COMMENT = 37, STRING = 38
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

