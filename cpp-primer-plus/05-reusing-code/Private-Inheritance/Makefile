obj = main.o student.o

test : $(obj)
	g++ -o test $(obj)

main.o : main.cpp student.h
	g++ -c main.cpp

student.o : student.cpp student.h
	g++ -c student.cpp

.PHONY : clean
clean :
	-rm $(obj)

# obj = main.o student.o

# test : $(obj)
# 	gcc -o test $(obj) -lstdc++

# main.o : main.cpp student.h
# 	gcc -c main.cpp 

# student.o : student.cpp student.h
# 	gcc -c student.cpp 

# .PHONY : clean
# clean :
# 	-rm $(obj)