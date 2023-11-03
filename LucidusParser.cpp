
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
      "edec", "assign", "stat", "def", "expr", "struct", "func"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
      "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", "':='", 
      "'ptr'", "':'", "'return'", "'.'", "'...'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
      "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "DCOL", 
      "PTR", "COL", "RETURN", "DOT", "DOTS", "LCURLY", "RCURLY", "INT", 
      "FLOAT", "ID", "WS", "COMMENT", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,208,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,1,0,5,0,34,8,0,10,0,12,0,37,9,0,1,0,1,0,1,1,1,1,1,2,1,2,5,
  	2,45,8,2,10,2,12,2,48,9,2,1,3,1,3,1,3,1,3,1,4,1,4,3,4,56,8,4,1,5,1,5,
  	1,5,1,5,1,5,1,5,5,5,64,8,5,10,5,12,5,67,9,5,3,5,69,8,5,1,5,1,5,1,5,1,
  	5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,101,8,10,1,11,1,11,1,
  	11,1,11,1,11,1,11,5,11,109,8,11,10,11,12,11,112,9,11,3,11,114,8,11,1,
  	11,1,11,1,11,1,11,1,11,5,11,121,8,11,10,11,12,11,124,9,11,1,11,1,11,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,3,12,144,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,5,12,173,8,12,10,12,12,12,176,9,12,1,13,1,13,1,13,1,
  	13,1,13,1,13,5,13,184,8,13,10,13,12,13,187,9,13,3,13,189,8,13,1,13,1,
  	13,1,13,1,14,1,14,1,14,1,14,1,14,5,14,199,8,14,10,14,12,14,202,9,14,3,
  	14,204,8,14,1,14,1,14,1,14,0,1,24,15,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,0,0,227,0,35,1,0,0,0,2,40,1,0,0,0,4,42,1,0,0,0,6,49,1,0,0,0,8,55,
  	1,0,0,0,10,57,1,0,0,0,12,75,1,0,0,0,14,79,1,0,0,0,16,84,1,0,0,0,18,87,
  	1,0,0,0,20,100,1,0,0,0,22,102,1,0,0,0,24,143,1,0,0,0,26,177,1,0,0,0,28,
  	193,1,0,0,0,30,34,3,20,10,0,31,34,3,22,11,0,32,34,3,26,13,0,33,30,1,0,
  	0,0,33,31,1,0,0,0,33,32,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,35,36,1,0,
  	0,0,36,38,1,0,0,0,37,35,1,0,0,0,38,39,5,0,0,1,39,1,1,0,0,0,40,41,5,27,
  	0,0,41,3,1,0,0,0,42,46,5,27,0,0,43,45,5,7,0,0,44,43,1,0,0,0,45,48,1,0,
  	0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,5,1,0,0,0,48,46,1,0,0,0,49,50,5,27,
  	0,0,50,51,5,19,0,0,51,52,3,4,2,0,52,7,1,0,0,0,53,56,3,6,3,0,54,56,5,22,
  	0,0,55,53,1,0,0,0,55,54,1,0,0,0,56,9,1,0,0,0,57,58,5,15,0,0,58,59,5,27,
  	0,0,59,68,5,9,0,0,60,65,3,8,4,0,61,62,5,11,0,0,62,64,3,8,4,0,63,61,1,
  	0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,69,1,0,0,0,67,65,1,
  	0,0,0,68,60,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,71,5,10,0,0,71,72,
  	5,16,0,0,72,73,3,4,2,0,73,74,5,12,0,0,74,11,1,0,0,0,75,76,5,20,0,0,76,
  	77,3,24,12,0,77,78,5,12,0,0,78,13,1,0,0,0,79,80,3,6,3,0,80,81,5,17,0,
  	0,81,82,3,24,12,0,82,83,5,12,0,0,83,15,1,0,0,0,84,85,3,6,3,0,85,86,5,
  	12,0,0,86,17,1,0,0,0,87,88,3,24,12,0,88,89,5,4,0,0,89,90,3,24,12,0,90,
  	91,5,12,0,0,91,19,1,0,0,0,92,101,3,14,7,0,93,101,3,16,8,0,94,101,3,18,
  	9,0,95,96,3,24,12,0,96,97,5,12,0,0,97,101,1,0,0,0,98,101,3,10,5,0,99,
  	101,3,12,6,0,100,92,1,0,0,0,100,93,1,0,0,0,100,94,1,0,0,0,100,95,1,0,
  	0,0,100,98,1,0,0,0,100,99,1,0,0,0,101,21,1,0,0,0,102,103,5,13,0,0,103,
  	104,5,27,0,0,104,113,5,9,0,0,105,110,3,8,4,0,106,107,5,11,0,0,107,109,
  	3,8,4,0,108,106,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,
  	0,111,114,1,0,0,0,112,110,1,0,0,0,113,105,1,0,0,0,113,114,1,0,0,0,114,
  	115,1,0,0,0,115,116,5,10,0,0,116,117,5,16,0,0,117,118,5,27,0,0,118,122,
  	5,23,0,0,119,121,3,20,10,0,120,119,1,0,0,0,121,124,1,0,0,0,122,120,1,
  	0,0,0,122,123,1,0,0,0,123,125,1,0,0,0,124,122,1,0,0,0,125,126,5,24,0,
  	0,126,23,1,0,0,0,127,128,6,12,-1,0,128,144,5,27,0,0,129,144,5,25,0,0,
  	130,144,5,26,0,0,131,144,5,30,0,0,132,144,3,28,14,0,133,134,5,18,0,0,
  	134,144,3,24,12,11,135,136,5,7,0,0,136,144,3,24,12,10,137,138,5,3,0,0,
  	138,144,3,24,12,9,139,140,5,9,0,0,140,141,3,24,12,0,141,142,5,10,0,0,
  	142,144,1,0,0,0,143,127,1,0,0,0,143,129,1,0,0,0,143,130,1,0,0,0,143,131,
  	1,0,0,0,143,132,1,0,0,0,143,133,1,0,0,0,143,135,1,0,0,0,143,137,1,0,0,
  	0,143,139,1,0,0,0,144,174,1,0,0,0,145,146,10,8,0,0,146,147,5,1,0,0,147,
  	173,3,24,12,9,148,149,10,7,0,0,149,150,5,2,0,0,150,173,3,24,12,8,151,
  	152,10,6,0,0,152,153,5,7,0,0,153,173,3,24,12,7,154,155,10,5,0,0,155,156,
  	5,8,0,0,156,173,3,24,12,6,157,158,10,4,0,0,158,159,5,5,0,0,159,173,3,
  	24,12,5,160,161,10,3,0,0,161,162,5,6,0,0,162,173,3,24,12,4,163,164,10,
  	13,0,0,164,165,5,21,0,0,165,173,5,27,0,0,166,167,10,2,0,0,167,168,5,16,
  	0,0,168,169,5,9,0,0,169,170,3,4,2,0,170,171,5,10,0,0,171,173,1,0,0,0,
  	172,145,1,0,0,0,172,148,1,0,0,0,172,151,1,0,0,0,172,154,1,0,0,0,172,157,
  	1,0,0,0,172,160,1,0,0,0,172,163,1,0,0,0,172,166,1,0,0,0,173,176,1,0,0,
  	0,174,172,1,0,0,0,174,175,1,0,0,0,175,25,1,0,0,0,176,174,1,0,0,0,177,
  	178,5,14,0,0,178,179,5,27,0,0,179,188,5,23,0,0,180,185,3,6,3,0,181,182,
  	5,11,0,0,182,184,3,6,3,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,
  	0,0,185,186,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,188,180,1,0,0,0,188,
  	189,1,0,0,0,189,190,1,0,0,0,190,191,5,24,0,0,191,192,5,12,0,0,192,27,
  	1,0,0,0,193,194,5,27,0,0,194,203,5,9,0,0,195,200,3,24,12,0,196,197,5,
  	11,0,0,197,199,3,24,12,0,198,196,1,0,0,0,199,202,1,0,0,0,200,198,1,0,
  	0,0,200,201,1,0,0,0,201,204,1,0,0,0,202,200,1,0,0,0,203,195,1,0,0,0,203,
  	204,1,0,0,0,204,205,1,0,0,0,205,206,5,10,0,0,206,29,1,0,0,0,17,33,35,
  	46,55,65,68,100,110,113,122,143,172,174,185,188,200,203
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

