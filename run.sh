# g++ -std=c++17 *.cpp -o index -I/usr/local/include/antlr4-runtime -L. -lantlr4-runtime
g++ *.cpp -o index -I/usr/local/include/antlr4-runtime -std=c++17 -L. -lantlr4-runtime -pthread -g -I src/ `llvm-config --cflags --libs`
