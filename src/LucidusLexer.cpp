
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
      "DOTS", "IF", "IMPRT", "ELSE", "LCURLY", "RCURLY", "LBRACK", "RBRACK", 
      "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
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
      "'.'", "'...'", "'if'", "'import'", "'else'", "'{'", "'}'", "'['", 
      "']'"
    },
    std::vector<std::string>{
      "", "AND", "OR", "NOT", "EQ", "NEQ", "PLUS", "SUB", "STAR", "DIV", 
      "MOD", "OPAREN", "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", 
      "ARROW", "GTR", "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", 
      "DOT", "DOTS", "IF", "IMPRT", "ELSE", "LCURLY", "RCURLY", "LBRACK", 
      "RBRACK", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,41,251,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,1,0,1,0,1,0,1,
  	1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,
  	1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,
  	18,1,18,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,
  	25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,
  	29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,32,1,32,1,
  	33,1,33,1,34,1,34,1,35,3,35,194,8,35,1,35,4,35,197,8,35,11,35,12,35,198,
  	1,36,3,36,202,8,36,1,36,4,36,205,8,36,11,36,12,36,206,1,36,1,36,5,36,
  	211,8,36,10,36,12,36,214,9,36,1,37,1,37,5,37,218,8,37,10,37,12,37,221,
  	9,37,1,38,4,38,224,8,38,11,38,12,38,225,1,38,1,38,1,39,1,39,1,39,1,39,
  	5,39,234,8,39,10,39,12,39,237,9,39,1,39,1,39,1,39,1,39,1,40,1,40,5,40,
  	245,8,40,10,40,12,40,248,9,40,1,40,1,40,2,235,246,0,41,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,
  	17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,
  	57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,
  	40,81,41,1,0,4,1,0,48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,
  	97,122,3,0,9,10,12,13,32,32,259,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,
  	0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,
  	0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,
  	1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,
  	0,0,1,83,1,0,0,0,3,86,1,0,0,0,5,89,1,0,0,0,7,91,1,0,0,0,9,93,1,0,0,0,
  	11,96,1,0,0,0,13,98,1,0,0,0,15,100,1,0,0,0,17,102,1,0,0,0,19,104,1,0,
  	0,0,21,106,1,0,0,0,23,108,1,0,0,0,25,110,1,0,0,0,27,112,1,0,0,0,29,114,
  	1,0,0,0,31,118,1,0,0,0,33,125,1,0,0,0,35,129,1,0,0,0,37,132,1,0,0,0,39,
  	134,1,0,0,0,41,136,1,0,0,0,43,139,1,0,0,0,45,143,1,0,0,0,47,145,1,0,0,
  	0,49,152,1,0,0,0,51,158,1,0,0,0,53,163,1,0,0,0,55,165,1,0,0,0,57,169,
  	1,0,0,0,59,172,1,0,0,0,61,179,1,0,0,0,63,184,1,0,0,0,65,186,1,0,0,0,67,
  	188,1,0,0,0,69,190,1,0,0,0,71,193,1,0,0,0,73,201,1,0,0,0,75,215,1,0,0,
  	0,77,223,1,0,0,0,79,229,1,0,0,0,81,242,1,0,0,0,83,84,5,38,0,0,84,85,5,
  	38,0,0,85,2,1,0,0,0,86,87,5,124,0,0,87,88,5,124,0,0,88,4,1,0,0,0,89,90,
  	5,33,0,0,90,6,1,0,0,0,91,92,5,61,0,0,92,8,1,0,0,0,93,94,5,33,0,0,94,95,
  	5,61,0,0,95,10,1,0,0,0,96,97,5,43,0,0,97,12,1,0,0,0,98,99,5,45,0,0,99,
  	14,1,0,0,0,100,101,5,42,0,0,101,16,1,0,0,0,102,103,5,47,0,0,103,18,1,
  	0,0,0,104,105,5,37,0,0,105,20,1,0,0,0,106,107,5,40,0,0,107,22,1,0,0,0,
  	108,109,5,41,0,0,109,24,1,0,0,0,110,111,5,44,0,0,111,26,1,0,0,0,112,113,
  	5,59,0,0,113,28,1,0,0,0,114,115,5,100,0,0,115,116,5,101,0,0,116,117,5,
  	102,0,0,117,30,1,0,0,0,118,119,5,115,0,0,119,120,5,116,0,0,120,121,5,
  	114,0,0,121,122,5,117,0,0,122,123,5,99,0,0,123,124,5,116,0,0,124,32,1,
  	0,0,0,125,126,5,100,0,0,126,127,5,101,0,0,127,128,5,99,0,0,128,34,1,0,
  	0,0,129,130,5,45,0,0,130,131,5,62,0,0,131,36,1,0,0,0,132,133,5,62,0,0,
  	133,38,1,0,0,0,134,135,5,60,0,0,135,40,1,0,0,0,136,137,5,58,0,0,137,138,
  	5,61,0,0,138,42,1,0,0,0,139,140,5,112,0,0,140,141,5,116,0,0,141,142,5,
  	114,0,0,142,44,1,0,0,0,143,144,5,58,0,0,144,46,1,0,0,0,145,146,5,114,
  	0,0,146,147,5,101,0,0,147,148,5,116,0,0,148,149,5,117,0,0,149,150,5,114,
  	0,0,150,151,5,110,0,0,151,48,1,0,0,0,152,153,5,108,0,0,153,154,5,97,0,
  	0,154,155,5,98,0,0,155,156,5,101,0,0,156,157,5,108,0,0,157,50,1,0,0,0,
  	158,159,5,103,0,0,159,160,5,111,0,0,160,161,5,116,0,0,161,162,5,111,0,
  	0,162,52,1,0,0,0,163,164,5,46,0,0,164,54,1,0,0,0,165,166,5,46,0,0,166,
  	167,5,46,0,0,167,168,5,46,0,0,168,56,1,0,0,0,169,170,5,105,0,0,170,171,
  	5,102,0,0,171,58,1,0,0,0,172,173,5,105,0,0,173,174,5,109,0,0,174,175,
  	5,112,0,0,175,176,5,111,0,0,176,177,5,114,0,0,177,178,5,116,0,0,178,60,
  	1,0,0,0,179,180,5,101,0,0,180,181,5,108,0,0,181,182,5,115,0,0,182,183,
  	5,101,0,0,183,62,1,0,0,0,184,185,5,123,0,0,185,64,1,0,0,0,186,187,5,125,
  	0,0,187,66,1,0,0,0,188,189,5,91,0,0,189,68,1,0,0,0,190,191,5,93,0,0,191,
  	70,1,0,0,0,192,194,3,13,6,0,193,192,1,0,0,0,193,194,1,0,0,0,194,196,1,
  	0,0,0,195,197,7,0,0,0,196,195,1,0,0,0,197,198,1,0,0,0,198,196,1,0,0,0,
  	198,199,1,0,0,0,199,72,1,0,0,0,200,202,3,13,6,0,201,200,1,0,0,0,201,202,
  	1,0,0,0,202,204,1,0,0,0,203,205,7,0,0,0,204,203,1,0,0,0,205,206,1,0,0,
  	0,206,204,1,0,0,0,206,207,1,0,0,0,207,208,1,0,0,0,208,212,5,46,0,0,209,
  	211,7,0,0,0,210,209,1,0,0,0,211,214,1,0,0,0,212,210,1,0,0,0,212,213,1,
  	0,0,0,213,74,1,0,0,0,214,212,1,0,0,0,215,219,7,1,0,0,216,218,7,2,0,0,
  	217,216,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,76,
  	1,0,0,0,221,219,1,0,0,0,222,224,7,3,0,0,223,222,1,0,0,0,224,225,1,0,0,
  	0,225,223,1,0,0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,6,38,0,0,228,
  	78,1,0,0,0,229,230,5,47,0,0,230,231,5,47,0,0,231,235,1,0,0,0,232,234,
  	9,0,0,0,233,232,1,0,0,0,234,237,1,0,0,0,235,236,1,0,0,0,235,233,1,0,0,
  	0,236,238,1,0,0,0,237,235,1,0,0,0,238,239,5,10,0,0,239,240,1,0,0,0,240,
  	241,6,39,0,0,241,80,1,0,0,0,242,246,5,34,0,0,243,245,9,0,0,0,244,243,
  	1,0,0,0,245,248,1,0,0,0,246,247,1,0,0,0,246,244,1,0,0,0,247,249,1,0,0,
  	0,248,246,1,0,0,0,249,250,5,34,0,0,250,82,1,0,0,0,10,0,193,198,201,206,
  	212,219,225,235,246,1,6,0,0
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
