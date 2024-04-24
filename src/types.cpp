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
#include "types.h"


types::Value wrapType(llvm::Value* value, llvm::Type* type) {
    types::Value v;
    v.value = value;
    v.type = type;
    return v;
}

types::Value wrapType(llvm::Value* value) {
    types::Value v;
    v.value = value;
    v.type = value->getType();
    return v;
}

types::PtrValue wrapType(llvm::Value* value, llvm::Type* type, llvm::Type* containedType) {
    types::PtrValue v;
    v.value = value;
    v.type = type;
    v.containedType = containedType;
    return v;
}

// unwrap
llvm::Value* unwrap(types::Value v) {
    return v.value;
}

llvm::Value* unwrap(types::PtrValue v) {
    return v.value;
}

// unwrap but return type (contained for pointers)
llvm::Type* unwrapType(types::Value v) {
    return v.type;
}

llvm::Type* unwrapType(types::PtrValue v) {
    return v.type;
}