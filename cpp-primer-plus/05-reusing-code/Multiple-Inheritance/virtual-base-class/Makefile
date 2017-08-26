objects = workmi.o workermi.o

SingerWaiter : $(objects)
	gcc $(objects) -lstdc++ -o SingerWaiter

workmi.o : workmi.cpp workermi.h
	gcc -c workmi.cpp -lstdc++

workermi.o : workermi.cpp workermi.h
	gcc -c workermi.cpp -lstdc++ 

.PHONY : clean uninstall
clean :
	-rm *.o
uninstall :
	-rm SingerWaiter

# objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
# SingerWaiter : $(objects)
# 	gcc -o SingerWaiter $(objects) -lstdc++
# .PHONY : clean uninstall
# clean :
# 	-rm *.o
# uninstall :
# 	-rm SingerWaiter
