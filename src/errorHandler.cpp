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

#include "errorHandler.h"

void errorHandler::typeError(LucidusParser::TypeContext* ctx1, LucidusParser::TypeContext* ctx2) {
    std::cout << "<!!Error!!> Type error at line " << ctx1->getStart()->getLine() << std::endl;
    std::cout << "> " << ctx1->getText() << "&&" << ctx2->getText() << std::endl;

    std::cout << std::endl;
    exit(1);
}