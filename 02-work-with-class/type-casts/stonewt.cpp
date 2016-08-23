// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"
// construct Stonewt object from double value
//只有接受一个参数的构造函数才能作为类型转换函数
//myCat = 19.6; // use Stonewt(double) to convert 19.6 to Stonewt
//Stonewt blossem(132.5); // weight = 132.5 pounds
Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn; // integer division
	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
// construct Stonewt object from stone, double values
//Stonewt buttercup(10, 2); // weight = 10 stone, 2 pounds
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn +lbs;
}
//Stonewt bubbles; // weight = default value
Stonewt::Stonewt() // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() // destructor
{

}

// show weight in stones
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}
// show weight in pounds
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}
// conversion functions
Stonewt::operator int() const
{
	return int (pounds + 0.5);
}
Stonewt::operator double()const
{
	return pounds;
}