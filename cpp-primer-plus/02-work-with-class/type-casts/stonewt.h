// stonewt.h -- definition for the Stonewt class
#ifndef _STONEWT_H_
#define _STONEWT_H_

class Stonewt
{
private:
	enum {Lbs_per_stn = 14}; // pounds per stone
	//static const int Lbs_per_stn = 14;
	int stone; // whole stones
	double pds_left; // fractional pounds
	double pounds; // entire weight in pounds
public:
	Stonewt(double lbs); // constructor for double pounds;double-to-Stonewt conversion
	//Stonewt(double lbs); implicit conversions allowed
	//explicit Stonewt(double lbs); // no implicit conversions allowed
	//Stonewt(int stn, double lbs = 0); // int-to-Stonewt conversion
	//将内置类型转换为类类型
	Stonewt(int stn, double lbs); // constructor for stone, lbs;not a conversion function
	Stonewt(); // default constructor
	~Stonewt();
	void show_lbs() const; // show weight in pounds format
	void show_stn() const; // show weight in stone format
	// conversion functions; 类型转换函数，将类类型转换为内置类型
	operator int() const;
	operator double() const;
};

#endif

/*
Stonewt myCat; // create a Stonewt object
myCat = 19.6; //  implicit conversions allowed;not valid if Stonewt(double) is declared as explicit
mycat = Stonewt(19.6); // ok, an explicit conversion
mycat = (Stonewt) 19.6; // ok, old form for explicit typecast

double p_wt = poppins; // implicit conversion
*/