std::vector<LucidusParser::StructContext *> LucidusParser::ProgramContext::struct_() {
  return getRuleContexts<LucidusParser::StructContext>();
}

LucidusParser::StructContext* LucidusParser::ProgramContext::struct_(size_t i) {
  return getRuleContext<LucidusParser::StructContext>(i);
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
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1309991560) != 0)) {
      setState(33);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LucidusParser::NOT:
        case LucidusParser::STAR:
        case LucidusParser::OPAREN:
        case LucidusParser::DECL:
        case LucidusParser::PTR:
        case LucidusParser::RETURN:
        case LucidusParser::INT:
        case LucidusParser::FLOAT:
        case LucidusParser::ID:
        case LucidusParser::STRING: {
          setState(30);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(31);
          def();
          break;
        }

        case LucidusParser::STRUCT: {
          setState(32);
          struct_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
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
    setState(40);
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
    setState(42);
    match(LucidusParser::ID);
    setState(46);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LucidusParser::STAR) {
      setState(43);
      match(LucidusParser::STAR);
      setState(48);
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
    setState(49);
    match(LucidusParser::ID);
    setState(50);
    match(LucidusParser::COL);
    setState(51);
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
    setState(55);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(53);
        idec();
        break;
      }

      case LucidusParser::DOTS: {
        setState(54);
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
    setState(57);
    match(LucidusParser::DECL);
    setState(58);
    match(LucidusParser::ID);
    setState(59);
    match(LucidusParser::OPAREN);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(60);
      param();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(61);
        match(LucidusParser::COMMA);
        setState(62);
        param();
        setState(67);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(70);
    match(LucidusParser::CPAREN);
    setState(71);
    match(LucidusParser::ARROW);
    setState(72);
    type();
    setState(73);
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
    setState(75);
    match(LucidusParser::RETURN);
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
    setState(79);
    idec();
    setState(80);
    match(LucidusParser::DCOL);
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

//----------------- EdecContext ------------------------------------------------------------------

LucidusParser::EdecContext::EdecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LucidusParser::IdecContext* LucidusParser::EdecContext::idec() {
  return getRuleContext<LucidusParser::IdecContext>(0);
}

tree::TerminalNode* LucidusParser::EdecContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::EdecContext::getRuleIndex() const {
  return LucidusParser::RuleEdec;
}


std::any LucidusParser::EdecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitEdec(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::EdecContext* LucidusParser::edec() {
  EdecContext *_localctx = _tracker.createInstance<EdecContext>(_ctx, getState());
  enterRule(_localctx, 16, LucidusParser::RuleEdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    idec();
    setState(85);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

LucidusParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LucidusParser::ExprContext *> LucidusParser::AssignContext::expr() {
  return getRuleContexts<LucidusParser::ExprContext>();
}

LucidusParser::ExprContext* LucidusParser::AssignContext::expr(size_t i) {
  return getRuleContext<LucidusParser::ExprContext>(i);
}

tree::TerminalNode* LucidusParser::AssignContext::EQ() {
  return getToken(LucidusParser::EQ, 0);
}

tree::TerminalNode* LucidusParser::AssignContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::AssignContext::getRuleIndex() const {
  return LucidusParser::RuleAssign;
}


std::any LucidusParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::AssignContext* LucidusParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 18, LucidusParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    expr(0);
    setState(88);
    match(LucidusParser::EQ);
    setState(89);
    expr(0);
    setState(90);
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

LucidusParser::EdecContext* LucidusParser::StatContext::edec() {
  return getRuleContext<LucidusParser::EdecContext>(0);
}

LucidusParser::AssignContext* LucidusParser::StatContext::assign() {
  return getRuleContext<LucidusParser::AssignContext>(0);
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
  enterRule(_localctx, 20, LucidusParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      vdec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(93);
      edec();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(94);
      assign();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(95);
      expr(0);
      setState(96);
      match(LucidusParser::SEMI);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(98);
      dec();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(99);
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

std::vector<LucidusParser::ParamContext *> LucidusParser::DefContext::param() {
  return getRuleContexts<LucidusParser::ParamContext>();
}

LucidusParser::ParamContext* LucidusParser::DefContext::param(size_t i) {
  return getRuleContext<LucidusParser::ParamContext>(i);
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
  enterRule(_localctx, 22, LucidusParser::RuleDef);
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
    setState(102);
    match(LucidusParser::DEF);
    setState(103);
    match(LucidusParser::ID);
    setState(104);
    match(LucidusParser::OPAREN);
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(105);
      param();
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(106);
        match(LucidusParser::COMMA);
        setState(107);
        param();
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(115);
    match(LucidusParser::CPAREN);
    setState(116);
    match(LucidusParser::ARROW);
    setState(117);
    match(LucidusParser::ID);
    setState(118);
    match(LucidusParser::LCURLY);
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1309966984) != 0)) {
      setState(119);
      stat();
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(125);
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

tree::TerminalNode* LucidusParser::ExprContext::FLOAT() {
  return getToken(LucidusParser::FLOAT, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::STRING() {
  return getToken(LucidusParser::STRING, 0);
}

LucidusParser::FuncContext* LucidusParser::ExprContext::func() {
  return getRuleContext<LucidusParser::FuncContext>(0);
}

tree::TerminalNode* LucidusParser::ExprContext::PTR() {
  return getToken(LucidusParser::PTR, 0);
}

std::vector<LucidusParser::ExprContext *> LucidusParser::ExprContext::expr() {
  return getRuleContexts<LucidusParser::ExprContext>();
}

LucidusParser::ExprContext* LucidusParser::ExprContext::expr(size_t i) {
  return getRuleContext<LucidusParser::ExprContext>(i);
}

tree::TerminalNode* LucidusParser::ExprContext::STAR() {
  return getToken(LucidusParser::STAR, 0);
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

tree::TerminalNode* LucidusParser::ExprContext::DOT() {
  return getToken(LucidusParser::DOT, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

LucidusParser::TypeContext* LucidusParser::ExprContext::type() {
  return getRuleContext<LucidusParser::TypeContext>(0);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, LucidusParser::RuleExpr, precedence);

    

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
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(128);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(129);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(130);
      match(LucidusParser::FLOAT);
      break;
    }

    case 4: {
      setState(131);
      match(LucidusParser::STRING);
      break;
    }

    case 5: {
      setState(132);
      func();
      break;
    }

    case 6: {
      setState(133);
      match(LucidusParser::PTR);
      setState(134);
      expr(11);
      break;
    }

    case 7: {
      setState(135);
      match(LucidusParser::STAR);
      setState(136);
      expr(10);
      break;
    }

    case 8: {
      setState(137);
      match(LucidusParser::NOT);
      setState(138);
      expr(9);
      break;
    }

    case 9: {
      setState(139);
      match(LucidusParser::OPAREN);
      setState(140);
      expr(0);
      setState(141);
      match(LucidusParser::CPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(174);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(172);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(146);
          match(LucidusParser::AND);
          setState(147);
          expr(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(148);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(149);
          match(LucidusParser::OR);
          setState(150);
          expr(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(151);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(152);
          match(LucidusParser::STAR);
          setState(153);
          expr(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(154);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(155);
          match(LucidusParser::DIV);
          setState(156);
          expr(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(157);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(158);
          match(LucidusParser::PLUS);
          setState(159);
          expr(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(160);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(161);
          match(LucidusParser::SUB);
          setState(162);
          expr(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(164);
          match(LucidusParser::DOT);
          setState(165);
          match(LucidusParser::ID);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(167);
          match(LucidusParser::ARROW);
          setState(168);
          match(LucidusParser::OPAREN);
          setState(169);
          type();
          setState(170);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(176);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StructContext ------------------------------------------------------------------

LucidusParser::StructContext::StructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::StructContext::STRUCT() {
  return getToken(LucidusParser::STRUCT, 0);
}

tree::TerminalNode* LucidusParser::StructContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::StructContext::LCURLY() {
  return getToken(LucidusParser::LCURLY, 0);
}

tree::TerminalNode* LucidusParser::StructContext::RCURLY() {
  return getToken(LucidusParser::RCURLY, 0);
}

tree::TerminalNode* LucidusParser::StructContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}

std::vector<LucidusParser::IdecContext *> LucidusParser::StructContext::idec() {
  return getRuleContexts<LucidusParser::IdecContext>();
}

LucidusParser::IdecContext* LucidusParser::StructContext::idec(size_t i) {
  return getRuleContext<LucidusParser::IdecContext>(i);
}

std::vector<tree::TerminalNode *> LucidusParser::StructContext::COMMA() {
  return getTokens(LucidusParser::COMMA);
}

tree::TerminalNode* LucidusParser::StructContext::COMMA(size_t i) {
  return getToken(LucidusParser::COMMA, i);
}


size_t LucidusParser::StructContext::getRuleIndex() const {
  return LucidusParser::RuleStruct;
}


std::any LucidusParser::StructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitStruct(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::StructContext* LucidusParser::struct_() {
  StructContext *_localctx = _tracker.createInstance<StructContext>(_ctx, getState());
  enterRule(_localctx, 26, LucidusParser::RuleStruct);
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
    setState(177);
    match(LucidusParser::STRUCT);
    setState(178);
    match(LucidusParser::ID);
    setState(179);
    match(LucidusParser::LCURLY);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(180);
      idec();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(181);
        match(LucidusParser::COMMA);
        setState(182);
        idec();
        setState(187);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(190);
    match(LucidusParser::RCURLY);
    setState(191);
    match(LucidusParser::SEMI);
   
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
  enterRule(_localctx, 28, LucidusParser::RuleFunc);
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
    setState(193);
    match(LucidusParser::ID);
    setState(194);
    match(LucidusParser::OPAREN);
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1308885640) != 0)) {
      setState(195);
      expr(0);
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(196);
        match(LucidusParser::COMMA);
        setState(197);
        expr(0);
        setState(202);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(205);
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
    case 12: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
    case 6: return precpred(_ctx, 13);
    case 7: return precpred(_ctx, 2);

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
