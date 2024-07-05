// #pragma once

// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <map>
// #include <memory>

// #include <llvm/IR/LLVMContext.h>
// #include <llvm/IR/Module.h>
// #include <llvm/IR/IRBuilder.h>
// #include <llvm/IR/Verifier.h>
// #include <llvm/IR/Instructions.h>
// #include <llvm/IR/Argument.h>
// #include <llvm/Support/raw_ostream.h>
// #include <llvm/Bitcode/LLVMBitCodes.h>
// #include "llvm/IR/DataLayout.h"
// #include <llvm/IR/Value.h>

// #include "LLVMController.h"

// namespace types {
// // int, float, bool, char, void, pointers
// class Type {
//     public:
//     llvm::Type* type;
//     std::string name;
// };

// class ptr_Type : public Type {
//     public:
//     Type* containedType;
// };

// class Value {
//     public:
//     llvm::Value* value;
//     Type* type;
// };

// class PtrValue : public Value {
//     public:
//     Type* containedType;
// };

// }

// types::Value wrapType(llvm::Value* value, llvm::Type* type);
// types::PtrValue wrapType(llvm::Value* value, llvm::Type* type, llvm::Type* containedType);
// types::Value wrapType(llvm::Value* value);