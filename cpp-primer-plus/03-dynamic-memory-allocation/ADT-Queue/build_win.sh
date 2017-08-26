mkdir -p build/win
cd build/win
#cmake ../..
cmake -G "MSYS Makefiles" ../..
make 
./bank_test.exe