
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
      "program", "rawtype", "type", "idec", "param", "dec", "ret", "vdec", 
      "vdef", "stat", "def", "expr", "func"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
      "')'", "','", "';'", "'def'", "'dec'", "'->'", "':='", "':'", "'return'", 
      "'...'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
      "CPAREN", "COMMA", "SEMI", "DEF", "DECL", "ARROW", "DCOL", "COL", 
      "RETURN", "DOTS", "LCURLY", "RCURLY", "INT", "ID", "WS", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,25,181,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,5,0,29,8,
  	0,10,0,12,0,32,9,0,1,0,1,0,1,1,1,1,1,2,1,2,5,2,40,8,2,10,2,12,2,43,9,
  	2,1,3,1,3,1,3,1,3,1,4,1,4,3,4,51,8,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,59,8,
  	5,10,5,12,5,62,9,5,3,5,64,8,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,
  	1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,92,
  	8,9,1,10,1,10,1,10,1,10,1,10,1,10,5,10,100,8,10,10,10,12,10,103,9,10,
  	3,10,105,8,10,1,10,1,10,1,10,1,10,1,10,5,10,112,8,10,10,10,12,10,115,
  	9,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,4,11,125,8,11,11,11,12,11,
  	126,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,136,8,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,162,8,11,10,11,12,11,165,9,11,1,
  	12,1,12,1,12,1,12,1,12,5,12,172,8,12,10,12,12,12,175,9,12,3,12,177,8,
  	12,1,12,1,12,1,12,0,1,22,13,0,2,4,6,8,10,12,14,16,18,20,22,24,0,0,196,
  	0,30,1,0,0,0,2,35,1,0,0,0,4,37,1,0,0,0,6,44,1,0,0,0,8,50,1,0,0,0,10,52,
  	1,0,0,0,12,70,1,0,0,0,14,74,1,0,0,0,16,79,1,0,0,0,18,91,1,0,0,0,20,93,
  	1,0,0,0,22,135,1,0,0,0,24,166,1,0,0,0,26,29,3,18,9,0,27,29,3,20,10,0,
  	28,26,1,0,0,0,28,27,1,0,0,0,29,32,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,
  	31,33,1,0,0,0,32,30,1,0,0,0,33,34,5,0,0,1,34,1,1,0,0,0,35,36,5,23,0,0,
  	36,3,1,0,0,0,37,41,5,23,0,0,38,40,5,7,0,0,39,38,1,0,0,0,40,43,1,0,0,0,
  	41,39,1,0,0,0,41,42,1,0,0,0,42,5,1,0,0,0,43,41,1,0,0,0,44,45,5,23,0,0,
  	45,46,5,17,0,0,46,47,3,4,2,0,47,7,1,0,0,0,48,51,3,6,3,0,49,51,5,19,0,
  	0,50,48,1,0,0,0,50,49,1,0,0,0,51,9,1,0,0,0,52,53,5,14,0,0,53,54,5,23,
  	0,0,54,63,5,9,0,0,55,60,3,8,4,0,56,57,5,11,0,0,57,59,3,8,4,0,58,56,1,
  	0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,64,1,0,0,0,62,60,1,
  	0,0,0,63,55,1,0,0,0,63,64,1,0,0,0,64,65,1,0,0,0,65,66,5,10,0,0,66,67,
  	5,15,0,0,67,68,3,4,2,0,68,69,5,12,0,0,69,11,1,0,0,0,70,71,5,18,0,0,71,
  	72,3,22,11,0,72,73,5,12,0,0,73,13,1,0,0,0,74,75,3,6,3,0,75,76,5,16,0,
  	0,76,77,3,22,11,0,77,78,5,12,0,0,78,15,1,0,0,0,79,80,5,23,0,0,80,81,5,
  	4,0,0,81,82,3,22,11,0,82,83,5,12,0,0,83,17,1,0,0,0,84,92,3,14,7,0,85,
  	92,3,16,8,0,86,87,3,22,11,0,87,88,5,12,0,0,88,92,1,0,0,0,89,92,3,10,5,
  	0,90,92,3,12,6,0,91,84,1,0,0,0,91,85,1,0,0,0,91,86,1,0,0,0,91,89,1,0,
  	0,0,91,90,1,0,0,0,92,19,1,0,0,0,93,94,5,13,0,0,94,95,5,23,0,0,95,104,
  	5,9,0,0,96,101,3,6,3,0,97,98,5,11,0,0,98,100,3,6,3,0,99,97,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,105,1,0,0,0,103,101,1,
  	0,0,0,104,96,1,0,0,0,104,105,1,0,0,0,105,106,1,0,0,0,106,107,5,10,0,0,
  	107,108,5,15,0,0,108,109,5,23,0,0,109,113,5,20,0,0,110,112,3,18,9,0,111,
  	110,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,116,1,
  	0,0,0,115,113,1,0,0,0,116,117,5,21,0,0,117,21,1,0,0,0,118,119,6,11,-1,
  	0,119,136,5,23,0,0,120,136,5,22,0,0,121,136,5,25,0,0,122,136,3,24,12,
  	0,123,125,5,7,0,0,124,123,1,0,0,0,125,126,1,0,0,0,126,124,1,0,0,0,126,
  	127,1,0,0,0,127,128,1,0,0,0,128,136,3,22,11,10,129,130,5,3,0,0,130,136,
  	3,22,11,9,131,132,5,9,0,0,132,133,3,22,11,0,133,134,5,10,0,0,134,136,
  	1,0,0,0,135,118,1,0,0,0,135,120,1,0,0,0,135,121,1,0,0,0,135,122,1,0,0,
  	0,135,124,1,0,0,0,135,129,1,0,0,0,135,131,1,0,0,0,136,163,1,0,0,0,137,
  	138,10,8,0,0,138,139,5,1,0,0,139,162,3,22,11,9,140,141,10,7,0,0,141,142,
  	5,2,0,0,142,162,3,22,11,8,143,144,10,6,0,0,144,145,5,7,0,0,145,162,3,
  	22,11,7,146,147,10,5,0,0,147,148,5,8,0,0,148,162,3,22,11,6,149,150,10,
  	4,0,0,150,151,5,5,0,0,151,162,3,22,11,5,152,153,10,3,0,0,153,154,5,6,
  	0,0,154,162,3,22,11,4,155,156,10,2,0,0,156,157,5,15,0,0,157,158,5,9,0,
  	0,158,159,3,22,11,0,159,160,5,10,0,0,160,162,1,0,0,0,161,137,1,0,0,0,
  	161,140,1,0,0,0,161,143,1,0,0,0,161,146,1,0,0,0,161,149,1,0,0,0,161,152,
  	1,0,0,0,161,155,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,0,163,164,1,0,0,
  	0,164,23,1,0,0,0,165,163,1,0,0,0,166,167,5,23,0,0,167,176,5,9,0,0,168,
  	173,3,22,11,0,169,170,5,11,0,0,170,172,3,22,11,0,171,169,1,0,0,0,172,
  	175,1,0,0,0,173,171,1,0,0,0,173,174,1,0,0,0,174,177,1,0,0,0,175,173,1,
  	0,0,0,176,168,1,0,0,0,176,177,1,0,0,0,177,178,1,0,0,0,178,179,5,10,0,
  	0,179,25,1,0,0,0,16,28,30,41,50,60,63,91,101,104,113,126,135,161,163,
  	173,176
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
    setState(30);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 46424712) != 0)) {
      setState(28);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LucidusParser::NOT:
        case LucidusParser::STAR:
        case LucidusParser::OPAREN:
        case LucidusParser::DECL:
        case LucidusParser::RETURN:
        case LucidusParser::INT:
        case LucidusParser::ID:
        case LucidusParser::STRING: {
          setState(26);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(27);
          def();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(32);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(33);
    match(LucidusParser::EOF);
   
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
  enterRule(_localctx, 2, LucidusParser::RuleRawtype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
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
  enterRule(_localctx, 4, LucidusParser::RuleType);
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
    setState(37);
    match(LucidusParser::ID);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LucidusParser::STAR) {
      setState(38);
      match(LucidusParser::STAR);
      setState(43);
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
  enterRule(_localctx, 6, LucidusParser::RuleIdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(LucidusParser::ID);
    setState(45);
    match(LucidusParser::COL);
    setState(46);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

LucidusParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LucidusParser::IdecContext* LucidusParser::ParamContext::idec() {
  return getRuleContext<LucidusParser::IdecContext>(0);
}

tree::TerminalNode* LucidusParser::ParamContext::DOTS() {
  return getToken(LucidusParser::DOTS, 0);
}


size_t LucidusParser::ParamContext::getRuleIndex() const {
  return LucidusParser::RuleParam;
}


std::any LucidusParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::ParamContext* LucidusParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 8, LucidusParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(48);
        idec();
        break;
      }

      case LucidusParser::DOTS: {
        setState(49);
        match(LucidusParser::DOTS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecContext ------------------------------------------------------------------

LucidusParser::DecContext::DecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::DecContext::DECL() {
  return getToken(LucidusParser::DECL, 0);
}

tree::TerminalNode* LucidusParser::DecContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::DecContext::OPAREN() {
  return getToken(LucidusParser::OPAREN, 0);
}

tree::TerminalNode* LucidusParser::DecContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

tree::TerminalNode* LucidusParser::DecContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

LucidusParser::TypeContext* LucidusParser::DecContext::type() {
  return getRuleContext<LucidusParser::TypeContext>(0);
}

tree::TerminalNode* LucidusParser::DecContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}

std::vector<LucidusParser::ParamContext *> LucidusParser::DecContext::param() {
  return getRuleContexts<LucidusParser::ParamContext>();
}

LucidusParser::ParamContext* LucidusParser::DecContext::param(size_t i) {
  return getRuleContext<LucidusParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> LucidusParser::DecContext::COMMA() {
  return getTokens(LucidusParser::COMMA);
}

tree::TerminalNode* LucidusParser::DecContext::COMMA(size_t i) {
  return getToken(LucidusParser::COMMA, i);
}


size_t LucidusParser::DecContext::getRuleIndex() const {
  return LucidusParser::RuleDec;
}


std::any LucidusParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::DecContext* LucidusParser::dec() {
  DecContext *_localctx = _tracker.createInstance<DecContext>(_ctx, getState());
  enterRule(_localctx, 10, LucidusParser::RuleDec);
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
    setState(52);
    match(LucidusParser::DECL);
    setState(53);
    match(LucidusParser::ID);
    setState(54);
    match(LucidusParser::OPAREN);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(55);
      param();
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(56);
        match(LucidusParser::COMMA);
        setState(57);
        param();
        setState(62);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(65);
    match(LucidusParser::CPAREN);
    setState(66);
    match(LucidusParser::ARROW);
    setState(67);
    type();
    setState(68);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

LucidusParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::RetContext::RETURN() {
  return getToken(LucidusParser::RETURN, 0);
}

LucidusParser::ExprContext* LucidusParser::RetContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::RetContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::RetContext::getRuleIndex() const {
  return LucidusParser::RuleRet;
}


std::any LucidusParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::RetContext* LucidusParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 12, LucidusParser::RuleRet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(LucidusParser::RETURN);
    setState(71);
    expr(0);
    setState(72);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VdecContext ------------------------------------------------------------------

LucidusParser::VdecContext::VdecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LucidusParser::IdecContext* LucidusParser::VdecContext::idec() {
  return getRuleContext<LucidusParser::IdecContext>(0);
}

tree::TerminalNode* LucidusParser::VdecContext::DCOL() {
  return getToken(LucidusParser::DCOL, 0);
}

LucidusParser::ExprContext* LucidusParser::VdecContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::VdecContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::VdecContext::getRuleIndex() const {
  return LucidusParser::RuleVdec;
}


std::any LucidusParser::VdecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitVdec(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::VdecContext* LucidusParser::vdec() {
  VdecContext *_localctx = _tracker.createInstance<VdecContext>(_ctx, getState());
  enterRule(_localctx, 14, LucidusParser::RuleVdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    idec();
    setState(75);
    match(LucidusParser::DCOL);
    setState(76);
    expr(0);
    setState(77);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VdefContext ------------------------------------------------------------------

LucidusParser::VdefContext::VdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::VdefContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::VdefContext::EQ() {
  return getToken(LucidusParser::EQ, 0);
}

LucidusParser::ExprContext* LucidusParser::VdefContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::VdefContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::VdefContext::getRuleIndex() const {
  return LucidusParser::RuleVdef;
}


std::any LucidusParser::VdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitVdef(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::VdefContext* LucidusParser::vdef() {
  VdefContext *_localctx = _tracker.createInstance<VdefContext>(_ctx, getState());
  enterRule(_localctx, 16, LucidusParser::RuleVdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(LucidusParser::ID);
    setState(80);
    match(LucidusParser::EQ);
    setState(81);
    expr(0);
    setState(82);
    match(LucidusParser::SEMI);
   
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

LucidusParser::VdecContext* LucidusParser::StatContext::vdec() {
  return getRuleContext<LucidusParser::VdecContext>(0);
}

LucidusParser::VdefContext* LucidusParser::StatContext::vdef() {
  return getRuleContext<LucidusParser::VdefContext>(0);
}

LucidusParser::ExprContext* LucidusParser::StatContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::StatContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}

LucidusParser::DecContext* LucidusParser::StatContext::dec() {
  return getRuleContext<LucidusParser::DecContext>(0);
}

LucidusParser::RetContext* LucidusParser::StatContext::ret() {
  return getRuleContext<LucidusParser::RetContext>(0);
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
  enterRule(_localctx, 18, LucidusParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(84);
      vdec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(85);
      vdef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(86);
      expr(0);
      setState(87);
      match(LucidusParser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(89);
      dec();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(90);
      ret();
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
  enterRule(_localctx, 20, LucidusParser::RuleDef);
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
    setState(93);
    match(LucidusParser::DEF);
    setState(94);
    match(LucidusParser::ID);
    setState(95);
    match(LucidusParser::OPAREN);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(96);
      idec();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(97);
        match(LucidusParser::COMMA);
        setState(98);
        idec();
        setState(103);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(106);
    match(LucidusParser::CPAREN);
    setState(107);
    match(LucidusParser::ARROW);
    setState(108);
    match(LucidusParser::ID);
    setState(109);
    match(LucidusParser::LCURLY);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 46416520) != 0)) {
      setState(110);
      stat();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
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

tree::TerminalNode* LucidusParser::ExprContext::STRING() {
  return getToken(LucidusParser::STRING, 0);
}

LucidusParser::FuncContext* LucidusParser::ExprContext::func() {
  return getRuleContext<LucidusParser::FuncContext>(0);
}

std::vector<LucidusParser::ExprContext *> LucidusParser::ExprContext::expr() {
  return getRuleContexts<LucidusParser::ExprContext>();
}

LucidusParser::ExprContext* LucidusParser::ExprContext::expr(size_t i) {
  return getRuleContext<LucidusParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> LucidusParser::ExprContext::STAR() {
  return getTokens(LucidusParser::STAR);
}

tree::TerminalNode* LucidusParser::ExprContext::STAR(size_t i) {
  return getToken(LucidusParser::STAR, i);
}

tree::TerminalNode* LucidusParser::ExprContext::NOT() {
  return getToken(LucidusParser::NOT, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::OPAREN() {
  return getToken(LucidusParser::OPAREN, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::AND() {
  return getToken(LucidusParser::AND, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::OR() {
  return getToken(LucidusParser::OR, 0);
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
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, LucidusParser::RuleExpr, precedence);

    

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
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(119);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(120);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(121);
      match(LucidusParser::STRING);
      break;
    }

    case 4: {
      setState(122);
      func();
      break;
    }

    case 5: {
      setState(124); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(123);
                match(LucidusParser::STAR);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(126); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(128);
      expr(10);
      break;
    }

    case 6: {
      setState(129);
      match(LucidusParser::NOT);
      setState(130);
      expr(9);
      break;
    }

    case 7: {
      setState(131);
      match(LucidusParser::OPAREN);
      setState(132);
      expr(0);
      setState(133);
      match(LucidusParser::CPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(163);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(161);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(137);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(138);
          match(LucidusParser::AND);
          setState(139);
          expr(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(140);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(141);
          match(LucidusParser::OR);
          setState(142);
          expr(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(143);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(144);
          match(LucidusParser::STAR);
          setState(145);
          expr(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(146);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(147);
          match(LucidusParser::DIV);
          setState(148);
          expr(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(149);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(150);
          match(LucidusParser::PLUS);
          setState(151);
          expr(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(152);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(153);
          match(LucidusParser::SUB);
          setState(154);
          expr(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(155);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(156);
          match(LucidusParser::ARROW);
          setState(157);
          match(LucidusParser::OPAREN);
          setState(158);
          expr(0);
          setState(159);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(165);
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

tree::TerminalNode* LucidusParser::FuncContext::CPAREN() {
  return getToken(LucidusParser::CPAREN, 0);
}

std::vector<LucidusParser::ExprContext *> LucidusParser::FuncContext::expr() {
  return getRuleContexts<LucidusParser::ExprContext>();
}

LucidusParser::ExprContext* LucidusParser::FuncContext::expr(size_t i) {
  return getRuleContext<LucidusParser::ExprContext>(i);
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
  enterRule(_localctx, 24, LucidusParser::RuleFunc);
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
    setState(166);
    match(LucidusParser::ID);
    setState(167);
    match(LucidusParser::OPAREN);
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 46137992) != 0)) {
      setState(168);
      expr(0);
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(169);
        match(LucidusParser::COMMA);
        setState(170);
        expr(0);
        setState(175);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(178);
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
    case 11: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LucidusParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);

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
