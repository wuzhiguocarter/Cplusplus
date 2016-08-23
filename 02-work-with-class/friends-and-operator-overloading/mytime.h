#ifndef _MYTIME_H_
#define _MYTIME_H_
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int _hours, int _minutes = 0);
//	~Time();
	void Addmin(int m);
	void AddHr(int h);
	void Reset(int _hours = 0,int _minutes = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double n) const;                  //member version
	friend Time operator*(double m, const Time & t)  //non-member version
		{ return t*m; } //inline definition
	friend std::ostream & operator<<(std::ostream & os, const Time & t);
	
};


#endif