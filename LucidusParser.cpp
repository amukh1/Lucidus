
// Generated from LucidusParser.g4 by ANTLR 4.13.1


#include "LucidusParserVisitor.h"

#include "LucidusParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LucidusParserStaticData final {
  LucidusParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LucidusParserStaticData(const LucidusParserStaticData&) = delete;
  LucidusParserStaticData(LucidusParserStaticData&&) = delete;
  LucidusParserStaticData& operator=(const LucidusParserStaticData&) = delete;
  LucidusParserStaticData& operator=(LucidusParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lucidusparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LucidusParserStaticData *lucidusparserParserStaticData = nullptr;

void lucidusparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lucidusparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(lucidusparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LucidusParserStaticData>(
    std::vector<std::string>{
      "program", "stat", "rawtype", "type", "idec", "def", "expr", "func"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
      "')'", "','", "';'", "'defn'", "'decl'", "'->'", "':'", "'return'", 
      "'...'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
      "CPAREN", "COMMA", "SEMI", "DEF", "DECL", "ARROW", "COL", "RETURN", 
      "DOTS", "LCURLY", "RCURLY", "INT", "ID", "WS", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,155,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,1,0,5,0,19,8,0,10,0,12,0,22,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,39,8,1,1,1,1,1,1,1,3,1,44,8,1,5,1,
  	46,8,1,10,1,12,1,49,9,1,3,1,51,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,
  	1,61,8,1,1,2,1,2,1,3,1,3,5,3,67,8,3,10,3,12,3,70,9,3,1,4,1,4,1,4,1,4,
  	1,5,1,5,1,5,1,5,1,5,1,5,5,5,82,8,5,10,5,12,5,85,9,5,3,5,87,8,5,1,5,1,
  	5,1,5,1,5,1,5,5,5,94,8,5,10,5,12,5,97,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,3,6,112,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,138,
  	8,6,10,6,12,6,141,9,6,1,7,1,7,1,7,1,7,1,7,5,7,148,8,7,10,7,12,7,151,9,
  	7,1,7,1,7,1,7,0,1,12,8,0,2,4,6,8,10,12,14,0,0,172,0,20,1,0,0,0,2,60,1,
  	0,0,0,4,62,1,0,0,0,6,64,1,0,0,0,8,71,1,0,0,0,10,75,1,0,0,0,12,111,1,0,
  	0,0,14,142,1,0,0,0,16,19,3,2,1,0,17,19,3,10,5,0,18,16,1,0,0,0,18,17,1,
  	0,0,0,19,22,1,0,0,0,20,18,1,0,0,0,20,21,1,0,0,0,21,23,1,0,0,0,22,20,1,
  	0,0,0,23,24,5,0,0,1,24,1,1,0,0,0,25,26,5,22,0,0,26,27,5,4,0,0,27,28,3,
  	12,6,0,28,29,5,12,0,0,29,61,1,0,0,0,30,31,3,12,6,0,31,32,5,12,0,0,32,
  	61,1,0,0,0,33,34,5,14,0,0,34,35,5,22,0,0,35,50,5,9,0,0,36,39,3,8,4,0,
  	37,39,5,18,0,0,38,36,1,0,0,0,38,37,1,0,0,0,39,47,1,0,0,0,40,43,5,11,0,
  	0,41,44,3,8,4,0,42,44,5,18,0,0,43,41,1,0,0,0,43,42,1,0,0,0,44,46,1,0,
  	0,0,45,40,1,0,0,0,46,49,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,51,1,0,
  	0,0,49,47,1,0,0,0,50,38,1,0,0,0,50,51,1,0,0,0,51,52,1,0,0,0,52,53,5,10,
  	0,0,53,54,5,15,0,0,54,55,5,22,0,0,55,61,5,12,0,0,56,57,5,17,0,0,57,58,
  	3,12,6,0,58,59,5,12,0,0,59,61,1,0,0,0,60,25,1,0,0,0,60,30,1,0,0,0,60,
  	33,1,0,0,0,60,56,1,0,0,0,61,3,1,0,0,0,62,63,5,22,0,0,63,5,1,0,0,0,64,
  	68,5,22,0,0,65,67,5,7,0,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,
  	69,1,0,0,0,69,7,1,0,0,0,70,68,1,0,0,0,71,72,5,22,0,0,72,73,5,16,0,0,73,
  	74,3,6,3,0,74,9,1,0,0,0,75,76,5,13,0,0,76,77,5,22,0,0,77,86,5,9,0,0,78,
  	83,3,8,4,0,79,80,5,11,0,0,80,82,3,8,4,0,81,79,1,0,0,0,82,85,1,0,0,0,83,
  	81,1,0,0,0,83,84,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,86,78,1,0,0,0,86,
  	87,1,0,0,0,87,88,1,0,0,0,88,89,5,10,0,0,89,90,5,15,0,0,90,91,5,22,0,0,
  	91,95,5,19,0,0,92,94,3,2,1,0,93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,
  	0,95,96,1,0,0,0,96,98,1,0,0,0,97,95,1,0,0,0,98,99,5,20,0,0,99,11,1,0,
  	0,0,100,101,6,6,-1,0,101,112,5,22,0,0,102,112,5,21,0,0,103,112,3,14,7,
  	0,104,105,5,3,0,0,105,112,3,12,6,10,106,107,5,9,0,0,107,108,3,12,6,0,
  	108,109,5,10,0,0,109,112,1,0,0,0,110,112,5,24,0,0,111,100,1,0,0,0,111,
  	102,1,0,0,0,111,103,1,0,0,0,111,104,1,0,0,0,111,106,1,0,0,0,111,110,1,
  	0,0,0,112,139,1,0,0,0,113,114,10,9,0,0,114,115,5,1,0,0,115,138,3,12,6,
  	10,116,117,10,8,0,0,117,118,5,2,0,0,118,138,3,12,6,9,119,120,10,7,0,0,
  	120,121,5,7,0,0,121,138,3,12,6,8,122,123,10,6,0,0,123,124,5,8,0,0,124,
  	138,3,12,6,7,125,126,10,5,0,0,126,127,5,5,0,0,127,138,3,12,6,6,128,129,
  	10,4,0,0,129,130,5,6,0,0,130,138,3,12,6,5,131,132,10,3,0,0,132,133,5,
  	15,0,0,133,134,5,9,0,0,134,135,3,12,6,0,135,136,5,10,0,0,136,138,1,0,
  	0,0,137,113,1,0,0,0,137,116,1,0,0,0,137,119,1,0,0,0,137,122,1,0,0,0,137,
  	125,1,0,0,0,137,128,1,0,0,0,137,131,1,0,0,0,138,141,1,0,0,0,139,137,1,
  	0,0,0,139,140,1,0,0,0,140,13,1,0,0,0,141,139,1,0,0,0,142,143,5,22,0,0,
  	143,144,5,9,0,0,144,149,3,12,6,0,145,146,5,11,0,0,146,148,3,12,6,0,147,
  	145,1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,152,1,
  	0,0,0,151,149,1,0,0,0,152,153,5,10,0,0,153,15,1,0,0,0,15,18,20,38,43,
  	47,50,60,68,83,86,95,111,137,139,149
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lucidusparserParserStaticData = staticData.release();
}

}

LucidusParser::LucidusParser(TokenStream *input) : LucidusParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LucidusParser::LucidusParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LucidusParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lucidusparserParserStaticData->atn, lucidusparserParserStaticData->decisionToDFA, lucidusparserParserStaticData->sharedContextCache, options);
}

