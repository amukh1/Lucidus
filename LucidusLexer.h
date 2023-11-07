
// Generated from LucidusLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LucidusLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, OR = 2, NOT = 3, EQ = 4, PLUS = 5, SUB = 6, STAR = 7, DIV = 8, 
    OPAREN = 9, CPAREN = 10, COMMA = 11, SEMI = 12, DEF = 13, STRUCT = 14, 
    DECL = 15, ARROW = 16, DCOL = 17, PTR = 18, COL = 19, RETURN = 20, LABEL = 21, 
    GOTO = 22, DOT = 23, DOTS = 24, IF = 25, LCURLY = 26, RCURLY = 27, INT = 28, 
    FLOAT = 29, ID = 30, WS = 31, COMMENT = 32, STRING = 33
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

