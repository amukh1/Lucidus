
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
      "vdec", "infdec", "edec", "assign", "label", "goto", "if", "while", 
      "imrt", "stat", "def", "func", "expr", "struct"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'!='", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'('", "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", 
      "'>'", "'<'", "':='", "'ptr'", "':'", "'return'", "'label'", "'goto'", 
      "'.'", "'...'", "'if'", "'import'", "'else'", "'while'", "'sizeof'", 
      "'{'", "'}'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "NEQ", "PLUS", "SUB", "STAR", "DIV", 
      "MOD", "OPAREN", "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", 
      "ARROW", "GTR", "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", 
      "DOT", "DOTS", "IF", "IMPRT", "ELSE", "WHILE", "SIZEOF", "LCURLY", 
      "RCURLY", "LBRACK", "RBRACK", "INT", "FLOAT", "ID", "WS", "COMMENT", 
      "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,43,322,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,1,0,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,0,1,0,1,1,1,1,1,2,1,2,1,
  	2,1,2,5,2,61,8,2,10,2,12,2,64,9,2,3,2,66,8,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,3,1,3,3,3,76,8,3,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,4,1,4,1,4,1,4,1,
  	5,1,5,3,5,90,8,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,98,8,6,10,6,12,6,101,9,6,
  	3,6,103,8,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,
  	12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,5,14,145,8,14,10,
  	14,12,14,148,9,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,5,15,157,8,15,10,
  	15,12,15,160,9,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,181,8,17,1,18,1,18,1,
  	18,1,18,1,18,1,18,5,18,189,8,18,10,18,12,18,192,9,18,3,18,194,8,18,1,
  	18,1,18,1,18,1,18,1,18,5,18,201,8,18,10,18,12,18,204,9,18,1,18,1,18,1,
  	19,1,19,1,19,1,19,1,19,3,19,213,8,19,1,19,1,19,1,19,1,19,5,19,219,8,19,
  	10,19,12,19,222,9,19,3,19,224,8,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,3,20,248,8,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,
  	301,8,20,10,20,12,20,304,9,20,1,21,1,21,1,21,1,21,1,21,1,21,5,21,312,
  	8,21,10,21,12,21,315,9,21,3,21,317,8,21,1,21,1,21,1,21,1,21,0,1,40,22,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,0,0,355,
  	0,49,1,0,0,0,2,54,1,0,0,0,4,56,1,0,0,0,6,75,1,0,0,0,8,83,1,0,0,0,10,89,
  	1,0,0,0,12,91,1,0,0,0,14,109,1,0,0,0,16,113,1,0,0,0,18,118,1,0,0,0,20,
  	123,1,0,0,0,22,126,1,0,0,0,24,131,1,0,0,0,26,135,1,0,0,0,28,139,1,0,0,
  	0,30,151,1,0,0,0,32,163,1,0,0,0,34,180,1,0,0,0,36,182,1,0,0,0,38,212,
  	1,0,0,0,40,247,1,0,0,0,42,305,1,0,0,0,44,48,3,34,17,0,45,48,3,36,18,0,
  	46,48,3,42,21,0,47,44,1,0,0,0,47,45,1,0,0,0,47,46,1,0,0,0,48,51,1,0,0,
  	0,49,47,1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,0,51,49,1,0,0,0,52,53,5,0,0,
  	1,53,1,1,0,0,0,54,55,5,40,0,0,55,3,1,0,0,0,56,65,5,11,0,0,57,62,3,6,3,
  	0,58,59,5,13,0,0,59,61,3,6,3,0,60,58,1,0,0,0,61,64,1,0,0,0,62,60,1,0,
  	0,0,62,63,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,65,57,1,0,0,0,65,66,1,0,
  	0,0,66,67,1,0,0,0,67,68,5,12,0,0,68,69,5,18,0,0,69,70,5,11,0,0,70,71,
  	3,6,3,0,71,72,5,12,0,0,72,5,1,0,0,0,73,76,5,40,0,0,74,76,3,4,2,0,75,73,
  	1,0,0,0,75,74,1,0,0,0,76,80,1,0,0,0,77,79,5,8,0,0,78,77,1,0,0,0,79,82,
  	1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,7,1,0,0,0,82,80,1,0,0,0,83,84,
  	5,40,0,0,84,85,5,23,0,0,85,86,3,6,3,0,86,9,1,0,0,0,87,90,3,8,4,0,88,90,
  	5,28,0,0,89,87,1,0,0,0,89,88,1,0,0,0,90,11,1,0,0,0,91,92,5,17,0,0,92,
  	93,5,40,0,0,93,102,5,11,0,0,94,99,3,10,5,0,95,96,5,13,0,0,96,98,3,10,
  	5,0,97,95,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,103,
  	1,0,0,0,101,99,1,0,0,0,102,94,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,
  	104,105,5,12,0,0,105,106,5,18,0,0,106,107,3,6,3,0,107,108,5,14,0,0,108,
  	13,1,0,0,0,109,110,5,24,0,0,110,111,3,40,20,0,111,112,5,14,0,0,112,15,
  	1,0,0,0,113,114,3,8,4,0,114,115,5,4,0,0,115,116,3,40,20,0,116,117,5,14,
  	0,0,117,17,1,0,0,0,118,119,5,40,0,0,119,120,5,21,0,0,120,121,3,40,20,
  	0,121,122,5,14,0,0,122,19,1,0,0,0,123,124,3,8,4,0,124,125,5,14,0,0,125,
  	21,1,0,0,0,126,127,3,40,20,0,127,128,5,4,0,0,128,129,3,40,20,0,129,130,
  	5,14,0,0,130,23,1,0,0,0,131,132,5,25,0,0,132,133,5,40,0,0,133,134,5,23,
  	0,0,134,25,1,0,0,0,135,136,5,26,0,0,136,137,5,40,0,0,137,138,5,14,0,0,
  	138,27,1,0,0,0,139,140,5,29,0,0,140,141,3,40,20,0,141,142,5,18,0,0,142,
  	146,5,34,0,0,143,145,3,34,17,0,144,143,1,0,0,0,145,148,1,0,0,0,146,144,
  	1,0,0,0,146,147,1,0,0,0,147,149,1,0,0,0,148,146,1,0,0,0,149,150,5,35,
  	0,0,150,29,1,0,0,0,151,152,5,32,0,0,152,153,3,40,20,0,153,154,5,18,0,
  	0,154,158,5,34,0,0,155,157,3,34,17,0,156,155,1,0,0,0,157,160,1,0,0,0,
  	158,156,1,0,0,0,158,159,1,0,0,0,159,161,1,0,0,0,160,158,1,0,0,0,161,162,
  	5,35,0,0,162,31,1,0,0,0,163,164,5,30,0,0,164,165,5,43,0,0,165,33,1,0,
  	0,0,166,181,3,16,8,0,167,181,3,18,9,0,168,181,3,20,10,0,169,181,3,22,
  	11,0,170,171,3,40,20,0,171,172,5,14,0,0,172,181,1,0,0,0,173,181,3,12,
  	6,0,174,181,3,14,7,0,175,181,3,24,12,0,176,181,3,26,13,0,177,181,3,28,
  	14,0,178,181,3,30,15,0,179,181,3,32,16,0,180,166,1,0,0,0,180,167,1,0,
  	0,0,180,168,1,0,0,0,180,169,1,0,0,0,180,170,1,0,0,0,180,173,1,0,0,0,180,
  	174,1,0,0,0,180,175,1,0,0,0,180,176,1,0,0,0,180,177,1,0,0,0,180,178,1,
  	0,0,0,180,179,1,0,0,0,181,35,1,0,0,0,182,183,5,15,0,0,183,184,5,40,0,
  	0,184,193,5,11,0,0,185,190,3,10,5,0,186,187,5,13,0,0,187,189,3,10,5,0,
  	188,186,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,194,
  	1,0,0,0,192,190,1,0,0,0,193,185,1,0,0,0,193,194,1,0,0,0,194,195,1,0,0,
  	0,195,196,5,12,0,0,196,197,5,18,0,0,197,198,3,6,3,0,198,202,5,34,0,0,
  	199,201,3,34,17,0,200,199,1,0,0,0,201,204,1,0,0,0,202,200,1,0,0,0,202,
  	203,1,0,0,0,203,205,1,0,0,0,204,202,1,0,0,0,205,206,5,35,0,0,206,37,1,
  	0,0,0,207,213,5,40,0,0,208,209,5,11,0,0,209,210,3,40,20,0,210,211,5,12,
  	0,0,211,213,1,0,0,0,212,207,1,0,0,0,212,208,1,0,0,0,213,214,1,0,0,0,214,
  	223,5,11,0,0,215,220,3,40,20,0,216,217,5,13,0,0,217,219,3,40,20,0,218,
  	216,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,224,1,
  	0,0,0,222,220,1,0,0,0,223,215,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,
  	225,226,5,12,0,0,226,39,1,0,0,0,227,228,6,20,-1,0,228,248,5,40,0,0,229,
  	248,5,38,0,0,230,248,5,39,0,0,231,248,5,43,0,0,232,248,3,38,19,0,233,
  	234,5,22,0,0,234,248,3,40,20,19,235,236,5,8,0,0,236,248,3,40,20,16,237,
  	238,5,3,0,0,238,248,3,40,20,15,239,240,5,7,0,0,240,248,3,40,20,9,241,
  	242,5,33,0,0,242,248,3,6,3,0,243,244,5,11,0,0,244,245,3,40,20,0,245,246,
  	5,12,0,0,246,248,1,0,0,0,247,227,1,0,0,0,247,229,1,0,0,0,247,230,1,0,
  	0,0,247,231,1,0,0,0,247,232,1,0,0,0,247,233,1,0,0,0,247,235,1,0,0,0,247,
  	237,1,0,0,0,247,239,1,0,0,0,247,241,1,0,0,0,247,243,1,0,0,0,248,302,1,
  	0,0,0,249,250,10,18,0,0,250,251,5,8,0,0,251,301,3,40,20,19,252,253,10,
  	14,0,0,253,254,5,1,0,0,254,301,3,40,20,15,255,256,10,13,0,0,256,257,5,
  	2,0,0,257,301,3,40,20,14,258,259,10,12,0,0,259,260,5,9,0,0,260,301,3,
  	40,20,13,261,262,10,11,0,0,262,263,5,6,0,0,263,301,3,40,20,12,264,265,
  	10,10,0,0,265,266,5,7,0,0,266,301,3,40,20,11,267,268,10,8,0,0,268,269,
  	5,10,0,0,269,301,3,40,20,9,270,271,10,5,0,0,271,272,5,4,0,0,272,273,5,
  	4,0,0,273,301,3,40,20,6,274,275,10,4,0,0,275,276,5,5,0,0,276,301,3,40,
  	20,5,277,278,10,3,0,0,278,279,5,19,0,0,279,301,3,40,20,4,280,281,10,2,
  	0,0,281,282,5,20,0,0,282,301,3,40,20,3,283,284,10,22,0,0,284,285,5,27,
  	0,0,285,301,5,40,0,0,286,287,10,21,0,0,287,288,5,18,0,0,288,301,5,40,
  	0,0,289,290,10,17,0,0,290,291,5,36,0,0,291,292,3,40,20,0,292,293,5,37,
  	0,0,293,301,1,0,0,0,294,295,10,7,0,0,295,296,5,18,0,0,296,297,5,11,0,
  	0,297,298,3,6,3,0,298,299,5,12,0,0,299,301,1,0,0,0,300,249,1,0,0,0,300,
  	252,1,0,0,0,300,255,1,0,0,0,300,258,1,0,0,0,300,261,1,0,0,0,300,264,1,
  	0,0,0,300,267,1,0,0,0,300,270,1,0,0,0,300,274,1,0,0,0,300,277,1,0,0,0,
  	300,280,1,0,0,0,300,283,1,0,0,0,300,286,1,0,0,0,300,289,1,0,0,0,300,294,
  	1,0,0,0,301,304,1,0,0,0,302,300,1,0,0,0,302,303,1,0,0,0,303,41,1,0,0,
  	0,304,302,1,0,0,0,305,306,5,16,0,0,306,307,5,40,0,0,307,316,5,34,0,0,
  	308,313,3,8,4,0,309,310,5,13,0,0,310,312,3,8,4,0,311,309,1,0,0,0,312,
  	315,1,0,0,0,313,311,1,0,0,0,313,314,1,0,0,0,314,317,1,0,0,0,315,313,1,
  	0,0,0,316,308,1,0,0,0,316,317,1,0,0,0,317,318,1,0,0,0,318,319,5,35,0,
  	0,319,320,5,14,0,0,320,43,1,0,0,0,23,47,49,62,65,75,80,89,99,102,146,
  	158,180,190,193,202,212,220,223,247,300,302,313,316
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
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10734855752072) != 0)) {
      setState(47);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LucidusParser::NOT:
        case LucidusParser::SUB:
        case LucidusParser::STAR:
        case LucidusParser::OPAREN:
        case LucidusParser::DECL:
        case LucidusParser::PTR:
        case LucidusParser::RETURN:
        case LucidusParser::LABEL:
        case LucidusParser::GOTO:
        case LucidusParser::IF:
        case LucidusParser::IMPRT:
        case LucidusParser::WHILE:
        case LucidusParser::SIZEOF:
        case LucidusParser::INT:
        case LucidusParser::FLOAT:
        case LucidusParser::ID:
        case LucidusParser::STRING: {
          setState(44);
          stat();
          break;
        }

        case LucidusParser::DEF: {
          setState(45);
          def();
          break;
        }

        case LucidusParser::STRUCT: {
          setState(46);
          struct_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
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
    setState(54);
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
    setState(56);
    match(LucidusParser::OPAREN);
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::OPAREN

    || _la == LucidusParser::ID) {
      setState(57);
      type();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(58);
        match(LucidusParser::COMMA);
        setState(59);
        type();
        setState(64);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(67);
    match(LucidusParser::CPAREN);
    setState(68);
    match(LucidusParser::ARROW);
    setState(69);
    match(LucidusParser::OPAREN);
    setState(70);
    type();
    setState(71);
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

LucidusParser::FptrContext* LucidusParser::TypeContext::fptr() {
  return getRuleContext<LucidusParser::FptrContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(73);
        match(LucidusParser::ID);
        break;
      }

      case LucidusParser::OPAREN: {
        setState(74);
        fptr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(80);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(77);
        match(LucidusParser::STAR); 
      }
      setState(82);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
    setState(83);
    match(LucidusParser::ID);
    setState(84);
    match(LucidusParser::COL);
    setState(85);
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
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(87);
        idec();
        break;
      }

      case LucidusParser::DOTS: {
        setState(88);
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
    setState(91);
    match(LucidusParser::DECL);
    setState(92);
    match(LucidusParser::ID);
    setState(93);
    match(LucidusParser::OPAREN);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(94);
      param();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(95);
        match(LucidusParser::COMMA);
        setState(96);
        param();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(104);
    match(LucidusParser::CPAREN);
    setState(105);
    match(LucidusParser::ARROW);
    setState(106);
    type();
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
    setState(109);
    match(LucidusParser::RETURN);
    setState(110);
    expr(0);
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
    setState(113);
    idec();
    setState(114);
    match(LucidusParser::EQ);
    setState(115);
    expr(0);
    setState(116);
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
    setState(118);
    match(LucidusParser::ID);
    setState(119);
    match(LucidusParser::DCOL);
    setState(120);
    expr(0);
    setState(121);
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
    setState(123);
    idec();
    setState(124);
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
    setState(126);
    expr(0);
    setState(127);
    match(LucidusParser::EQ);
    setState(128);
    expr(0);
    setState(129);
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
    setState(131);
    match(LucidusParser::LABEL);
    setState(132);
    match(LucidusParser::ID);
    setState(133);
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
    setState(135);
    match(LucidusParser::GOTO);
    setState(136);
    match(LucidusParser::ID);
    setState(137);
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
    setState(139);
    match(LucidusParser::IF);
    setState(140);
    expr(0);
    setState(141);
    match(LucidusParser::ARROW);
    setState(142);
    match(LucidusParser::LCURLY);
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10734855653768) != 0)) {
      setState(143);
      stat();
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(149);
    match(LucidusParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

LucidusParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::WhileContext::WHILE() {
  return getToken(LucidusParser::WHILE, 0);
}

LucidusParser::ExprContext* LucidusParser::WhileContext::expr() {
  return getRuleContext<LucidusParser::ExprContext>(0);
}

tree::TerminalNode* LucidusParser::WhileContext::ARROW() {
  return getToken(LucidusParser::ARROW, 0);
}

tree::TerminalNode* LucidusParser::WhileContext::LCURLY() {
  return getToken(LucidusParser::LCURLY, 0);
}

tree::TerminalNode* LucidusParser::WhileContext::RCURLY() {
  return getToken(LucidusParser::RCURLY, 0);
}

std::vector<LucidusParser::StatContext *> LucidusParser::WhileContext::stat() {
  return getRuleContexts<LucidusParser::StatContext>();
}

LucidusParser::StatContext* LucidusParser::WhileContext::stat(size_t i) {
  return getRuleContext<LucidusParser::StatContext>(i);
}


size_t LucidusParser::WhileContext::getRuleIndex() const {
  return LucidusParser::RuleWhile;
}


std::any LucidusParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::WhileContext* LucidusParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 30, LucidusParser::RuleWhile);
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
    setState(151);
    match(LucidusParser::WHILE);
    setState(152);
    expr(0);
    setState(153);
    match(LucidusParser::ARROW);
    setState(154);
    match(LucidusParser::LCURLY);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10734855653768) != 0)) {
      setState(155);
      stat();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(LucidusParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImrtContext ------------------------------------------------------------------

LucidusParser::ImrtContext::ImrtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LucidusParser::ImrtContext::IMPRT() {
  return getToken(LucidusParser::IMPRT, 0);
}

tree::TerminalNode* LucidusParser::ImrtContext::STRING() {
  return getToken(LucidusParser::STRING, 0);
}


size_t LucidusParser::ImrtContext::getRuleIndex() const {
  return LucidusParser::RuleImrt;
}


std::any LucidusParser::ImrtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LucidusParserVisitor*>(visitor))
    return parserVisitor->visitImrt(this);
  else
    return visitor->visitChildren(this);
}