LucidusParser::~LucidusParser() {
  delete _interpreter;
}

const atn::ATN& LucidusParser::getATN() const {
  return *lucidusparserParserStaticData->atn;
}

std::string LucidusParser::getGrammarFileName() const {
  return "LucidusParser.g4";
}

const std::vector<std::string>& LucidusParser::getRuleNames() const {
  return lucidusparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& LucidusParser::getVocabulary() const {
  return lucidusparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LucidusParser::getSerializedATN() const {
  return lucidusparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

LucidusParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::ProgramContext::EOF() {
  return getToken(LucidusParser::EOF, 0);
}

std::vector<LucidusParser::StatContext *> LucidusParser::ProgramContext::stat() {
  return getRuleContexts<LucidusParser::StatContext>();
}

LucidusParser::StatContext* LucidusParser::ProgramContext::stat(size_t i) {
  return getRuleContext<LucidusParser::StatContext>(i);
}

std::vector<LucidusParser::DefContext *> LucidusParser::ProgramContext::def() {
  return getRuleContexts<LucidusParser::DefContext>();
}

LucidusParser::DefContext* LucidusParser::ProgramContext::def(size_t i) {
  return getRuleContext<LucidusParser::DefContext>(i);
}


size_t LucidusParser::ProgramContext::getRuleIndex() const {
  return LucidusParser::RuleProgram;
}


std::any LucidusParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::ProgramContext* LucidusParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LucidusParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 23224840) != 0)) {
      setState(18);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LucidusParser::NOT:
        case LucidusParser::OPAREN:
        case LucidusParser::DECL:
        case LucidusParser::RETURN:
        case LucidusParser::INT:
        case LucidusParser::ID:
        case LucidusParser::STRING: {
          setState(16);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(17);
          def();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(22);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(23);
    match(LucidusParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

LucidusParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LucidusParser::StatContext::ID() {
  return getTokens(LucidusParser::ID);
}

tree::TerminalNode* LucidusParser::StatContext::ID(size_t i) {
  return getToken(LucidusParser::ID, i);
}

tree::TerminalNode* LucidusParser::StatContext::EQ() {
  return getToken(LucidusParser::EQ, 0);
}

LucidusParser::ExprContext* LucidusParser::StatContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::StatContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}

tree::TerminalNode* LucidusParser::StatContext::DECL() {
  return getToken(LucidusParser::DECL, 0);
}

tree::TerminalNode* LucidusParser::StatContext::OPAREN() {
  return getToken(LucidusParser::OPAREN, 0);
}

tree::TerminalNode* LucidusParser::StatContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

tree::TerminalNode* LucidusParser::StatContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

std::vector<LucidusParser::IdecContext *> LucidusParser::StatContext::idec() {
  return getRuleContexts<LucidusParser::IdecContext>();
}

LucidusParser::IdecContext* LucidusParser::StatContext::idec(size_t i) {
  return getRuleContext<LucidusParser::IdecContext>(i);
}

std::vector<tree::TerminalNode *> LucidusParser::StatContext::DOTS() {
  return getTokens(LucidusParser::DOTS);
}

tree::TerminalNode* LucidusParser::StatContext::DOTS(size_t i) {
  return getToken(LucidusParser::DOTS, i);
}

std::vector<tree::TerminalNode *> LucidusParser::StatContext::COMMA() {
  return getTokens(LucidusParser::COMMA);
}

tree::TerminalNode* LucidusParser::StatContext::COMMA(size_t i) {
  return getToken(LucidusParser::COMMA, i);
}

tree::TerminalNode* LucidusParser::StatContext::RETURN() {
  return getToken(LucidusParser::RETURN, 0);
}


size_t LucidusParser::StatContext::getRuleIndex() const {
  return LucidusParser::RuleStat;
}


std::any LucidusParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::StatContext* LucidusParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, LucidusParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(25);
      match(LucidusParser::ID);
      setState(26);
      match(LucidusParser::EQ);
      setState(27);
      expr(0);
      setState(28);
      match(LucidusParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(30);
      expr(0);
      setState(31);
      match(LucidusParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(33);
      match(LucidusParser::DECL);
      setState(34);
      match(LucidusParser::ID);
      setState(35);
      match(LucidusParser::OPAREN);
      setState(50);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LucidusParser::DOTS

      || _la == LucidusParser::ID) {
        setState(38);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case LucidusParser::ID: {
            setState(36);
            idec();
            break;
          }

          case LucidusParser::DOTS: {
            setState(37);
            match(LucidusParser::DOTS);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(47);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LucidusParser::COMMA) {
          setState(40);
          match(LucidusParser::COMMA);
          setState(43);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case LucidusParser::ID: {
              setState(41);
              idec();
              break;
            }

            case LucidusParser::DOTS: {
              setState(42);
              match(LucidusParser::DOTS);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(49);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(52);
      match(LucidusParser::CPAREN);
      setState(53);
      match(LucidusParser::ARROW);
      setState(54);
      match(LucidusParser::ID);
      setState(55);
      match(LucidusParser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(56);
      match(LucidusParser::RETURN);
      setState(57);
      expr(0);
      setState(58);
      match(LucidusParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RawtypeContext ------------------------------------------------------------------

LucidusParser::RawtypeContext::RawtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::RawtypeContext::ID() {
  return getToken(LucidusParser::ID, 0);
}


size_t LucidusParser::RawtypeContext::getRuleIndex() const {
  return LucidusParser::RuleRawtype;
}


std::any LucidusParser::RawtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitRawtype(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::RawtypeContext* LucidusParser::rawtype() {
  RawtypeContext *_localctx = _tracker.createInstance<RawtypeContext>(_ctx, getState());
  enterRule(_localctx, 4, LucidusParser::RuleRawtype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(LucidusParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

LucidusParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::TypeContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

std::vector<tree::TerminalNode *> LucidusParser::TypeContext::STAR() {
  return getTokens(LucidusParser::STAR);
}

tree::TerminalNode* LucidusParser::TypeContext::STAR(size_t i) {
  return getToken(LucidusParser::STAR, i);
}


size_t LucidusParser::TypeContext::getRuleIndex() const {
  return LucidusParser::RuleType;
}


std::any LucidusParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::TypeContext* LucidusParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 6, LucidusParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(LucidusParser::ID);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LucidusParser::STAR) {
      setState(65);
      match(LucidusParser::STAR);
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdecContext ------------------------------------------------------------------

LucidusParser::IdecContext::IdecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::IdecContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::IdecContext::COL() {
  return getToken(LucidusParser::COL, 0);
}

LucidusParser::TypeContext* LucidusParser::IdecContext::type() {
  return getRuleContext<LucidusParser::TypeContext>(0);
}


size_t LucidusParser::IdecContext::getRuleIndex() const {
  return LucidusParser::RuleIdec;
}


std::any LucidusParser::IdecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitIdec(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::IdecContext* LucidusParser::idec() {
  IdecContext *_localctx = _tracker.createInstance<IdecContext>(_ctx, getState());
  enterRule(_localctx, 8, LucidusParser::RuleIdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(LucidusParser::ID);
    setState(72);
    match(LucidusParser::COL);
    setState(73);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefContext ------------------------------------------------------------------

LucidusParser::DefContext::DefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::DefContext::DEF() {
  return getToken(LucidusParser::DEF, 0);
}

std::vector<tree::TerminalNode *> LucidusParser::DefContext::ID() {
  return getTokens(LucidusParser::ID);
}

tree::TerminalNode* LucidusParser::DefContext::ID(size_t i) {
  return getToken(LucidusParser::ID, i);
}

tree::TerminalNode* LucidusParser::DefContext::OPAREN() {
  return getToken(LucidusParser::OPAREN, 0);
}

tree::TerminalNode* LucidusParser::DefContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

tree::TerminalNode* LucidusParser::DefContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

tree::TerminalNode* LucidusParser::DefContext::LCURLY() {
  return getToken(LucidusParser::LCURLY, 0);
}

tree::TerminalNode* LucidusParser::DefContext::RCURLY() {
  return getToken(LucidusParser::RCURLY, 0);
}

std::vector<LucidusParser::IdecContext *> LucidusParser::DefContext::idec() {
  return getRuleContexts<LucidusParser::IdecContext>();
}

LucidusParser::IdecContext* LucidusParser::DefContext::idec(size_t i) {
  return getRuleContext<LucidusParser::IdecContext>(i);
}

std::vector<LucidusParser::StatContext *> LucidusParser::DefContext::stat() {
  return getRuleContexts<LucidusParser::StatContext>();
}

LucidusParser::StatContext* LucidusParser::DefContext::stat(size_t i) {
  return getRuleContext<LucidusParser::StatContext>(i);
}

std::vector<tree::TerminalNode *> LucidusParser::DefContext::COMMA() {
  return getTokens(LucidusParser::COMMA);
}

tree::TerminalNode* LucidusParser::DefContext::COMMA(size_t i) {
  return getToken(LucidusParser::COMMA, i);
}


size_t LucidusParser::DefContext::getRuleIndex() const {
  return LucidusParser::RuleDef;
}


std::any LucidusParser::DefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitDef(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::DefContext* LucidusParser::def() {
  DefContext *_localctx = _tracker.createInstance<DefContext>(_ctx, getState());
  enterRule(_localctx, 10, LucidusParser::RuleDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(LucidusParser::DEF);
    setState(76);
    match(LucidusParser::ID);
    setState(77);
    match(LucidusParser::OPAREN);
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(78);
      idec();
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(79);
        match(LucidusParser::COMMA);
        setState(80);
        idec();
        setState(85);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(88);
    match(LucidusParser::CPAREN);
    setState(89);
    match(LucidusParser::ARROW);
    setState(90);
    match(LucidusParser::ID);
    setState(91);
    match(LucidusParser::LCURLY);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 23216648) != 0)) {
      setState(92);
      stat();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(LucidusParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LucidusParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::ExprContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::INT() {
  return getToken(LucidusParser::INT, 0);
}

LucidusParser::FuncContext* LucidusParser::ExprContext::func() {
  return getRuleContext<LucidusParser::FuncContext>(0);
}

tree::TerminalNode* LucidusParser::ExprContext::NOT() {
  return getToken(LucidusParser::NOT, 0);
}

std::vector<LucidusParser::ExprContext *> LucidusParser::ExprContext::expr() {
  return getRuleContexts<LucidusParser::ExprContext>();
}

LucidusParser::ExprContext* LucidusParser::ExprContext::expr(size_t i) {
  return getRuleContext<LucidusParser::ExprContext>(i);
}

tree::TerminalNode* LucidusParser::ExprContext::OPAREN() {
  return getToken(LucidusParser::OPAREN, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::STRING() {
  return getToken(LucidusParser::STRING, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::AND() {
  return getToken(LucidusParser::AND, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::OR() {
  return getToken(LucidusParser::OR, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::STAR() {
  return getToken(LucidusParser::STAR, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::DIV() {
  return getToken(LucidusParser::DIV, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::PLUS() {
  return getToken(LucidusParser::PLUS, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::SUB() {
  return getToken(LucidusParser::SUB, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}


size_t LucidusParser::ExprContext::getRuleIndex() const {
  return LucidusParser::RuleExpr;
}


std::any LucidusParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


LucidusParser::ExprContext* LucidusParser::expr() {
   return expr(0);
}

LucidusParser::ExprContext* LucidusParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LucidusParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  LucidusParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, LucidusParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(101);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(102);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(103);
      func();
      break;
    }

    case 4: {
      setState(104);
      match(LucidusParser::NOT);
      setState(105);
      expr(10);
      break;
    }

    case 5: {
      setState(106);
      match(LucidusParser::OPAREN);
      setState(107);
      expr(0);
      setState(108);
      match(LucidusParser::CPAREN);
      break;
    }

    case 6: {
      setState(110);
      match(LucidusParser::STRING);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(137);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(113);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(114);
          match(LucidusParser::AND);
          setState(115);
          expr(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(116);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(117);
          match(LucidusParser::OR);
          setState(118);
          expr(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(119);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(120);
          match(LucidusParser::STAR);
          setState(121);
          expr(8);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(122);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(123);
          match(LucidusParser::DIV);
          setState(124);
          expr(7);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(125);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(126);
          match(LucidusParser::PLUS);
          setState(127);
          expr(6);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(128);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(129);
          match(LucidusParser::SUB);
          setState(130);
          expr(5);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(131);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(132);
          match(LucidusParser::ARROW);
          setState(133);
          match(LucidusParser::OPAREN);
          setState(134);
          expr(0);
          setState(135);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(141);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

LucidusParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::FuncContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::FuncContext::OPAREN() {
  return getToken(LucidusParser::OPAREN, 0);
}

std::vector<LucidusParser::ExprContext *> LucidusParser::FuncContext::expr() {
  return getRuleContexts<LucidusParser::ExprContext>();
}

LucidusParser::ExprContext* LucidusParser::FuncContext::expr(size_t i) {
  return getRuleContext<LucidusParser::ExprContext>(i);
}

tree::TerminalNode* LucidusParser::FuncContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

std::vector<tree::TerminalNode *> LucidusParser::FuncContext::COMMA() {
  return getTokens(LucidusParser::COMMA);
}

tree::TerminalNode* LucidusParser::FuncContext::COMMA(size_t i) {
  return getToken(LucidusParser::COMMA, i);
}


size_t LucidusParser::FuncContext::getRuleIndex() const {
  return LucidusParser::RuleFunc;
}


std::any LucidusParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::FuncContext* LucidusParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 14, LucidusParser::RuleFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(LucidusParser::ID);
    setState(143);
    match(LucidusParser::OPAREN);
    setState(144);
    expr(0);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LucidusParser::COMMA) {
      setState(145);
      match(LucidusParser::COMMA);
      setState(146);
      expr(0);
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(LucidusParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LucidusParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LucidusParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void LucidusParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lucidusparserParserInitialize();
#else
  ::antlr4::internal::call_once(lucidusparserParserOnceFlag, lucidusparserParserInitialize);
#endif
}
