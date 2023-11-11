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
#include "MyVisitor.h"
#include "compile.h"

void compile(std::shared_ptr<LLVMController> Controller, std::ifstream& program, MyVisitor& visitor) {
    // parse with antlr
    antlr4::ANTLRInputStream inputStream(program);
    LucidusLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    LucidusParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.program();

    visitor.visit(tree);
}

int main(int argc, char **argv) {
    // antlr
    std::shared_ptr<LLVMController> Controller = std::make_shared<LLVMController>();
    // Controller->module->getOrInsertFunction("printf", llvm::FunctionType::get(Controller->builder->getInt32Ty(), Controller->builder->getInt8PtrTy(), true));

    MyVisitor visitor;
    visitor.controller = Controller;

    /*
    Handle flags:
    -o <output file>
    -c <compile only>
    -S <assembly output>
    -emit-llvm <llvm output>
    -O <optimization level>
    else: input files
    */

    // parse flags & compile files
    std::vector<std::string> inputFiles;
    std::string outputFile = "a.out";
    bool compileOnly = false;
    bool assemblyOutput = false;
    bool llvmOutput = false;
    int optimizationLevel = 0;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "-o" && i + 1 < argc) {
            outputFile = argv[++i];
        } else if (arg == "-c") {
            compileOnly = true;
        } else if (arg == "-S") {
            assemblyOutput = true;
        } else if (arg == "-emit-llvm") {
            llvmOutput = true;
        } else if (arg == "-O" && i + 1 < argc) {
            optimizationLevel = std::stoi(argv[++i]);
        } else {
            // Handle input files
            inputFiles.push_back(arg);
        }
    }

    // compile files
    for (std::string file : inputFiles) {
        std::ifstream stream;
        stream.open(file);
        compile(Controller, stream, visitor);
    }

    // std::ifstream stream;
    // stream.open(argv[1]);
    // compile(Controller, stream);

    //  llvm::outs() << *Controller->module << '\n';
    std::error_code ec;
    llvm::raw_fd_ostream os(outputFile, ec);
    Controller->module->print(os, nullptr);

    return 0;
}