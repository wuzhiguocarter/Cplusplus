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
	Stock();
	Stock(const char* co, int n = 0, double pr = 0.0);
	~Stock();
//	void acquire(const char * co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(int num, double price);
	void show() const;	//this methord do not change 
	//object's data,so it should be declared const type
	const Stock & topval(const Stock &s) const;
};

const int STKS = 4;
//main function
int main()
{
	using std::cout;
	using std::ios_base;

	Stock stocks[STKS] = {
		Stock("NanoSmart", 20, 12.50),
		Stock("Boffo", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};

	cout.setf(ios_base::fixed);
//	cout.precison(2);
	cout.setf(ios_base::showpoint);

	cout << "Stock holdings:\n";
	int st;
	for(st = 0;st < STKS;st++)
		stocks[st].show();
	Stock top = stocks[0];
	for(st = 1;st < STKS;st++)
		top = top.topval(stocks[st]);
	cout << "\nMost Valuable holding:\n";
	top.show();

	return 0;

};

//default constructor
Stock::Stock()
{
	std::cout << "Default constructor called\n";
	std::strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

//non-default constructor
Stock::Stock(const char* co, int n, double pr){
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

//destructor
Stock::~Stock(){
	std::cout << "Bye," << company << std::endl;
}


//definition of class public membership funtion
/*void Stock::acquire(const char * co, int n, double pr){
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
}*/

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

void Stock::show() const
{
	using std::cout;
	using std::endl;
	cout << "Company: "  << company << endl
		<< " Shares: " << shares << endl
		<< " Share Price: $" << share_val <<endl
		<< " Total Worth: $" << total_val << endl;
}
const Stock & Stock::topval(const Stock &s) const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
		return *this;
}