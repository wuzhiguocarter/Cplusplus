#include <iostream>
#include "mytime.h"

int main(int argc, char const *argv[])
{
	using std::cout;
	using std::endl;
	Time aida(3,35);
	Time tosca(2,48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << ";\n" << tosca << endl;

	temp = aida + tosca;
	cout << "\nAida + Tosca:\n" << temp << endl;

	temp = aida * 1.17;
	cout << "\nAida * 1.17:\n" << temp << endl;

	cout << "\n10 * Tosca:\n" << 10 * tosca << endl;


	return 0;
}