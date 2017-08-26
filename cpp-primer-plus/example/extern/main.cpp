#include <iostream>
#include "add.h"
#include "sub.h"

int main(int argc, char const *argv[])
{
	double sum = 0;
	double sub = 0;

	extern const double PI;
	/*
		when PI was defined in add.h without "extern", there's no need to
	declare "extern const double PI"; when PI was defined in add.c with
	 "extern", we must declare "extern const double PI" before we use PI 
	 in *.c *.cpp source file.
	*/

	sum = add(sum, PI);
	sub = subPI(sub);

	std::cout << "sum is :" << sum << "\n";
	std::cout << "sub is :" << sub << "\n";

	return 0;
}