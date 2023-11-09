# g++ -std=c++17 *.cpp -o index -I/usr/local/include/antlr4-runtime -L. -lantlr4-runtime
g++ src/*.cpp -o lucy -I/usr/local/include/antlr4-runtime -std=c++17 -lantlr4-runtime -pthread -g  `llvm-config --cflags --libs`
sudo mv lucy /usr/local/bin
