#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <memory>

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/Instructions.h>
#include <llvm/Support/raw_ostream.h>

#include "LLVMController.h"
#include "errorHandler.h"

// antlr files in ./antlr
#include "antlr4-runtime.h"
#include "LucidusLexer.h"
#include "LucidusParser.h"
// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"
#include "Codegen.h"

void compile(std::shared_ptr<LLVMController> Controller, std::ifstream& program, Codegen& visitor);