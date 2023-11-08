
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
      "program", "rawtype", "fptr", "type", "idec", "param", "dec", "ret", 
      "vdec", "infdec", "edec", "assign", "label", "goto", "if", "stat", 
      "def", "expr", "struct", "func"
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
  	4,1,35,277,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,0,5,0,
  	44,8,0,10,0,12,0,47,9,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,5,2,57,8,2,10,
  	2,12,2,60,9,2,3,2,62,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,5,3,72,8,3,10,
  	3,12,3,75,9,3,1,3,3,3,78,8,3,1,4,1,4,1,4,1,4,1,5,1,5,3,5,86,8,5,1,6,1,
  	6,1,6,1,6,1,6,1,6,5,6,94,8,6,10,6,12,6,97,9,6,3,6,99,8,6,1,6,1,6,1,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,14,5,14,141,8,14,10,14,12,14,144,9,14,1,14,
  	1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,
  	160,8,15,1,16,1,16,1,16,1,16,1,16,1,16,5,16,168,8,16,10,16,12,16,171,
  	9,16,3,16,173,8,16,1,16,1,16,1,16,1,16,1,16,5,16,180,8,16,10,16,12,16,
  	183,9,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,3,17,203,8,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,5,17,242,8,17,10,17,12,17,245,9,17,1,18,1,18,1,18,
  	1,18,1,18,1,18,5,18,253,8,18,10,18,12,18,256,9,18,3,18,258,8,18,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,19,1,19,5,19,268,8,19,10,19,12,19,271,9,19,
  	3,19,273,8,19,1,19,1,19,1,19,0,1,34,20,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,0,0,302,0,45,1,0,0,0,2,50,1,0,0,0,4,52,1,0,0,
  	0,6,77,1,0,0,0,8,79,1,0,0,0,10,85,1,0,0,0,12,87,1,0,0,0,14,105,1,0,0,
  	0,16,109,1,0,0,0,18,114,1,0,0,0,20,119,1,0,0,0,22,122,1,0,0,0,24,127,
  	1,0,0,0,26,131,1,0,0,0,28,135,1,0,0,0,30,159,1,0,0,0,32,161,1,0,0,0,34,
  	202,1,0,0,0,36,246,1,0,0,0,38,262,1,0,0,0,40,44,3,30,15,0,41,44,3,32,
  	16,0,42,44,3,36,18,0,43,40,1,0,0,0,43,41,1,0,0,0,43,42,1,0,0,0,44,47,
  	1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,45,1,0,0,0,48,49,
  	5,0,0,1,49,1,1,0,0,0,50,51,5,32,0,0,51,3,1,0,0,0,52,61,5,9,0,0,53,58,
  	3,6,3,0,54,55,5,11,0,0,55,57,3,6,3,0,56,54,1,0,0,0,57,60,1,0,0,0,58,56,
  	1,0,0,0,58,59,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,61,53,1,0,0,0,61,62,
  	1,0,0,0,62,63,1,0,0,0,63,64,5,10,0,0,64,65,5,16,0,0,65,66,5,9,0,0,66,
  	67,3,6,3,0,67,68,5,10,0,0,68,5,1,0,0,0,69,73,5,32,0,0,70,72,5,7,0,0,71,
  	70,1,0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,78,1,0,0,0,75,
  	73,1,0,0,0,76,78,3,4,2,0,77,69,1,0,0,0,77,76,1,0,0,0,78,7,1,0,0,0,79,
  	80,5,32,0,0,80,81,5,21,0,0,81,82,3,6,3,0,82,9,1,0,0,0,83,86,3,8,4,0,84,
  	86,5,26,0,0,85,83,1,0,0,0,85,84,1,0,0,0,86,11,1,0,0,0,87,88,5,15,0,0,
  	88,89,5,32,0,0,89,98,5,9,0,0,90,95,3,10,5,0,91,92,5,11,0,0,92,94,3,10,
  	5,0,93,91,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,99,1,0,
  	0,0,97,95,1,0,0,0,98,90,1,0,0,0,98,99,1,0,0,0,99,100,1,0,0,0,100,101,
  	5,10,0,0,101,102,5,16,0,0,102,103,3,6,3,0,103,104,5,12,0,0,104,13,1,0,
  	0,0,105,106,5,22,0,0,106,107,3,34,17,0,107,108,5,12,0,0,108,15,1,0,0,
  	0,109,110,3,8,4,0,110,111,5,4,0,0,111,112,3,34,17,0,112,113,5,12,0,0,
  	113,17,1,0,0,0,114,115,5,32,0,0,115,116,5,19,0,0,116,117,3,34,17,0,117,
  	118,5,12,0,0,118,19,1,0,0,0,119,120,3,8,4,0,120,121,5,12,0,0,121,21,1,
  	0,0,0,122,123,3,34,17,0,123,124,5,4,0,0,124,125,3,34,17,0,125,126,5,12,
  	0,0,126,23,1,0,0,0,127,128,5,23,0,0,128,129,5,32,0,0,129,130,5,21,0,0,
  	130,25,1,0,0,0,131,132,5,24,0,0,132,133,5,32,0,0,133,134,5,12,0,0,134,
  	27,1,0,0,0,135,136,5,27,0,0,136,137,3,34,17,0,137,138,5,16,0,0,138,142,
  	5,28,0,0,139,141,3,30,15,0,140,139,1,0,0,0,141,144,1,0,0,0,142,140,1,
  	0,0,0,142,143,1,0,0,0,143,145,1,0,0,0,144,142,1,0,0,0,145,146,5,29,0,
  	0,146,29,1,0,0,0,147,160,3,16,8,0,148,160,3,18,9,0,149,160,3,20,10,0,
  	150,160,3,22,11,0,151,152,3,34,17,0,152,153,5,12,0,0,153,160,1,0,0,0,
  	154,160,3,12,6,0,155,160,3,14,7,0,156,160,3,24,12,0,157,160,3,26,13,0,
  	158,160,3,28,14,0,159,147,1,0,0,0,159,148,1,0,0,0,159,149,1,0,0,0,159,
  	150,1,0,0,0,159,151,1,0,0,0,159,154,1,0,0,0,159,155,1,0,0,0,159,156,1,
  	0,0,0,159,157,1,0,0,0,159,158,1,0,0,0,160,31,1,0,0,0,161,162,5,13,0,0,
  	162,163,5,32,0,0,163,172,5,9,0,0,164,169,3,10,5,0,165,166,5,11,0,0,166,
  	168,3,10,5,0,167,165,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,
  	1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,172,164,1,0,0,0,172,173,1,0,0,
  	0,173,174,1,0,0,0,174,175,5,10,0,0,175,176,5,16,0,0,176,177,3,6,3,0,177,
  	181,5,28,0,0,178,180,3,30,15,0,179,178,1,0,0,0,180,183,1,0,0,0,181,179,
  	1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,181,1,0,0,0,184,185,5,29,
  	0,0,185,33,1,0,0,0,186,187,6,17,-1,0,187,203,5,32,0,0,188,203,5,30,0,
  	0,189,203,5,31,0,0,190,203,5,35,0,0,191,203,3,38,19,0,192,193,5,20,0,
  	0,193,203,3,34,17,14,194,195,5,7,0,0,195,203,3,34,17,12,196,197,5,3,0,
  	0,197,203,3,34,17,11,198,199,5,9,0,0,199,200,3,34,17,0,200,201,5,10,0,
  	0,201,203,1,0,0,0,202,186,1,0,0,0,202,188,1,0,0,0,202,189,1,0,0,0,202,
  	190,1,0,0,0,202,191,1,0,0,0,202,192,1,0,0,0,202,194,1,0,0,0,202,196,1,
  	0,0,0,202,198,1,0,0,0,203,243,1,0,0,0,204,205,10,13,0,0,205,206,5,7,0,
  	0,206,242,3,34,17,14,207,208,10,10,0,0,208,209,5,1,0,0,209,242,3,34,17,
  	11,210,211,10,9,0,0,211,212,5,2,0,0,212,242,3,34,17,10,213,214,10,8,0,
  	0,214,215,5,8,0,0,215,242,3,34,17,9,216,217,10,7,0,0,217,218,5,5,0,0,
  	218,242,3,34,17,8,219,220,10,6,0,0,220,221,5,6,0,0,221,242,3,34,17,7,
  	222,223,10,4,0,0,223,224,5,4,0,0,224,225,5,4,0,0,225,242,3,34,17,5,226,
  	227,10,3,0,0,227,228,5,17,0,0,228,242,3,34,17,4,229,230,10,2,0,0,230,
  	231,5,18,0,0,231,242,3,34,17,3,232,233,10,16,0,0,233,234,5,25,0,0,234,
  	242,5,32,0,0,235,236,10,5,0,0,236,237,5,16,0,0,237,238,5,9,0,0,238,239,
  	3,6,3,0,239,240,5,10,0,0,240,242,1,0,0,0,241,204,1,0,0,0,241,207,1,0,
  	0,0,241,210,1,0,0,0,241,213,1,0,0,0,241,216,1,0,0,0,241,219,1,0,0,0,241,
  	222,1,0,0,0,241,226,1,0,0,0,241,229,1,0,0,0,241,232,1,0,0,0,241,235,1,
  	0,0,0,242,245,1,0,0,0,243,241,1,0,0,0,243,244,1,0,0,0,244,35,1,0,0,0,
  	245,243,1,0,0,0,246,247,5,14,0,0,247,248,5,32,0,0,248,257,5,28,0,0,249,
  	254,3,8,4,0,250,251,5,11,0,0,251,253,3,8,4,0,252,250,1,0,0,0,253,256,
  	1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,
  	0,257,249,1,0,0,0,257,258,1,0,0,0,258,259,1,0,0,0,259,260,5,29,0,0,260,
  	261,5,12,0,0,261,37,1,0,0,0,262,263,5,32,0,0,263,272,5,9,0,0,264,269,
  	3,34,17,0,265,266,5,11,0,0,266,268,3,34,17,0,267,265,1,0,0,0,268,271,
  	1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,273,1,0,0,0,271,269,1,0,0,
  	0,272,264,1,0,0,0,272,273,1,0,0,0,273,274,1,0,0,0,274,275,5,10,0,0,275,
  	39,1,0,0,0,21,43,45,58,61,73,77,85,95,98,142,159,169,172,181,202,241,
  	243,254,257,269,272
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
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 42040615560) != 0)) {
      setState(43);
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
          setState(40);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(41);
          def();
          break;
        }

        case LucidusParser::STRUCT: {
          setState(42);
          struct_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
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
    setState(50);
    match(LucidusParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FptrContext ------------------------------------------------------------------

LucidusParser::FptrContext::FptrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LucidusParser::FptrContext::OPAREN() {
  return getTokens(LucidusParser::OPAREN);
}

tree::TerminalNode* LucidusParser::FptrContext::OPAREN(size_t i) {
  return getToken(LucidusParser::OPAREN, i);
}

std::vector<tree::TerminalNode *> LucidusParser::FptrContext::CPAREN() {
  return getTokens(LucidusParser::CPAREN);
}

tree::TerminalNode* LucidusParser::FptrContext::CPAREN(size_t i) {
  return getToken(LucidusParser::CPAREN, i);
}

tree::TerminalNode* LucidusParser::FptrContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

std::vector<LucidusParser::TypeContext *> LucidusParser::FptrContext::type() {
  return getRuleContexts<LucidusParser::TypeContext>();
}

LucidusParser::TypeContext* LucidusParser::FptrContext::type(size_t i) {
  return getRuleContext<LucidusParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> LucidusParser::FptrContext::COMMA() {
  return getTokens(LucidusParser::COMMA);
}

tree::TerminalNode* LucidusParser::FptrContext::COMMA(size_t i) {
  return getToken(LucidusParser::COMMA, i);
}


size_t LucidusParser::FptrContext::getRuleIndex() const {
  return LucidusParser::RuleFptr;
}


std::any LucidusParser::FptrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitFptr(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::FptrContext* LucidusParser::fptr() {
  FptrContext *_localctx = _tracker.createInstance<FptrContext>(_ctx, getState());
  enterRule(_localctx, 4, LucidusParser::RuleFptr);
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
    match(LucidusParser::OPAREN);
    setState(61);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::OPAREN

    || _la == LucidusParser::ID) {
      setState(53);
      type();
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(54);
        match(LucidusParser::COMMA);
        setState(55);
        type();
        setState(60);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(63);
    match(LucidusParser::CPAREN);
    setState(64);
    match(LucidusParser::ARROW);
    setState(65);
    match(LucidusParser::OPAREN);
    setState(66);
    type();
    setState(67);
    match(LucidusParser::CPAREN);
   
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

LucidusParser::FptrContext* LucidusParser::TypeContext::fptr() {
  return getRuleContext<LucidusParser::FptrContext>(0);
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
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(69);
        match(LucidusParser::ID);
        setState(73);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LucidusParser::STAR) {
          setState(70);
          match(LucidusParser::STAR);
          setState(75);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case LucidusParser::OPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(76);
        fptr();
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
    setState(79);
    match(LucidusParser::ID);
    setState(80);
    match(LucidusParser::COL);
    setState(81);
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
  enterRule(_localctx, 10, LucidusParser::RuleParam);

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
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(83);
        idec();
        break;
      }

      case LucidusParser::DOTS: {
        setState(84);
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
  enterRule(_localctx, 12, LucidusParser::RuleDec);
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
    setState(87);
    match(LucidusParser::DECL);
    setState(88);
    match(LucidusParser::ID);
    setState(89);
    match(LucidusParser::OPAREN);
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(90);
      param();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(91);
        match(LucidusParser::COMMA);
        setState(92);
        param();
        setState(97);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(100);
    match(LucidusParser::CPAREN);
    setState(101);
    match(LucidusParser::ARROW);
    setState(102);
    type();
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
  enterRule(_localctx, 14, LucidusParser::RuleRet);

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
    match(LucidusParser::RETURN);
    setState(106);
    expr(0);
    setState(107);
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
  enterRule(_localctx, 16, LucidusParser::RuleVdec);

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
    idec();
    setState(110);
    match(LucidusParser::EQ);
    setState(111);
    expr(0);
    setState(112);
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
  enterRule(_localctx, 18, LucidusParser::RuleInfdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(LucidusParser::ID);
    setState(115);
    match(LucidusParser::DCOL);
    setState(116);
    expr(0);
    setState(117);
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
  enterRule(_localctx, 20, LucidusParser::RuleEdec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    idec();
    setState(120);
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
  enterRule(_localctx, 22, LucidusParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    expr(0);
    setState(123);
    match(LucidusParser::EQ);
    setState(124);
    expr(0);
    setState(125);
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
  enterRule(_localctx, 24, LucidusParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(LucidusParser::LABEL);
    setState(128);
    match(LucidusParser::ID);
    setState(129);
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
  enterRule(_localctx, 26, LucidusParser::RuleGoto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(LucidusParser::GOTO);
    setState(132);
    match(LucidusParser::ID);
    setState(133);
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
  enterRule(_localctx, 28, LucidusParser::RuleIf);
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
    setState(135);
    match(LucidusParser::IF);
    setState(136);
    expr(0);
    setState(137);
    match(LucidusParser::ARROW);
    setState(138);
    match(LucidusParser::LCURLY);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 42040590984) != 0)) {
      setState(139);
      stat();
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(145);
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
  enterRule(_localctx, 30, LucidusParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      vdec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      infdec();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(149);
      edec();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(150);
      assign();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(151);
      expr(0);
      setState(152);
      match(LucidusParser::SEMI);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(154);
      dec();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(155);
      ret();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(156);
      label();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(157);
      goto_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(158);
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
  enterRule(_localctx, 32, LucidusParser::RuleDef);
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
    setState(161);
    match(LucidusParser::DEF);
    setState(162);
    match(LucidusParser::ID);
    setState(163);
    match(LucidusParser::OPAREN);
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(164);
      param();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(165);
        match(LucidusParser::COMMA);
        setState(166);
        param();
        setState(171);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(174);
    match(LucidusParser::CPAREN);
    setState(175);
    match(LucidusParser::ARROW);
    setState(176);
    type();
    setState(177);
    match(LucidusParser::LCURLY);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 42040590984) != 0)) {
      setState(178);
      stat();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, LucidusParser::RuleExpr, precedence);

    

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
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(187);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(188);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(189);
      match(LucidusParser::FLOAT);
      break;
    }

    case 4: {
      setState(190);
      match(LucidusParser::STRING);
      break;
    }

    case 5: {
      setState(191);
      func();
      break;
    }

    case 6: {
      setState(192);
      match(LucidusParser::PTR);
      setState(193);
      expr(14);
      break;
    }

    case 7: {
      setState(194);
      match(LucidusParser::STAR);
      setState(195);
      expr(12);
      break;
    }

    case 8: {
      setState(196);
      match(LucidusParser::NOT);
      setState(197);
      expr(11);
      break;
    }

    case 9: {
      setState(198);
      match(LucidusParser::OPAREN);
      setState(199);
      expr(0);
      setState(200);
      match(LucidusParser::CPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(243);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(241);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(204);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(205);
          match(LucidusParser::STAR);
          setState(206);
          expr(14);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(208);
          match(LucidusParser::AND);
          setState(209);
          expr(11);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(210);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(211);
          match(LucidusParser::OR);
          setState(212);
          expr(10);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(213);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(214);
          match(LucidusParser::DIV);
          setState(215);
          expr(9);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(216);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(217);
          match(LucidusParser::PLUS);
          setState(218);
          expr(8);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(219);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(220);
          match(LucidusParser::SUB);
          setState(221);
          expr(7);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(222);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(223);
          match(LucidusParser::EQ);
          setState(224);
          match(LucidusParser::EQ);
          setState(225);
          expr(5);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(226);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(227);
          match(LucidusParser::GTR);
          setState(228);
          expr(4);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(229);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(230);
          match(LucidusParser::LESS);
          setState(231);
          expr(3);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(232);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(233);
          match(LucidusParser::DOT);
          setState(234);
          match(LucidusParser::ID);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(235);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(236);
          match(LucidusParser::ARROW);
          setState(237);
          match(LucidusParser::OPAREN);
          setState(238);
          type();
          setState(239);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(245);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
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
  enterRule(_localctx, 36, LucidusParser::RuleStruct);
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
    setState(246);
    match(LucidusParser::STRUCT);
    setState(247);
    match(LucidusParser::ID);
    setState(248);
    match(LucidusParser::LCURLY);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(249);
      idec();
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(250);
        match(LucidusParser::COMMA);
        setState(251);
        idec();
        setState(256);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(259);
    match(LucidusParser::RCURLY);
    setState(260);
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
  enterRule(_localctx, 38, LucidusParser::RuleFunc);
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
    setState(262);
    match(LucidusParser::ID);
    setState(263);
    match(LucidusParser::OPAREN);
    setState(272);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 41876980360) != 0)) {
      setState(264);
      expr(0);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(265);
        match(LucidusParser::COMMA);
        setState(266);
        expr(0);
        setState(271);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(274);
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
    case 17: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
