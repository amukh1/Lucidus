
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
      "ID", "WS", "STRING"
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
      "ID", "WS", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,158,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,
  	8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,3,24,129,8,24,1,24,
  	4,24,132,8,24,11,24,12,24,133,1,25,1,25,5,25,138,8,25,10,25,12,25,141,
  	9,25,1,26,4,26,144,8,26,11,26,12,26,145,1,26,1,26,1,27,1,27,5,27,152,
  	8,27,10,27,12,27,155,9,27,1,27,1,27,1,153,0,28,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,1,0,4,1,0,
  	48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,
  	13,32,32,162,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,1,57,1,0,0,0,3,60,1,0,0,0,5,63,1,0,0,0,7,65,
  	1,0,0,0,9,67,1,0,0,0,11,69,1,0,0,0,13,71,1,0,0,0,15,73,1,0,0,0,17,75,
  	1,0,0,0,19,77,1,0,0,0,21,79,1,0,0,0,23,81,1,0,0,0,25,83,1,0,0,0,27,87,
  	1,0,0,0,29,94,1,0,0,0,31,98,1,0,0,0,33,101,1,0,0,0,35,104,1,0,0,0,37,
  	108,1,0,0,0,39,110,1,0,0,0,41,117,1,0,0,0,43,119,1,0,0,0,45,123,1,0,0,
  	0,47,125,1,0,0,0,49,128,1,0,0,0,51,135,1,0,0,0,53,143,1,0,0,0,55,149,
  	1,0,0,0,57,58,5,38,0,0,58,59,5,38,0,0,59,2,1,0,0,0,60,61,5,124,0,0,61,
  	62,5,124,0,0,62,4,1,0,0,0,63,64,5,33,0,0,64,6,1,0,0,0,65,66,5,61,0,0,
  	66,8,1,0,0,0,67,68,5,43,0,0,68,10,1,0,0,0,69,70,5,45,0,0,70,12,1,0,0,
  	0,71,72,5,42,0,0,72,14,1,0,0,0,73,74,5,47,0,0,74,16,1,0,0,0,75,76,5,40,
  	0,0,76,18,1,0,0,0,77,78,5,41,0,0,78,20,1,0,0,0,79,80,5,44,0,0,80,22,1,
  	0,0,0,81,82,5,59,0,0,82,24,1,0,0,0,83,84,5,100,0,0,84,85,5,101,0,0,85,
  	86,5,102,0,0,86,26,1,0,0,0,87,88,5,115,0,0,88,89,5,116,0,0,89,90,5,114,
  	0,0,90,91,5,117,0,0,91,92,5,99,0,0,92,93,5,116,0,0,93,28,1,0,0,0,94,95,
  	5,100,0,0,95,96,5,101,0,0,96,97,5,99,0,0,97,30,1,0,0,0,98,99,5,45,0,0,
  	99,100,5,62,0,0,100,32,1,0,0,0,101,102,5,58,0,0,102,103,5,61,0,0,103,
  	34,1,0,0,0,104,105,5,112,0,0,105,106,5,116,0,0,106,107,5,114,0,0,107,
  	36,1,0,0,0,108,109,5,58,0,0,109,38,1,0,0,0,110,111,5,114,0,0,111,112,
  	5,101,0,0,112,113,5,116,0,0,113,114,5,117,0,0,114,115,5,114,0,0,115,116,
  	5,110,0,0,116,40,1,0,0,0,117,118,5,46,0,0,118,42,1,0,0,0,119,120,5,46,
  	0,0,120,121,5,46,0,0,121,122,5,46,0,0,122,44,1,0,0,0,123,124,5,123,0,
  	0,124,46,1,0,0,0,125,126,5,125,0,0,126,48,1,0,0,0,127,129,3,11,5,0,128,
  	127,1,0,0,0,128,129,1,0,0,0,129,131,1,0,0,0,130,132,7,0,0,0,131,130,1,
  	0,0,0,132,133,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,50,1,0,0,0,
  	135,139,7,1,0,0,136,138,7,2,0,0,137,136,1,0,0,0,138,141,1,0,0,0,139,137,
  	1,0,0,0,139,140,1,0,0,0,140,52,1,0,0,0,141,139,1,0,0,0,142,144,7,3,0,
  	0,143,142,1,0,0,0,144,145,1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,
  	147,1,0,0,0,147,148,6,26,0,0,148,54,1,0,0,0,149,153,5,34,0,0,150,152,
  	9,0,0,0,151,150,1,0,0,0,152,155,1,0,0,0,153,154,1,0,0,0,153,151,1,0,0,
  	0,154,156,1,0,0,0,155,153,1,0,0,0,156,157,5,34,0,0,157,56,1,0,0,0,6,0,
  	128,133,139,145,153,1,6,0,0
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
