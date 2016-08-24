mkdir -p build/win
cd build/win
cmake -G "MSYS Makefiles" ../..
make 
./bank_test.exe
