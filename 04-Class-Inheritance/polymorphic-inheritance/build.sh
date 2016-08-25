mkdir -p build/win
cd build/win
cmake -G "MSYS Makefiles" ../..
make 
./brass_test.exe
