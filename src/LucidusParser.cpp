
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
      "infdec", "edec", "assign", "label", "goto", "if", "stat", "def", 
      "expr", "struct", "func"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
      "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", "'>'", 
      "'<'", "':='", "'ptr'", "':'", "'return'", "'label'", "'goto'", "'.'", 
      "'...'", "'if'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
      "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "GTR", 
      "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", "DOT", "DOTS", 
      "IF", "LCURLY", "RCURLY", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,255,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,0,1,0,1,1,1,1,1,2,1,2,5,2,53,8,2,10,2,12,2,56,9,2,1,3,
  	1,3,1,3,1,3,1,4,1,4,3,4,64,8,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,72,8,5,10,
  	5,12,5,75,9,5,3,5,77,8,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,5,13,
  	119,8,13,10,13,12,13,122,9,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,3,14,138,8,14,1,15,1,15,1,15,1,15,1,15,
  	1,15,5,15,146,8,15,10,15,12,15,149,9,15,3,15,151,8,15,1,15,1,15,1,15,
  	1,15,1,15,5,15,158,8,15,10,15,12,15,161,9,15,1,15,1,15,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,
  	181,8,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,5,16,220,8,16,
  	10,16,12,16,223,9,16,1,17,1,17,1,17,1,17,1,17,1,17,5,17,231,8,17,10,17,
  	12,17,234,9,17,3,17,236,8,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,
  	5,18,246,8,18,10,18,12,18,249,9,18,3,18,251,8,18,1,18,1,18,1,18,0,1,32,
  	19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,0,0,278,0,43,1,
  	0,0,0,2,48,1,0,0,0,4,50,1,0,0,0,6,57,1,0,0,0,8,63,1,0,0,0,10,65,1,0,0,
  	0,12,83,1,0,0,0,14,87,1,0,0,0,16,92,1,0,0,0,18,97,1,0,0,0,20,100,1,0,
  	0,0,22,105,1,0,0,0,24,109,1,0,0,0,26,113,1,0,0,0,28,137,1,0,0,0,30,139,
  	1,0,0,0,32,180,1,0,0,0,34,224,1,0,0,0,36,240,1,0,0,0,38,42,3,28,14,0,
  	39,42,3,30,15,0,40,42,3,34,17,0,41,38,1,0,0,0,41,39,1,0,0,0,41,40,1,0,
  	0,0,42,45,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,46,1,0,0,0,45,43,1,0,
  	0,0,46,47,5,0,0,1,47,1,1,0,0,0,48,49,5,32,0,0,49,3,1,0,0,0,50,54,5,32,
  	0,0,51,53,5,7,0,0,52,51,1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,0,54,55,1,0,
  	0,0,55,5,1,0,0,0,56,54,1,0,0,0,57,58,5,32,0,0,58,59,5,21,0,0,59,60,3,
  	4,2,0,60,7,1,0,0,0,61,64,3,6,3,0,62,64,5,26,0,0,63,61,1,0,0,0,63,62,1,
  	0,0,0,64,9,1,0,0,0,65,66,5,15,0,0,66,67,5,32,0,0,67,76,5,9,0,0,68,73,
  	3,8,4,0,69,70,5,11,0,0,70,72,3,8,4,0,71,69,1,0,0,0,72,75,1,0,0,0,73,71,
  	1,0,0,0,73,74,1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,0,76,68,1,0,0,0,76,77,
  	1,0,0,0,77,78,1,0,0,0,78,79,5,10,0,0,79,80,5,16,0,0,80,81,3,4,2,0,81,
  	82,5,12,0,0,82,11,1,0,0,0,83,84,5,22,0,0,84,85,3,32,16,0,85,86,5,12,0,
  	0,86,13,1,0,0,0,87,88,3,6,3,0,88,89,5,4,0,0,89,90,3,32,16,0,90,91,5,12,
  	0,0,91,15,1,0,0,0,92,93,5,32,0,0,93,94,5,19,0,0,94,95,3,32,16,0,95,96,
  	5,12,0,0,96,17,1,0,0,0,97,98,3,6,3,0,98,99,5,12,0,0,99,19,1,0,0,0,100,
  	101,3,32,16,0,101,102,5,4,0,0,102,103,3,32,16,0,103,104,5,12,0,0,104,
  	21,1,0,0,0,105,106,5,23,0,0,106,107,5,32,0,0,107,108,5,21,0,0,108,23,
  	1,0,0,0,109,110,5,24,0,0,110,111,5,32,0,0,111,112,5,12,0,0,112,25,1,0,
  	0,0,113,114,5,27,0,0,114,115,3,32,16,0,115,116,5,16,0,0,116,120,5,28,
  	0,0,117,119,3,28,14,0,118,117,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,
  	120,121,1,0,0,0,121,123,1,0,0,0,122,120,1,0,0,0,123,124,5,29,0,0,124,
  	27,1,0,0,0,125,138,3,14,7,0,126,138,3,16,8,0,127,138,3,18,9,0,128,138,
  	3,20,10,0,129,130,3,32,16,0,130,131,5,12,0,0,131,138,1,0,0,0,132,138,
  	3,10,5,0,133,138,3,12,6,0,134,138,3,22,11,0,135,138,3,24,12,0,136,138,
  	3,26,13,0,137,125,1,0,0,0,137,126,1,0,0,0,137,127,1,0,0,0,137,128,1,0,
  	0,0,137,129,1,0,0,0,137,132,1,0,0,0,137,133,1,0,0,0,137,134,1,0,0,0,137,
  	135,1,0,0,0,137,136,1,0,0,0,138,29,1,0,0,0,139,140,5,13,0,0,140,141,5,
  	32,0,0,141,150,5,9,0,0,142,147,3,8,4,0,143,144,5,11,0,0,144,146,3,8,4,
  	0,145,143,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,
  	151,1,0,0,0,149,147,1,0,0,0,150,142,1,0,0,0,150,151,1,0,0,0,151,152,1,
  	0,0,0,152,153,5,10,0,0,153,154,5,16,0,0,154,155,3,4,2,0,155,159,5,28,
  	0,0,156,158,3,28,14,0,157,156,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,
  	159,160,1,0,0,0,160,162,1,0,0,0,161,159,1,0,0,0,162,163,5,29,0,0,163,
  	31,1,0,0,0,164,165,6,16,-1,0,165,181,5,32,0,0,166,181,5,30,0,0,167,181,
  	5,31,0,0,168,181,5,35,0,0,169,181,3,36,18,0,170,171,5,20,0,0,171,181,
  	3,32,16,14,172,173,5,7,0,0,173,181,3,32,16,12,174,175,5,3,0,0,175,181,
  	3,32,16,11,176,177,5,9,0,0,177,178,3,32,16,0,178,179,5,10,0,0,179,181,
  	1,0,0,0,180,164,1,0,0,0,180,166,1,0,0,0,180,167,1,0,0,0,180,168,1,0,0,
  	0,180,169,1,0,0,0,180,170,1,0,0,0,180,172,1,0,0,0,180,174,1,0,0,0,180,
  	176,1,0,0,0,181,221,1,0,0,0,182,183,10,13,0,0,183,184,5,7,0,0,184,220,
  	3,32,16,14,185,186,10,10,0,0,186,187,5,1,0,0,187,220,3,32,16,11,188,189,
  	10,9,0,0,189,190,5,2,0,0,190,220,3,32,16,10,191,192,10,8,0,0,192,193,
  	5,8,0,0,193,220,3,32,16,9,194,195,10,7,0,0,195,196,5,5,0,0,196,220,3,
  	32,16,8,197,198,10,6,0,0,198,199,5,6,0,0,199,220,3,32,16,7,200,201,10,
  	4,0,0,201,202,5,4,0,0,202,203,5,4,0,0,203,220,3,32,16,5,204,205,10,3,
  	0,0,205,206,5,17,0,0,206,220,3,32,16,4,207,208,10,2,0,0,208,209,5,18,
  	0,0,209,220,3,32,16,3,210,211,10,16,0,0,211,212,5,25,0,0,212,220,5,32,
  	0,0,213,214,10,5,0,0,214,215,5,16,0,0,215,216,5,9,0,0,216,217,3,4,2,0,
  	217,218,5,10,0,0,218,220,1,0,0,0,219,182,1,0,0,0,219,185,1,0,0,0,219,
  	188,1,0,0,0,219,191,1,0,0,0,219,194,1,0,0,0,219,197,1,0,0,0,219,200,1,
  	0,0,0,219,204,1,0,0,0,219,207,1,0,0,0,219,210,1,0,0,0,219,213,1,0,0,0,
  	220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,33,1,0,0,0,223,221,
  	1,0,0,0,224,225,5,14,0,0,225,226,5,32,0,0,226,235,5,28,0,0,227,232,3,
  	6,3,0,228,229,5,11,0,0,229,231,3,6,3,0,230,228,1,0,0,0,231,234,1,0,0,
  	0,232,230,1,0,0,0,232,233,1,0,0,0,233,236,1,0,0,0,234,232,1,0,0,0,235,
  	227,1,0,0,0,235,236,1,0,0,0,236,237,1,0,0,0,237,238,5,29,0,0,238,239,
  	5,12,0,0,239,35,1,0,0,0,240,241,5,32,0,0,241,250,5,9,0,0,242,247,3,32,
  	16,0,243,244,5,11,0,0,244,246,3,32,16,0,245,243,1,0,0,0,246,249,1,0,0,
  	0,247,245,1,0,0,0,247,248,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,250,
  	242,1,0,0,0,250,251,1,0,0,0,251,252,1,0,0,0,252,253,5,10,0,0,253,37,1,
  	0,0,0,18,41,43,54,63,73,76,120,137,147,150,159,180,219,221,232,235,247,
  	250
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
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 42040615560) != 0)) {
      setState(41);
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
        case LucidusParser::IF:
        case LucidusParser::INT:
        case LucidusParser::FLOAT:
        case LucidusParser::ID:
        case LucidusParser::STRING: {
          setState(38);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(39);
          def();
          break;
        }

        case LucidusParser::STRUCT: {
          setState(40);
          struct_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(46);
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
    setState(48);
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
    setState(50);
    match(LucidusParser::ID);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LucidusParser::STAR) {
      setState(51);
      match(LucidusParser::STAR);
      setState(56);
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
    setState(57);
    match(LucidusParser::ID);
    setState(58);
    match(LucidusParser::COL);
    setState(59);
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
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(61);
        idec();
        break;
      }

      case LucidusParser::DOTS: {
        setState(62);
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
    setState(65);
    match(LucidusParser::DECL);
    setState(66);
    match(LucidusParser::ID);
    setState(67);
    match(LucidusParser::OPAREN);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(68);
      param();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(69);
        match(LucidusParser::COMMA);
        setState(70);
        param();
        setState(75);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(78);
    match(LucidusParser::CPAREN);
    setState(79);
    match(LucidusParser::ARROW);
    setState(80);
    type();
    setState(81);
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
    setState(83);
    match(LucidusParser::RETURN);
    setState(84);
    expr(0);
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
    setState(87);
    idec();
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
    setState(92);
    match(LucidusParser::ID);
    setState(93);
    match(LucidusParser::DCOL);
    setState(94);
    expr(0);
    setState(95);
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
    setState(97);
    idec();
    setState(98);
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
    setState(100);
    expr(0);
    setState(101);
    match(LucidusParser::EQ);
    setState(102);
    expr(0);
    setState(103);
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
    setState(105);
    match(LucidusParser::LABEL);
    setState(106);
    match(LucidusParser::ID);
    setState(107);
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
    setState(109);
    match(LucidusParser::GOTO);
    setState(110);
    match(LucidusParser::ID);
    setState(111);
    match(LucidusParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

LucidusParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::IfContext::IF() {
  return getToken(LucidusParser::IF, 0);
}

LucidusParser::ExprContext* LucidusParser::IfContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::IfContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

tree::TerminalNode* LucidusParser::IfContext::LCURLY() {
  return getToken(LucidusParser::LCURLY, 0);
}

tree::TerminalNode* LucidusParser::IfContext::RCURLY() {
  return getToken(LucidusParser::RCURLY, 0);
}

std::vector<LucidusParser::StatContext *> LucidusParser::IfContext::stat() {
  return getRuleContexts<LucidusParser::StatContext>();
}

LucidusParser::StatContext* LucidusParser::IfContext::stat(size_t i) {
  return getRuleContext<LucidusParser::StatContext>(i);
}


size_t LucidusParser::IfContext::getRuleIndex() const {
  return LucidusParser::RuleIf;
}


std::any LucidusParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::IfContext* LucidusParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 26, LucidusParser::RuleIf);
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
    setState(113);
    match(LucidusParser::IF);
    setState(114);
    expr(0);
    setState(115);
    match(LucidusParser::ARROW);
    setState(116);
    match(LucidusParser::LCURLY);
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 42040590984) != 0)) {
      setState(117);
      stat();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(123);
    match(LucidusParser::RCURLY);
   
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

LucidusParser::IfContext* LucidusParser::StatContext::if_() {
  return getRuleContext<LucidusParser::IfContext>(0);
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
  enterRule(_localctx, 28, LucidusParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(125);
      vdec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(126);
      infdec();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(127);
      edec();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(128);
      assign();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(129);
      expr(0);
      setState(130);
      match(LucidusParser::SEMI);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(132);
      dec();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(133);
      ret();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(134);
      label();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(135);
      goto_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(136);
      if_();
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
  enterRule(_localctx, 30, LucidusParser::RuleDef);
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
    setState(139);
    match(LucidusParser::DEF);
    setState(140);
    match(LucidusParser::ID);
    setState(141);
    match(LucidusParser::OPAREN);
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(142);
      param();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(143);
        match(LucidusParser::COMMA);
        setState(144);
        param();
        setState(149);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(152);
    match(LucidusParser::CPAREN);
    setState(153);
    match(LucidusParser::ARROW);
    setState(154);
    type();
    setState(155);
    match(LucidusParser::LCURLY);
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 42040590984) != 0)) {
      setState(156);
      stat();
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(162);
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

std::vector<tree::TerminalNode *> LucidusParser::ExprContext::EQ() {
  return getTokens(LucidusParser::EQ);
}

tree::TerminalNode* LucidusParser::ExprContext::EQ(size_t i) {
  return getToken(LucidusParser::EQ, i);
}

tree::TerminalNode* LucidusParser::ExprContext::GTR() {
  return getToken(LucidusParser::GTR, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::LESS() {
  return getToken(LucidusParser::LESS, 0);
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
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, LucidusParser::RuleExpr, precedence);

    

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
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(165);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(166);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(167);
      match(LucidusParser::FLOAT);
      break;
    }

    case 4: {
      setState(168);
      match(LucidusParser::STRING);
      break;
    }

    case 5: {
      setState(169);
      func();
      break;
    }

    case 6: {
      setState(170);
      match(LucidusParser::PTR);
      setState(171);
      expr(14);
      break;
    }

    case 7: {
      setState(172);
      match(LucidusParser::STAR);
      setState(173);
      expr(12);
      break;
    }

    case 8: {
      setState(174);
      match(LucidusParser::NOT);
      setState(175);
      expr(11);
      break;
    }

    case 9: {
      setState(176);
      match(LucidusParser::OPAREN);
      setState(177);
      expr(0);
      setState(178);
      match(LucidusParser::CPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(221);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(219);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(182);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(183);
          match(LucidusParser::STAR);
          setState(184);
          expr(14);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(185);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(186);
          match(LucidusParser::AND);
          setState(187);
          expr(11);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(188);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(189);
          match(LucidusParser::OR);
          setState(190);
          expr(10);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(191);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(192);
          match(LucidusParser::DIV);
          setState(193);
          expr(9);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(194);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(195);
          match(LucidusParser::PLUS);
          setState(196);
          expr(8);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(197);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(198);
          match(LucidusParser::SUB);
          setState(199);
          expr(7);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(200);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(201);
          match(LucidusParser::EQ);
          setState(202);
          match(LucidusParser::EQ);
          setState(203);
          expr(5);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(204);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(205);
          match(LucidusParser::GTR);
          setState(206);
          expr(4);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(208);
          match(LucidusParser::LESS);
          setState(209);
          expr(3);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(210);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(211);
          match(LucidusParser::DOT);
          setState(212);
          match(LucidusParser::ID);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(213);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(214);
          match(LucidusParser::ARROW);
          setState(215);
          match(LucidusParser::OPAREN);
          setState(216);
          type();
          setState(217);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(223);
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
  enterRule(_localctx, 34, LucidusParser::RuleStruct);
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
    setState(224);
    match(LucidusParser::STRUCT);
    setState(225);
    match(LucidusParser::ID);
    setState(226);
    match(LucidusParser::LCURLY);
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(227);
      idec();
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(228);
        match(LucidusParser::COMMA);
        setState(229);
        idec();
        setState(234);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(237);
    match(LucidusParser::RCURLY);
    setState(238);
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
  enterRule(_localctx, 36, LucidusParser::RuleFunc);
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
    setState(240);
    match(LucidusParser::ID);
    setState(241);
    match(LucidusParser::OPAREN);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 41876980360) != 0)) {
      setState(242);
      expr(0);
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(243);
        match(LucidusParser::COMMA);
        setState(244);
        expr(0);
        setState(249);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(252);
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
    case 16: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LucidusParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 4);
    case 7: return precpred(_ctx, 3);
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 16);
    case 10: return precpred(_ctx, 5);

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
