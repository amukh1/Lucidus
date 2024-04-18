#pragma once

#include <memory>

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Argument.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Bitcode/LLVMBitCodes.h>

#include "LLVMController.h"

// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"


class errorHandler {
    public:
    std::shared_ptr<LLVMController> llvmController;
    std::map<std::string,  llvm::StructType *> structs;

    // template <typename T>
    // void typeError(LucidusParser::TypeContext* expected, LucidusParser::TypeContext* returned, T parent);

    template <typename T>
    void typeError(LucidusParser::TypeContext* expected, LucidusParser::TypeContext* returned, T parent) {
    std::cout << "Type error at line " << expected->getStart()->getLine() << std::endl;
    std::cout << "Expected type: ";
    std::cout << expected->getText() << " got:" << returned->getText() << std::endl;
    // std::cout << "(" << getTypes(expected, this->llvmController, this->structs) << " vs " << getTypes(returned, this->llvmController, this->structs) << ")" << std::endl;

    // std::cout << parent->getText() << std::endl;
    // put pretty underlining and show types
    // int spaces = parent->getStart()->getCharPositionInLine();
    // for(int i = 0; i < spaces; i++) {
    //     std::cout << " ";
    // }
    // std::cout << "^";
    // for(int i = 0; i < parent->getText().length() - 1; i++) {
    //     std::cout << "~";
    // }
    // // cout type (llvm type)
    // std::cout << getTypes(expected, this->llvmController, this->structs);

    // // spaces until second type
    // int nonabs = expected->getText().length() - returned->getText().length();
    // for(int i = 0; i < std::abs(nonabs); i++) {
    //     std::cout << " ";
    // }
    // std::cout << "^";
    // for(int i = 0; i < parent->getText().length() - 1; i++) {
    //     std::cout << "~";
    // }
    // std::cout << getTypes(returned, this->llvmController, this->structs);
    

    // std::cout << std::endl;
    }
};