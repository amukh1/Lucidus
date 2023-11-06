
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
      "infdec", "edec", "assign", "label", "goto", "stat", "def", "expr", 
      "struct", "func"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
      "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", "':='", 
      "'ptr'", "':'", "'return'", "'label'", "'goto'", "'.'", "'...'", "'{'", 
      "'}'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
      "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "DCOL", 
      "PTR", "COL", "RETURN", "LABEL", "GOTO", "DOT", "DOTS", "LCURLY", 
      "RCURLY", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,230,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,0,5,0,40,8,0,10,0,12,0,43,
  	9,0,1,0,1,0,1,1,1,1,1,2,1,2,5,2,51,8,2,10,2,12,2,54,9,2,1,3,1,3,1,3,1,
  	3,1,4,1,4,3,4,62,8,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,70,8,5,10,5,12,5,73,
  	9,5,3,5,75,8,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,3,13,123,8,13,1,14,1,14,1,14,1,14,1,14,1,14,5,14,131,8,
  	14,10,14,12,14,134,9,14,3,14,136,8,14,1,14,1,14,1,14,1,14,1,14,5,14,143,
  	8,14,10,14,12,14,146,9,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,166,8,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,195,8,15,
  	10,15,12,15,198,9,15,1,16,1,16,1,16,1,16,1,16,1,16,5,16,206,8,16,10,16,
  	12,16,209,9,16,3,16,211,8,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,
  	5,17,221,8,17,10,17,12,17,224,9,17,3,17,226,8,17,1,17,1,17,1,17,0,1,30,
  	18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,0,249,0,41,1,0,
  	0,0,2,46,1,0,0,0,4,48,1,0,0,0,6,55,1,0,0,0,8,61,1,0,0,0,10,63,1,0,0,0,
  	12,81,1,0,0,0,14,85,1,0,0,0,16,90,1,0,0,0,18,95,1,0,0,0,20,98,1,0,0,0,
  	22,103,1,0,0,0,24,107,1,0,0,0,26,122,1,0,0,0,28,124,1,0,0,0,30,165,1,
  	0,0,0,32,199,1,0,0,0,34,215,1,0,0,0,36,40,3,26,13,0,37,40,3,28,14,0,38,
  	40,3,32,16,0,39,36,1,0,0,0,39,37,1,0,0,0,39,38,1,0,0,0,40,43,1,0,0,0,
  	41,39,1,0,0,0,41,42,1,0,0,0,42,44,1,0,0,0,43,41,1,0,0,0,44,45,5,0,0,1,
  	45,1,1,0,0,0,46,47,5,29,0,0,47,3,1,0,0,0,48,52,5,29,0,0,49,51,5,7,0,0,
  	50,49,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,52,53,1,0,0,0,53,5,1,0,0,0,
  	54,52,1,0,0,0,55,56,5,29,0,0,56,57,5,19,0,0,57,58,3,4,2,0,58,7,1,0,0,
  	0,59,62,3,6,3,0,60,62,5,24,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,9,1,0,0,
  	0,63,64,5,15,0,0,64,65,5,29,0,0,65,74,5,9,0,0,66,71,3,8,4,0,67,68,5,11,
  	0,0,68,70,3,8,4,0,69,67,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,1,0,
  	0,0,72,75,1,0,0,0,73,71,1,0,0,0,74,66,1,0,0,0,74,75,1,0,0,0,75,76,1,0,
  	0,0,76,77,5,10,0,0,77,78,5,16,0,0,78,79,3,4,2,0,79,80,5,12,0,0,80,11,
  	1,0,0,0,81,82,5,20,0,0,82,83,3,30,15,0,83,84,5,12,0,0,84,13,1,0,0,0,85,
  	86,3,6,3,0,86,87,5,4,0,0,87,88,3,30,15,0,88,89,5,12,0,0,89,15,1,0,0,0,
  	90,91,5,29,0,0,91,92,5,17,0,0,92,93,3,30,15,0,93,94,5,12,0,0,94,17,1,
  	0,0,0,95,96,3,6,3,0,96,97,5,12,0,0,97,19,1,0,0,0,98,99,3,30,15,0,99,100,
  	5,4,0,0,100,101,3,30,15,0,101,102,5,12,0,0,102,21,1,0,0,0,103,104,5,21,
  	0,0,104,105,5,29,0,0,105,106,5,19,0,0,106,23,1,0,0,0,107,108,5,22,0,0,
  	108,109,5,29,0,0,109,110,5,12,0,0,110,25,1,0,0,0,111,123,3,14,7,0,112,
  	123,3,16,8,0,113,123,3,18,9,0,114,123,3,20,10,0,115,116,3,30,15,0,116,
  	117,5,12,0,0,117,123,1,0,0,0,118,123,3,10,5,0,119,123,3,12,6,0,120,123,
  	3,22,11,0,121,123,3,24,12,0,122,111,1,0,0,0,122,112,1,0,0,0,122,113,1,
  	0,0,0,122,114,1,0,0,0,122,115,1,0,0,0,122,118,1,0,0,0,122,119,1,0,0,0,
  	122,120,1,0,0,0,122,121,1,0,0,0,123,27,1,0,0,0,124,125,5,13,0,0,125,126,
  	5,29,0,0,126,135,5,9,0,0,127,132,3,8,4,0,128,129,5,11,0,0,129,131,3,8,
  	4,0,130,128,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,
  	136,1,0,0,0,134,132,1,0,0,0,135,127,1,0,0,0,135,136,1,0,0,0,136,137,1,
  	0,0,0,137,138,5,10,0,0,138,139,5,16,0,0,139,140,3,4,2,0,140,144,5,25,
  	0,0,141,143,3,26,13,0,142,141,1,0,0,0,143,146,1,0,0,0,144,142,1,0,0,0,
  	144,145,1,0,0,0,145,147,1,0,0,0,146,144,1,0,0,0,147,148,5,26,0,0,148,
  	29,1,0,0,0,149,150,6,15,-1,0,150,166,5,29,0,0,151,166,5,27,0,0,152,166,
  	5,28,0,0,153,166,5,32,0,0,154,166,3,34,17,0,155,156,5,18,0,0,156,166,
  	3,30,15,11,157,158,5,7,0,0,158,166,3,30,15,9,159,160,5,3,0,0,160,166,
  	3,30,15,8,161,162,5,9,0,0,162,163,3,30,15,0,163,164,5,10,0,0,164,166,
  	1,0,0,0,165,149,1,0,0,0,165,151,1,0,0,0,165,152,1,0,0,0,165,153,1,0,0,
  	0,165,154,1,0,0,0,165,155,1,0,0,0,165,157,1,0,0,0,165,159,1,0,0,0,165,
  	161,1,0,0,0,166,196,1,0,0,0,167,168,10,10,0,0,168,169,5,7,0,0,169,195,
  	3,30,15,11,170,171,10,7,0,0,171,172,5,1,0,0,172,195,3,30,15,8,173,174,
  	10,6,0,0,174,175,5,2,0,0,175,195,3,30,15,7,176,177,10,5,0,0,177,178,5,
  	8,0,0,178,195,3,30,15,6,179,180,10,4,0,0,180,181,5,5,0,0,181,195,3,30,
  	15,5,182,183,10,3,0,0,183,184,5,6,0,0,184,195,3,30,15,4,185,186,10,13,
  	0,0,186,187,5,23,0,0,187,195,5,29,0,0,188,189,10,2,0,0,189,190,5,16,0,
  	0,190,191,5,9,0,0,191,192,3,4,2,0,192,193,5,10,0,0,193,195,1,0,0,0,194,
  	167,1,0,0,0,194,170,1,0,0,0,194,173,1,0,0,0,194,176,1,0,0,0,194,179,1,
  	0,0,0,194,182,1,0,0,0,194,185,1,0,0,0,194,188,1,0,0,0,195,198,1,0,0,0,
  	196,194,1,0,0,0,196,197,1,0,0,0,197,31,1,0,0,0,198,196,1,0,0,0,199,200,
  	5,14,0,0,200,201,5,29,0,0,201,210,5,25,0,0,202,207,3,6,3,0,203,204,5,
  	11,0,0,204,206,3,6,3,0,205,203,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,
  	0,207,208,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,210,202,1,0,0,0,210,
  	211,1,0,0,0,211,212,1,0,0,0,212,213,5,26,0,0,213,214,5,12,0,0,214,33,
  	1,0,0,0,215,216,5,29,0,0,216,225,5,9,0,0,217,222,3,30,15,0,218,219,5,
  	11,0,0,219,221,3,30,15,0,220,218,1,0,0,0,221,224,1,0,0,0,222,220,1,0,
  	0,0,222,223,1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,225,217,1,0,0,0,225,
  	226,1,0,0,0,226,227,1,0,0,0,227,228,5,10,0,0,228,35,1,0,0,0,17,39,41,
  	52,61,71,74,122,132,135,144,165,194,196,207,210,222,225
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
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5242151560) != 0)) {
      setState(39);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LucidusParser::NOT:
        case LucidusParser::STAR:
        case LucidusParser::OPAREN:
        case LucidusParser::DECL:
        case LucidusParser::PTR:
        case LucidusParser::RETURN:
        case LucidusParser::LABEL:
        case LucidusParser::GOTO:
        case LucidusParser::INT:
        case LucidusParser::FLOAT:
        case LucidusParser::ID:
        case LucidusParser::STRING: {
          setState(36);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(37);
          def();
          break;
        }

        case LucidusParser::STRUCT: {
          setState(38);
          struct_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
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
    setState(46);
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
    setState(48);
    match(LucidusParser::ID);
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LucidusParser::STAR) {
      setState(49);
      match(LucidusParser::STAR);
      setState(54);
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
    setState(55);
    match(LucidusParser::ID);
    setState(56);
    match(LucidusParser::COL);
    setState(57);
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
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(59);
        idec();
        break;
      }

      case LucidusParser::DOTS: {
        setState(60);
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
    setState(63);
    match(LucidusParser::DECL);
    setState(64);
    match(LucidusParser::ID);
    setState(65);
    match(LucidusParser::OPAREN);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(66);
      param();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(67);
        match(LucidusParser::COMMA);
        setState(68);
        param();
        setState(73);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(76);
    match(LucidusParser::CPAREN);
    setState(77);
    match(LucidusParser::ARROW);
    setState(78);
    type();
    setState(79);
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
    setState(81);
    match(LucidusParser::RETURN);
    setState(82);
    expr(0);
    setState(83);
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

tree::TerminalNode* LucidusParser::VdecContext::EQ() {
  return getToken(LucidusParser::EQ, 0);
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
    setState(85);
    idec();
    setState(86);
    match(LucidusParser::EQ);
    setState(87);
    expr(0);
    setState(88);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfdecContext ------------------------------------------------------------------

LucidusParser::InfdecContext::InfdecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::InfdecContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::InfdecContext::DCOL() {
  return getToken(LucidusParser::DCOL, 0);
}

LucidusParser::ExprContext* LucidusParser::InfdecContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::InfdecContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::InfdecContext::getRuleIndex() const {
  return LucidusParser::RuleInfdec;
}


std::any LucidusParser::InfdecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitInfdec(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::InfdecContext* LucidusParser::infdec() {
  InfdecContext *_localctx = _tracker.createInstance<InfdecContext>(_ctx, getState());
  enterRule(_localctx, 16, LucidusParser::RuleInfdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(LucidusParser::ID);
    setState(91);
    match(LucidusParser::DCOL);
    setState(92);
    expr(0);
    setState(93);
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
  enterRule(_localctx, 18, LucidusParser::RuleEdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    idec();
    setState(96);
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
  enterRule(_localctx, 20, LucidusParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    expr(0);
    setState(99);
    match(LucidusParser::EQ);
    setState(100);
    expr(0);
    setState(101);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

LucidusParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::LabelContext::LABEL() {
  return getToken(LucidusParser::LABEL, 0);
}

tree::TerminalNode* LucidusParser::LabelContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::LabelContext::COL() {
  return getToken(LucidusParser::COL, 0);
}


size_t LucidusParser::LabelContext::getRuleIndex() const {
  return LucidusParser::RuleLabel;
}


std::any LucidusParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::LabelContext* LucidusParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 22, LucidusParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(LucidusParser::LABEL);
    setState(104);
    match(LucidusParser::ID);
    setState(105);
    match(LucidusParser::COL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoContext ------------------------------------------------------------------

LucidusParser::GotoContext::GotoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::GotoContext::GOTO() {
  return getToken(LucidusParser::GOTO, 0);
}

tree::TerminalNode* LucidusParser::GotoContext::ID() {
  return getToken(LucidusParser::ID, 0);
}

tree::TerminalNode* LucidusParser::GotoContext::SEMI() {
  return getToken(LucidusParser::SEMI, 0);
}


size_t LucidusParser::GotoContext::getRuleIndex() const {
  return LucidusParser::RuleGoto;
}


std::any LucidusParser::GotoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitGoto(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::GotoContext* LucidusParser::goto_() {
  GotoContext *_localctx = _tracker.createInstance<GotoContext>(_ctx, getState());
  enterRule(_localctx, 24, LucidusParser::RuleGoto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(LucidusParser::GOTO);
    setState(108);
    match(LucidusParser::ID);
    setState(109);
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

LucidusParser::InfdecContext* LucidusParser::StatContext::infdec() {
  return getRuleContext<LucidusParser::InfdecContext>(0);
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

LucidusParser::LabelContext* LucidusParser::StatContext::label() {
  return getRuleContext<LucidusParser::LabelContext>(0);
}

LucidusParser::GotoContext* LucidusParser::StatContext::goto_() {
  return getRuleContext<LucidusParser::GotoContext>(0);
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
  enterRule(_localctx, 26, LucidusParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(111);
      vdec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(112);
      infdec();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(113);
      edec();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(114);
      assign();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(115);
      expr(0);
      setState(116);
      match(LucidusParser::SEMI);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(118);
      dec();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(119);
      ret();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(120);
      label();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(121);
      goto_();
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

tree::TerminalNode* LucidusParser::DefContext::ID() {
  return getToken(LucidusParser::ID, 0);
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

LucidusParser::TypeContext* LucidusParser::DefContext::type() {
  return getRuleContext<LucidusParser::TypeContext>(0);
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
  enterRule(_localctx, 28, LucidusParser::RuleDef);
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
    setState(124);
    match(LucidusParser::DEF);
    setState(125);
    match(LucidusParser::ID);
    setState(126);
    match(LucidusParser::OPAREN);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(127);
      param();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(128);
        match(LucidusParser::COMMA);
        setState(129);
        param();
        setState(134);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(137);
    match(LucidusParser::CPAREN);
    setState(138);
    match(LucidusParser::ARROW);
    setState(139);
    type();
    setState(140);
    match(LucidusParser::LCURLY);
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5242126984) != 0)) {
      setState(141);
      stat();
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
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
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, LucidusParser::RuleExpr, precedence);

    

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
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(150);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(151);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(152);
      match(LucidusParser::FLOAT);
      break;
    }

    case 4: {
      setState(153);
      match(LucidusParser::STRING);
      break;
    }

    case 5: {
      setState(154);
      func();
      break;
    }

    case 6: {
      setState(155);
      match(LucidusParser::PTR);
      setState(156);
      expr(11);
      break;
    }

    case 7: {
      setState(157);
      match(LucidusParser::STAR);
      setState(158);
      expr(9);
      break;
    }

    case 8: {
      setState(159);
      match(LucidusParser::NOT);
      setState(160);
      expr(8);
      break;
    }

    case 9: {
      setState(161);
      match(LucidusParser::OPAREN);
      setState(162);
      expr(0);
      setState(163);
      match(LucidusParser::CPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(194);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(167);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(168);
          match(LucidusParser::STAR);
          setState(169);
          expr(11);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(170);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(171);
          match(LucidusParser::AND);
          setState(172);
          expr(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(173);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(174);
          match(LucidusParser::OR);
          setState(175);
          expr(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(176);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(177);
          match(LucidusParser::DIV);
          setState(178);
          expr(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(179);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(180);
          match(LucidusParser::PLUS);
          setState(181);
          expr(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(182);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(183);
          match(LucidusParser::SUB);
          setState(184);
          expr(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(185);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(186);
          match(LucidusParser::DOT);
          setState(187);
          match(LucidusParser::ID);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(188);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(189);
          match(LucidusParser::ARROW);
          setState(190);
          match(LucidusParser::OPAREN);
          setState(191);
          type();
          setState(192);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(198);
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
  enterRule(_localctx, 32, LucidusParser::RuleStruct);
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
    setState(199);
    match(LucidusParser::STRUCT);
    setState(200);
    match(LucidusParser::ID);
    setState(201);
    match(LucidusParser::LCURLY);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(202);
      idec();
      setState(207);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(203);
        match(LucidusParser::COMMA);
        setState(204);
        idec();
        setState(209);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(212);
    match(LucidusParser::RCURLY);
    setState(213);
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
  enterRule(_localctx, 34, LucidusParser::RuleFunc);
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
    setState(215);
    match(LucidusParser::ID);
    setState(216);
    match(LucidusParser::OPAREN);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5234754184) != 0)) {
      setState(217);
      expr(0);
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(218);
        match(LucidusParser::COMMA);
        setState(219);
        expr(0);
        setState(224);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(227);
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
    case 15: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LucidusParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
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
