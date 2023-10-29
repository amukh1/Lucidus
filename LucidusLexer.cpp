
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
      "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
      "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "DCOL", 
      "PTR", "COL", "RETURN", "DOT", "DOTS", "LCURLY", "RCURLY", "INT", 
      "FLOAT", "ID", "WS", "COMMENT", "STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,30,190,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,
  	5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,
  	1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,
  	3,24,133,8,24,1,24,4,24,136,8,24,11,24,12,24,137,1,25,3,25,141,8,25,1,
  	25,4,25,144,8,25,11,25,12,25,145,1,25,1,25,5,25,150,8,25,10,25,12,25,
  	153,9,25,1,26,1,26,5,26,157,8,26,10,26,12,26,160,9,26,1,27,4,27,163,8,
  	27,11,27,12,27,164,1,27,1,27,1,28,1,28,1,28,1,28,5,28,173,8,28,10,28,
  	12,28,176,9,28,1,28,1,28,1,28,1,28,1,29,1,29,5,29,184,8,29,10,29,12,29,
  	187,9,29,1,29,1,29,2,174,185,0,30,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,
  	41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,1,0,4,1,0,
  	48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,
  	13,32,32,198,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,1,61,1,0,0,0,3,64,
  	1,0,0,0,5,67,1,0,0,0,7,69,1,0,0,0,9,71,1,0,0,0,11,73,1,0,0,0,13,75,1,
  	0,0,0,15,77,1,0,0,0,17,79,1,0,0,0,19,81,1,0,0,0,21,83,1,0,0,0,23,85,1,
  	0,0,0,25,87,1,0,0,0,27,91,1,0,0,0,29,98,1,0,0,0,31,102,1,0,0,0,33,105,
  	1,0,0,0,35,108,1,0,0,0,37,112,1,0,0,0,39,114,1,0,0,0,41,121,1,0,0,0,43,
  	123,1,0,0,0,45,127,1,0,0,0,47,129,1,0,0,0,49,132,1,0,0,0,51,140,1,0,0,
  	0,53,154,1,0,0,0,55,162,1,0,0,0,57,168,1,0,0,0,59,181,1,0,0,0,61,62,5,
  	38,0,0,62,63,5,38,0,0,63,2,1,0,0,0,64,65,5,124,0,0,65,66,5,124,0,0,66,
  	4,1,0,0,0,67,68,5,33,0,0,68,6,1,0,0,0,69,70,5,61,0,0,70,8,1,0,0,0,71,
  	72,5,43,0,0,72,10,1,0,0,0,73,74,5,45,0,0,74,12,1,0,0,0,75,76,5,42,0,0,
  	76,14,1,0,0,0,77,78,5,47,0,0,78,16,1,0,0,0,79,80,5,40,0,0,80,18,1,0,0,
  	0,81,82,5,41,0,0,82,20,1,0,0,0,83,84,5,44,0,0,84,22,1,0,0,0,85,86,5,59,
  	0,0,86,24,1,0,0,0,87,88,5,100,0,0,88,89,5,101,0,0,89,90,5,102,0,0,90,
  	26,1,0,0,0,91,92,5,115,0,0,92,93,5,116,0,0,93,94,5,114,0,0,94,95,5,117,
  	0,0,95,96,5,99,0,0,96,97,5,116,0,0,97,28,1,0,0,0,98,99,5,100,0,0,99,100,
  	5,101,0,0,100,101,5,99,0,0,101,30,1,0,0,0,102,103,5,45,0,0,103,104,5,
  	62,0,0,104,32,1,0,0,0,105,106,5,58,0,0,106,107,5,61,0,0,107,34,1,0,0,
  	0,108,109,5,112,0,0,109,110,5,116,0,0,110,111,5,114,0,0,111,36,1,0,0,
  	0,112,113,5,58,0,0,113,38,1,0,0,0,114,115,5,114,0,0,115,116,5,101,0,0,
  	116,117,5,116,0,0,117,118,5,117,0,0,118,119,5,114,0,0,119,120,5,110,0,
  	0,120,40,1,0,0,0,121,122,5,46,0,0,122,42,1,0,0,0,123,124,5,46,0,0,124,
  	125,5,46,0,0,125,126,5,46,0,0,126,44,1,0,0,0,127,128,5,123,0,0,128,46,
  	1,0,0,0,129,130,5,125,0,0,130,48,1,0,0,0,131,133,3,11,5,0,132,131,1,0,
  	0,0,132,133,1,0,0,0,133,135,1,0,0,0,134,136,7,0,0,0,135,134,1,0,0,0,136,
  	137,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,50,1,0,0,0,139,141,3,
  	11,5,0,140,139,1,0,0,0,140,141,1,0,0,0,141,143,1,0,0,0,142,144,7,0,0,
  	0,143,142,1,0,0,0,144,145,1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,
  	147,1,0,0,0,147,151,5,46,0,0,148,150,7,0,0,0,149,148,1,0,0,0,150,153,
  	1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,52,1,0,0,0,153,151,1,0,0,
  	0,154,158,7,1,0,0,155,157,7,2,0,0,156,155,1,0,0,0,157,160,1,0,0,0,158,
  	156,1,0,0,0,158,159,1,0,0,0,159,54,1,0,0,0,160,158,1,0,0,0,161,163,7,
  	3,0,0,162,161,1,0,0,0,163,164,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,
  	165,166,1,0,0,0,166,167,6,27,0,0,167,56,1,0,0,0,168,169,5,47,0,0,169,
  	170,5,47,0,0,170,174,1,0,0,0,171,173,9,0,0,0,172,171,1,0,0,0,173,176,
  	1,0,0,0,174,175,1,0,0,0,174,172,1,0,0,0,175,177,1,0,0,0,176,174,1,0,0,
  	0,177,178,5,10,0,0,178,179,1,0,0,0,179,180,6,28,0,0,180,58,1,0,0,0,181,
  	185,5,34,0,0,182,184,9,0,0,0,183,182,1,0,0,0,184,187,1,0,0,0,185,186,
  	1,0,0,0,185,183,1,0,0,0,186,188,1,0,0,0,187,185,1,0,0,0,188,189,5,34,
  	0,0,189,60,1,0,0,0,10,0,132,137,140,145,151,158,164,174,185,1,6,0,0
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
