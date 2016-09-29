# error
hello : main.o
	gcc main.o -lstdc++ -o hello 
main.o : main.cpp
	gcc -c main.cpp -lstdc++
.PYHONY : clean
clean :
	-rm *.o	

# hello : main.o
# 	g++ -o hello main.o
# main.o : main.cpp
# 	g++ -c main.cpp
# .PYHONY : clean
# clean :
# 	-rm *.o	