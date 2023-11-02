wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh all

wget https://www.antlr.org/download/antlr4-cpp-runtime-4.13.1-source.zip
unzip antlr4-cpp-runtime-4.13.1-source.zip
cd antlr4-cpp-runtime-4.13.1
mkdir build && cd build
cmake ..
make
// now made, put it somewhere s.t. it can be included easily
sudo cp -r ../runtime/src /usr/local/include/antlr4-runtime
sudo cp libantlr4-runtime.a /usr/local/lib
cd ../..

# g++ -std=c++17 *.cpp -o index -I/usr/local/include/antlr4-runtime -L. -lantlr4-runtime
g++ *.cpp -o lucy -I/usr/local/include/antlr4-runtime -std=c++17 -L./antlr4-cpp-runtime-4.13.1/runtime/src -lantlr4-runtime -pthread -g -I src/ `llvm-config --cflags --libs`

