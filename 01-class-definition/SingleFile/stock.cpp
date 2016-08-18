//stock.cpp
#include <iostream>
#include <cstring>

//class declaration
class Stock{
private:
	char   company[30];//name of company 
	int    shares;     //number of stocks
	double share_val;  //price of stocks
	double total_val;  //total prices of stocks
	void set_tot() {total_val = shares * share_val;}//to be transformed inline function

public:
	void acquire(const char * co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(int num, double price);
	void show();
};

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

//definition of class public membership funtion
void Stock::acquire(const char * co, int n, double pr){
	std::strncpy(company, co, 29);
	company[29] = '\0';
	if (n < 0 )
	{
		std::cerr << "Number of shares can't be negative."
			<< company << "shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	    share_val = pr;
	    set_tot();
	}
}

void Stock::buy(int num, double price){
	if (num < 0)
	{
		std::cerr << "Number of shares can't be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price){
	using std::cerr;
	if (num < 0)
	{
		std::cerr << "Number of shares can't be negative."
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cerr << " You can't sell more than you have!"
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(int num, double price){
	share_val = price;
	set_tot();
}

void Stock::show(){
	using std::cout;
	using std::endl;
	cout << "Company: "  << company << endl
		<< " Shares: " << shares << endl
		<< " Share Price: $" << share_val <<endl
		<< " Total Worth: $" << endl;
}