#include <iostream>
#include <cstring>
#include "stock.h"

//main function
int main()
{
	using std::cout;
	using std::ios_base;

	Stock stock1;
	stock1.acquire("NanoSmart", 20, 12.50);
	cout.setf(ios_base::fixed);
//	cout.precison(2);
	cout.setf(ios_base::showpoint);

	stock1.show();
	stock1.buy(15, 18.25);
	stock1.sell(400, 20.00);
	stock1.show();
};