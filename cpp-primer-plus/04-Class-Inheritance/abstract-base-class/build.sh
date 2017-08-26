mkdir -p build/win
cd build/win
cmake -G "MSYS Makefiles" ../..
make 
./acctabc_test.exe
