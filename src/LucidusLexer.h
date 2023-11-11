
// Generated from LucidusLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LucidusLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, OR = 2, NOT = 3, EQ = 4, PLUS = 5, SUB = 6, STAR = 7, DIV = 8, 
    OPAREN = 9, CPAREN = 10, COMMA = 11, SEMI = 12, DEF = 13, STRUCT = 14, 
    DECL = 15, ARROW = 16, GTR = 17, LESS = 18, DCOL = 19, PTR = 20, COL = 21, 
    RETURN = 22, LABEL = 23, GOTO = 24, DOT = 25, DOTS = 26, IF = 27, IMPRT = 28, 
    ELSE = 29, LCURLY = 30, RCURLY = 31, INT = 32, FLOAT = 33, ID = 34, 
    WS = 35, COMMENT = 36, STRING = 37
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

