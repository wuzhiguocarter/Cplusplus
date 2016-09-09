#ifndef _STOCK_H
#define _STOCK_H
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

#endif