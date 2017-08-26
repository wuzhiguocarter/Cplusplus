obj = worktest.o worker0.o

worktest : $(obj)
	g++ -o worktest $(obj)

worktest.o : worktest.cpp worker0.h
	g++ -c worktest.cpp

worker0.o : worker0.cpp worker0.h
	g++ -c worker0.cpp

.PHONY : clean
clean :
	-rm -f $(obj)