LucidusParser::ImrtContext* LucidusParser::imrt() {
  ImrtContext *_localctx = _tracker.createInstance<ImrtContext>(_ctx, getState());
  enterRule(_localctx, 32, LucidusParser::RuleImrt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(LucidusParser::IMPRT);
    setState(164);
    match(LucidusParser::STRING);
   
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

LucidusParser::WhileContext* LucidusParser::StatContext::while_() {
  return getRuleContext<LucidusParser::WhileContext>(0);
}

LucidusParser::ImrtContext* LucidusParser::StatContext::imrt() {
  return getRuleContext<LucidusParser::ImrtContext>(0);
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
  enterRule(_localctx, 34, LucidusParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(166);
      vdec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(167);
      infdec();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(168);
      edec();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(169);
      assign();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(170);
      expr(0);
      setState(171);
      match(LucidusParser::SEMI);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(173);
      dec();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(174);
      ret();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(175);
      label();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(176);
      goto_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(177);
      if_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(178);
      while_();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(179);
      imrt();
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
  enterRule(_localctx, 36, LucidusParser::RuleDef);
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
    setState(182);
    match(LucidusParser::DEF);
    setState(183);
    match(LucidusParser::ID);
    setState(184);
    match(LucidusParser::OPAREN);
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::DOTS

    || _la == LucidusParser::ID) {
      setState(185);
      param();
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(186);
        match(LucidusParser::COMMA);
        setState(187);
        param();
        setState(192);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(195);
    match(LucidusParser::CPAREN);
    setState(196);
    match(LucidusParser::ARROW);
    setState(197);
    type();
    setState(198);
    match(LucidusParser::LCURLY);
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10734855653768) != 0)) {
      setState(199);
      stat();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    match(LucidusParser::RCURLY);
   
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

std::vector<tree::TerminalNode *> LucidusParser::FuncContext::OPAREN() {
  return getTokens(LucidusParser::OPAREN);
}

tree::TerminalNode* LucidusParser::FuncContext::OPAREN(size_t i) {
  return getToken(LucidusParser::OPAREN, i);
}

std::vector<tree::TerminalNode *> LucidusParser::FuncContext::CPAREN() {
  return getTokens(LucidusParser::CPAREN);
}

tree::TerminalNode* LucidusParser::FuncContext::CPAREN(size_t i) {
  return getToken(LucidusParser::CPAREN, i);
}

tree::TerminalNode* LucidusParser::FuncContext::ID() {
  return getToken(LucidusParser::ID, 0);
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
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LucidusParser::ID: {
        setState(207);
        match(LucidusParser::ID);
        break;
      }

      case LucidusParser::OPAREN: {
        setState(208);
        match(LucidusParser::OPAREN);
        setState(209);
        expr(0);
        setState(210);
        match(LucidusParser::CPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(214);
    match(LucidusParser::OPAREN);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10728832502152) != 0)) {
      setState(215);
      expr(0);
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(216);
        match(LucidusParser::COMMA);
        setState(217);
        expr(0);
        setState(222);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(225);
    match(LucidusParser::CPAREN);
   
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

tree::TerminalNode* LucidusParser::ExprContext::SUB() {
  return getToken(LucidusParser::SUB, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::SIZEOF() {
  return getToken(LucidusParser::SIZEOF, 0);
}

LucidusParser::TypeContext* LucidusParser::ExprContext::type() {
  return getRuleContext<LucidusParser::TypeContext>(0);
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

tree::TerminalNode* LucidusParser::ExprContext::MOD() {
  return getToken(LucidusParser::MOD, 0);
}

std::vector<tree::TerminalNode *> LucidusParser::ExprContext::EQ() {
  return getTokens(LucidusParser::EQ);
}

tree::TerminalNode* LucidusParser::ExprContext::EQ(size_t i) {
  return getToken(LucidusParser::EQ, i);
}

tree::TerminalNode* LucidusParser::ExprContext::NEQ() {
  return getToken(LucidusParser::NEQ, 0);
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

tree::TerminalNode* LucidusParser::ExprContext::LBRACK() {
  return getToken(LucidusParser::LBRACK, 0);
}

tree::TerminalNode* LucidusParser::ExprContext::RBRACK() {
  return getToken(LucidusParser::RBRACK, 0);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, LucidusParser::RuleExpr, precedence);

    

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
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(228);
      match(LucidusParser::ID);
      break;
    }

    case 2: {
      setState(229);
      match(LucidusParser::INT);
      break;
    }

    case 3: {
      setState(230);
      match(LucidusParser::FLOAT);
      break;
    }

    case 4: {
      setState(231);
      match(LucidusParser::STRING);
      break;
    }

    case 5: {
      setState(232);
      func();
      break;
    }

    case 6: {
      setState(233);
      match(LucidusParser::PTR);
      setState(234);
      expr(19);
      break;
    }

    case 7: {
      setState(235);
      match(LucidusParser::STAR);
      setState(236);
      expr(16);
      break;
    }

    case 8: {
      setState(237);
      match(LucidusParser::NOT);
      setState(238);
      expr(15);
      break;
    }

    case 9: {
      setState(239);
      match(LucidusParser::SUB);
      setState(240);
      expr(9);
      break;
    }

    case 10: {
      setState(241);
      match(LucidusParser::SIZEOF);
      setState(242);
      type();
      break;
    }

    case 11: {
      setState(243);
      match(LucidusParser::OPAREN);
      setState(244);
      expr(0);
      setState(245);
      match(LucidusParser::CPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(302);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(300);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(249);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(250);
          match(LucidusParser::STAR);
          setState(251);
          expr(19);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(252);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(253);
          match(LucidusParser::AND);
          setState(254);
          expr(15);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(255);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(256);
          match(LucidusParser::OR);
          setState(257);
          expr(14);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(258);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(259);
          match(LucidusParser::DIV);
          setState(260);
          expr(13);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(261);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(262);
          match(LucidusParser::PLUS);
          setState(263);
          expr(12);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(264);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(265);
          match(LucidusParser::SUB);
          setState(266);
          expr(11);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(267);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(268);
          match(LucidusParser::MOD);
          setState(269);
          expr(9);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(270);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(271);
          match(LucidusParser::EQ);
          setState(272);
          match(LucidusParser::EQ);
          setState(273);
          expr(6);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(274);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(275);
          match(LucidusParser::NEQ);
          setState(276);
          expr(5);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(277);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(278);
          match(LucidusParser::GTR);
          setState(279);
          expr(4);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(280);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(281);
          match(LucidusParser::LESS);
          setState(282);
          expr(3);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(283);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(284);
          match(LucidusParser::DOT);
          setState(285);
          match(LucidusParser::ID);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(286);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(287);
          match(LucidusParser::ARROW);
          setState(288);
          match(LucidusParser::ID);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(289);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(290);
          match(LucidusParser::LBRACK);
          setState(291);
          expr(0);
          setState(292);
          match(LucidusParser::RBRACK);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(294);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(295);
          match(LucidusParser::ARROW);
          setState(296);
          match(LucidusParser::OPAREN);
          setState(297);
          type();
          setState(298);
          match(LucidusParser::CPAREN);
          break;
        }

        default:
          break;
        } 
      }
      setState(304);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  enterRule(_localctx, 42, LucidusParser::RuleStruct);
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
    setState(305);
    match(LucidusParser::STRUCT);
    setState(306);
    match(LucidusParser::ID);
    setState(307);
    match(LucidusParser::LCURLY);
    setState(316);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LucidusParser::ID) {
      setState(308);
      idec();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LucidusParser::COMMA) {
        setState(309);
        match(LucidusParser::COMMA);
        setState(310);
        idec();
        setState(315);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(318);
    match(LucidusParser::RCURLY);
    setState(319);
    match(LucidusParser::SEMI);
   
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
    case 20: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LucidusParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 22);
    case 12: return precpred(_ctx, 21);
    case 13: return precpred(_ctx, 17);
    case 14: return precpred(_ctx, 7);

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
