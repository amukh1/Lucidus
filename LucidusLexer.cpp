
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
      "PTR", "COL", "RETURN", "LABEL", "GOTO", "DOT", "DOTS", "LCURLY", 
      "RCURLY", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
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
  	4,0,32,205,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,
  	3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,21,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,
  	1,26,3,26,148,8,26,1,26,4,26,151,8,26,11,26,12,26,152,1,27,3,27,156,8,
  	27,1,27,4,27,159,8,27,11,27,12,27,160,1,27,1,27,5,27,165,8,27,10,27,12,
  	27,168,9,27,1,28,1,28,5,28,172,8,28,10,28,12,28,175,9,28,1,29,4,29,178,
  	8,29,11,29,12,29,179,1,29,1,29,1,30,1,30,1,30,1,30,5,30,188,8,30,10,30,
  	12,30,191,9,30,1,30,1,30,1,30,1,30,1,31,1,31,5,31,199,8,31,10,31,12,31,
  	202,9,31,1,31,1,31,2,189,200,0,32,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,
  	41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,
  	32,1,0,4,1,0,48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,
  	3,0,9,10,12,13,32,32,213,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,
  	0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,
  	19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,
  	0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,
  	0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,
  	51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,
  	0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,68,1,0,0,0,5,71,1,0,0,0,7,73,1,0,0,
  	0,9,75,1,0,0,0,11,77,1,0,0,0,13,79,1,0,0,0,15,81,1,0,0,0,17,83,1,0,0,
  	0,19,85,1,0,0,0,21,87,1,0,0,0,23,89,1,0,0,0,25,91,1,0,0,0,27,95,1,0,0,
  	0,29,102,1,0,0,0,31,106,1,0,0,0,33,109,1,0,0,0,35,112,1,0,0,0,37,116,
  	1,0,0,0,39,118,1,0,0,0,41,125,1,0,0,0,43,131,1,0,0,0,45,136,1,0,0,0,47,
  	138,1,0,0,0,49,142,1,0,0,0,51,144,1,0,0,0,53,147,1,0,0,0,55,155,1,0,0,
  	0,57,169,1,0,0,0,59,177,1,0,0,0,61,183,1,0,0,0,63,196,1,0,0,0,65,66,5,
  	38,0,0,66,67,5,38,0,0,67,2,1,0,0,0,68,69,5,124,0,0,69,70,5,124,0,0,70,
  	4,1,0,0,0,71,72,5,33,0,0,72,6,1,0,0,0,73,74,5,61,0,0,74,8,1,0,0,0,75,
  	76,5,43,0,0,76,10,1,0,0,0,77,78,5,45,0,0,78,12,1,0,0,0,79,80,5,42,0,0,
  	80,14,1,0,0,0,81,82,5,47,0,0,82,16,1,0,0,0,83,84,5,40,0,0,84,18,1,0,0,
  	0,85,86,5,41,0,0,86,20,1,0,0,0,87,88,5,44,0,0,88,22,1,0,0,0,89,90,5,59,
  	0,0,90,24,1,0,0,0,91,92,5,100,0,0,92,93,5,101,0,0,93,94,5,102,0,0,94,
  	26,1,0,0,0,95,96,5,115,0,0,96,97,5,116,0,0,97,98,5,114,0,0,98,99,5,117,
  	0,0,99,100,5,99,0,0,100,101,5,116,0,0,101,28,1,0,0,0,102,103,5,100,0,
  	0,103,104,5,101,0,0,104,105,5,99,0,0,105,30,1,0,0,0,106,107,5,45,0,0,
  	107,108,5,62,0,0,108,32,1,0,0,0,109,110,5,58,0,0,110,111,5,61,0,0,111,
  	34,1,0,0,0,112,113,5,112,0,0,113,114,5,116,0,0,114,115,5,114,0,0,115,
  	36,1,0,0,0,116,117,5,58,0,0,117,38,1,0,0,0,118,119,5,114,0,0,119,120,
  	5,101,0,0,120,121,5,116,0,0,121,122,5,117,0,0,122,123,5,114,0,0,123,124,
  	5,110,0,0,124,40,1,0,0,0,125,126,5,108,0,0,126,127,5,97,0,0,127,128,5,
  	98,0,0,128,129,5,101,0,0,129,130,5,108,0,0,130,42,1,0,0,0,131,132,5,103,
  	0,0,132,133,5,111,0,0,133,134,5,116,0,0,134,135,5,111,0,0,135,44,1,0,
  	0,0,136,137,5,46,0,0,137,46,1,0,0,0,138,139,5,46,0,0,139,140,5,46,0,0,
  	140,141,5,46,0,0,141,48,1,0,0,0,142,143,5,123,0,0,143,50,1,0,0,0,144,
  	145,5,125,0,0,145,52,1,0,0,0,146,148,3,11,5,0,147,146,1,0,0,0,147,148,
  	1,0,0,0,148,150,1,0,0,0,149,151,7,0,0,0,150,149,1,0,0,0,151,152,1,0,0,
  	0,152,150,1,0,0,0,152,153,1,0,0,0,153,54,1,0,0,0,154,156,3,11,5,0,155,
  	154,1,0,0,0,155,156,1,0,0,0,156,158,1,0,0,0,157,159,7,0,0,0,158,157,1,
  	0,0,0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,162,1,0,0,0,
  	162,166,5,46,0,0,163,165,7,0,0,0,164,163,1,0,0,0,165,168,1,0,0,0,166,
  	164,1,0,0,0,166,167,1,0,0,0,167,56,1,0,0,0,168,166,1,0,0,0,169,173,7,
  	1,0,0,170,172,7,2,0,0,171,170,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,
  	173,174,1,0,0,0,174,58,1,0,0,0,175,173,1,0,0,0,176,178,7,3,0,0,177,176,
  	1,0,0,0,178,179,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,181,1,0,0,
  	0,181,182,6,29,0,0,182,60,1,0,0,0,183,184,5,47,0,0,184,185,5,47,0,0,185,
  	189,1,0,0,0,186,188,9,0,0,0,187,186,1,0,0,0,188,191,1,0,0,0,189,190,1,
  	0,0,0,189,187,1,0,0,0,190,192,1,0,0,0,191,189,1,0,0,0,192,193,5,10,0,
  	0,193,194,1,0,0,0,194,195,6,30,0,0,195,62,1,0,0,0,196,200,5,34,0,0,197,
  	199,9,0,0,0,198,197,1,0,0,0,199,202,1,0,0,0,200,201,1,0,0,0,200,198,1,
  	0,0,0,201,203,1,0,0,0,202,200,1,0,0,0,203,204,5,34,0,0,204,64,1,0,0,0,
  	10,0,147,152,155,160,166,173,179,189,200,1,6,0,0
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
