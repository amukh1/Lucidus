#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <memory>

// antlr files in ./antlr
#include "antlr4-runtime.h"
#include "LucidusLexer.h"
#include "LucidusParser.h"
// listener and visitor
#include "LucidusParserVisitor.h"
#include "LucidusParserBaseVisitor.h"
#include "MyVisitor.h"



int main() {
    // antlr

    std::ifstream stream;
    stream.open("test.luc");
    antlr4::ANTLRInputStream inputStream(stream);
    LucidusLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    LucidusParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.program();
    // std::cout << tree->toStringTree(&parser) << std::endl;

    // visitor
    MyVisitor visitor;
    visitor.visit(tree);

    

    return 0;
}