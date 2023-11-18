
// Generated from LucidusLexer.g4 by ANTLR 4.13.1


#include "LucidusLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LucidusLexerStaticData final {
  LucidusLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LucidusLexerStaticData(const LucidusLexerStaticData&) = delete;
  LucidusLexerStaticData(LucidusLexerStaticData&&) = delete;
  LucidusLexerStaticData& operator=(const LucidusLexerStaticData&) = delete;
  LucidusLexerStaticData& operator=(LucidusLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag luciduslexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LucidusLexerStaticData *luciduslexerLexerStaticData = nullptr;

void luciduslexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (luciduslexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(luciduslexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LucidusLexerStaticData>(
    std::vector<std::string>{
      "AND", "OR", "NOT", "EQ", "NEQ", "PLUS", "SUB", "STAR", "DIV", "MOD", 
      "OPAREN", "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", 
      "GTR", "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", "DOT", 
      "DOTS", "IF", "IMPRT", "ELSE", "SIZEOF", "LCURLY", "RCURLY", "LBRACK", 
      "RBRACK", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'!'", "'='", "'!='", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'('", "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", 
      "'>'", "'<'", "':='", "'ptr'", "':'", "'return'", "'label'", "'goto'", 
      "'.'", "'...'", "'if'", "'import'", "'else'", "'sizeof'", "'{'", "'}'", 
      "'['", "']'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "NEQ", "PLUS", "SUB", "STAR", "DIV", 
      "MOD", "OPAREN", "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", 
      "ARROW", "GTR", "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", 
      "DOT", "DOTS", "IF", "IMPRT", "ELSE", "SIZEOF", "LCURLY", "RCURLY", 
      "LBRACK", "RBRACK", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,42,254,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,
  	7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,
  	17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,
  	22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	25,1,25,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,
  	29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,
  	31,1,31,1,31,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,4,
  	36,203,8,36,11,36,12,36,204,1,37,4,37,208,8,37,11,37,12,37,209,1,37,1,
  	37,5,37,214,8,37,10,37,12,37,217,9,37,1,38,1,38,5,38,221,8,38,10,38,12,
  	38,224,9,38,1,39,4,39,227,8,39,11,39,12,39,228,1,39,1,39,1,40,1,40,1,
  	40,1,40,5,40,237,8,40,10,40,12,40,240,9,40,1,40,1,40,1,40,1,40,1,41,1,
  	41,5,41,248,8,41,10,41,12,41,251,9,41,1,41,1,41,2,238,249,0,42,1,1,3,
  	2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,
  	31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,
  	27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,
  	77,39,79,40,81,41,83,42,1,0,4,1,0,48,57,3,0,65,90,95,95,97,122,4,0,48,
  	57,65,90,95,95,97,122,3,0,9,10,12,13,32,32,260,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,
  	0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,
  	1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,1,85,1,0,0,0,3,88,1,0,0,0,5,91,1,0,
  	0,0,7,93,1,0,0,0,9,95,1,0,0,0,11,98,1,0,0,0,13,100,1,0,0,0,15,102,1,0,
  	0,0,17,104,1,0,0,0,19,106,1,0,0,0,21,108,1,0,0,0,23,110,1,0,0,0,25,112,
  	1,0,0,0,27,114,1,0,0,0,29,116,1,0,0,0,31,120,1,0,0,0,33,127,1,0,0,0,35,
  	131,1,0,0,0,37,134,1,0,0,0,39,136,1,0,0,0,41,138,1,0,0,0,43,141,1,0,0,
  	0,45,145,1,0,0,0,47,147,1,0,0,0,49,154,1,0,0,0,51,160,1,0,0,0,53,165,
  	1,0,0,0,55,167,1,0,0,0,57,171,1,0,0,0,59,174,1,0,0,0,61,181,1,0,0,0,63,
  	186,1,0,0,0,65,193,1,0,0,0,67,195,1,0,0,0,69,197,1,0,0,0,71,199,1,0,0,
  	0,73,202,1,0,0,0,75,207,1,0,0,0,77,218,1,0,0,0,79,226,1,0,0,0,81,232,
  	1,0,0,0,83,245,1,0,0,0,85,86,5,38,0,0,86,87,5,38,0,0,87,2,1,0,0,0,88,
  	89,5,124,0,0,89,90,5,124,0,0,90,4,1,0,0,0,91,92,5,33,0,0,92,6,1,0,0,0,
  	93,94,5,61,0,0,94,8,1,0,0,0,95,96,5,33,0,0,96,97,5,61,0,0,97,10,1,0,0,
  	0,98,99,5,43,0,0,99,12,1,0,0,0,100,101,5,45,0,0,101,14,1,0,0,0,102,103,
  	5,42,0,0,103,16,1,0,0,0,104,105,5,47,0,0,105,18,1,0,0,0,106,107,5,37,
  	0,0,107,20,1,0,0,0,108,109,5,40,0,0,109,22,1,0,0,0,110,111,5,41,0,0,111,
  	24,1,0,0,0,112,113,5,44,0,0,113,26,1,0,0,0,114,115,5,59,0,0,115,28,1,
  	0,0,0,116,117,5,100,0,0,117,118,5,101,0,0,118,119,5,102,0,0,119,30,1,
  	0,0,0,120,121,5,115,0,0,121,122,5,116,0,0,122,123,5,114,0,0,123,124,5,
  	117,0,0,124,125,5,99,0,0,125,126,5,116,0,0,126,32,1,0,0,0,127,128,5,100,
  	0,0,128,129,5,101,0,0,129,130,5,99,0,0,130,34,1,0,0,0,131,132,5,45,0,
  	0,132,133,5,62,0,0,133,36,1,0,0,0,134,135,5,62,0,0,135,38,1,0,0,0,136,
  	137,5,60,0,0,137,40,1,0,0,0,138,139,5,58,0,0,139,140,5,61,0,0,140,42,
  	1,0,0,0,141,142,5,112,0,0,142,143,5,116,0,0,143,144,5,114,0,0,144,44,
  	1,0,0,0,145,146,5,58,0,0,146,46,1,0,0,0,147,148,5,114,0,0,148,149,5,101,
  	0,0,149,150,5,116,0,0,150,151,5,117,0,0,151,152,5,114,0,0,152,153,5,110,
  	0,0,153,48,1,0,0,0,154,155,5,108,0,0,155,156,5,97,0,0,156,157,5,98,0,
  	0,157,158,5,101,0,0,158,159,5,108,0,0,159,50,1,0,0,0,160,161,5,103,0,
  	0,161,162,5,111,0,0,162,163,5,116,0,0,163,164,5,111,0,0,164,52,1,0,0,
  	0,165,166,5,46,0,0,166,54,1,0,0,0,167,168,5,46,0,0,168,169,5,46,0,0,169,
  	170,5,46,0,0,170,56,1,0,0,0,171,172,5,105,0,0,172,173,5,102,0,0,173,58,
  	1,0,0,0,174,175,5,105,0,0,175,176,5,109,0,0,176,177,5,112,0,0,177,178,
  	5,111,0,0,178,179,5,114,0,0,179,180,5,116,0,0,180,60,1,0,0,0,181,182,
  	5,101,0,0,182,183,5,108,0,0,183,184,5,115,0,0,184,185,5,101,0,0,185,62,
  	1,0,0,0,186,187,5,115,0,0,187,188,5,105,0,0,188,189,5,122,0,0,189,190,
  	5,101,0,0,190,191,5,111,0,0,191,192,5,102,0,0,192,64,1,0,0,0,193,194,
  	5,123,0,0,194,66,1,0,0,0,195,196,5,125,0,0,196,68,1,0,0,0,197,198,5,91,
  	0,0,198,70,1,0,0,0,199,200,5,93,0,0,200,72,1,0,0,0,201,203,7,0,0,0,202,
  	201,1,0,0,0,203,204,1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,74,1,
  	0,0,0,206,208,7,0,0,0,207,206,1,0,0,0,208,209,1,0,0,0,209,207,1,0,0,0,
  	209,210,1,0,0,0,210,211,1,0,0,0,211,215,5,46,0,0,212,214,7,0,0,0,213,
  	212,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,76,1,
  	0,0,0,217,215,1,0,0,0,218,222,7,1,0,0,219,221,7,2,0,0,220,219,1,0,0,0,
  	221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,78,1,0,0,0,224,222,
  	1,0,0,0,225,227,7,3,0,0,226,225,1,0,0,0,227,228,1,0,0,0,228,226,1,0,0,
  	0,228,229,1,0,0,0,229,230,1,0,0,0,230,231,6,39,0,0,231,80,1,0,0,0,232,
  	233,5,47,0,0,233,234,5,47,0,0,234,238,1,0,0,0,235,237,9,0,0,0,236,235,
  	1,0,0,0,237,240,1,0,0,0,238,239,1,0,0,0,238,236,1,0,0,0,239,241,1,0,0,
  	0,240,238,1,0,0,0,241,242,5,10,0,0,242,243,1,0,0,0,243,244,6,40,0,0,244,
  	82,1,0,0,0,245,249,5,34,0,0,246,248,9,0,0,0,247,246,1,0,0,0,248,251,1,
  	0,0,0,249,250,1,0,0,0,249,247,1,0,0,0,250,252,1,0,0,0,251,249,1,0,0,0,
  	252,253,5,34,0,0,253,84,1,0,0,0,8,0,204,209,215,222,228,238,249,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  luciduslexerLexerStaticData = staticData.release();
}

}

LucidusLexer::LucidusLexer(CharStream *input) : Lexer(input) {
  LucidusLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *luciduslexerLexerStaticData->atn, luciduslexerLexerStaticData->decisionToDFA, luciduslexerLexerStaticData->sharedContextCache);
}

LucidusLexer::~LucidusLexer() {
  delete _interpreter;
}

std::string LucidusLexer::getGrammarFileName() const {
  return "LucidusLexer.g4";
}

const std::vector<std::string>& LucidusLexer::getRuleNames() const {
  return luciduslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LucidusLexer::getChannelNames() const {
  return luciduslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LucidusLexer::getModeNames() const {
  return luciduslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LucidusLexer::getVocabulary() const {
  return luciduslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LucidusLexer::getSerializedATN() const {
  return luciduslexerLexerStaticData->serializedATN;
}

const atn::ATN& LucidusLexer::getATN() const {
  return *luciduslexerLexerStaticData->atn;
}




void LucidusLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  luciduslexerLexerInitialize();
#else
  ::antlr4::internal::call_once(luciduslexerLexerOnceFlag, luciduslexerLexerInitialize);
#endif
}
