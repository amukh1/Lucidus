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

// antlr files in ./antlr
#include "antlr4-runtime.h"
#include "LucidusLexer.h"
#include "LucidusParser.h"
// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"
#include "MyVisitor.h"



int main(int argc, char **argv) {
    // antlr
    std::shared_ptr<LLVMController> Controller = std::make_shared<LLVMController>();
    // Controller->module->getOrInsertFunction("printf", llvm::FunctionType::get(Controller->builder->getInt32Ty(), Controller->builder->getInt8PtrTy(), true));


    std::ifstream stream;
    stream.open(argv[1]);
    antlr4::ANTLRInputStream inputStream(stream);
    LucidusLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    LucidusParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.program();
    // std::cout << tree->toStringTree(&parser) << std::endl;

    // visitor
    MyVisitor visitor;
    visitor.controller = Controller;
    visitor.visit(tree);

    //  llvm::outs() << *Controller->module << '\n';
    std::error_code ec;
    llvm::raw_fd_ostream os(argv[2], ec);
    Controller->module->print(os, nullptr);

    return 0;
}