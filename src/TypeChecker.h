#pragma once

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
#include <llvm/IR/Argument.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Bitcode/LLVMBitCodes.h>
#include "llvm/IR/DataLayout.h"
#include <llvm/IR/Value.h>

#include "LLVMController.h"
#include "Codegen.h"

struct PtrType;

struct Type {
    llvm::Type* type;
    std::string name;
    bool ptr;

    // pointerTo function
    PtrType* pointerTo();
};

struct PtrType : Type {
    Type* containedType;
    void selfPoint();
};



namespace TypeChecker {

    // takes a expr context (of a literal) and returns the llvm type
    Type* typeLit(LucidusParser::ExprContext* ctx, std::shared_ptr<LLVMController> controller, Codegen* visitor);

    // parses a type given a type context and returns type
    Type* parseType(LucidusParser::TypeContext* ctx, std::shared_ptr<LLVMController> controller, Codegen* visitor);



}