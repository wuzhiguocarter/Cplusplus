objects = main.o add.o sub.o

main : ${objects}
	g++ ${objects} -o main

main.o : main.cpp
	g++ -c main.cpp

add.o : add.cpp
	g++ -c add.cpp

sub.o : sub.cpp
	g++ -c sub.cpp

.PHONY : clean
clean :
	-rm *.o main