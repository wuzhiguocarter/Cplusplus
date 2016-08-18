#include "mytime.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int _hours, int _minutes){
	hours = _hours;
	minutes = _minutes;
}

void Time::Addmin(int m){
	minutes += m;
	hours += minutes / 60;
	minutes = minutes % 60;
}

void Time::AddHr(int h){
	hours += h;
}

void Time::Reset(int _hours,int _minutes){
	hours = _hours;
	minutes = _minutes;
}

Time Time::operator+(const Time & t) const{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const{
	Time dif;
	int tot1, tot2;
	tot2 = this->minutes + 60 * this->hours;
	tot1 = t.minutes + 60 * t.hours;
	dif.minutes = (tot2 - tot1) % 60;
	dif.hours = (tot2 - tot1) / 60;
	return dif;
}

Time Time::operator*(double n) const{
	Time result;
	int tot;
	tot = n * this->minutes + n * 60 * this->hours;
	result.minutes = tot % 60;
	result.hours = tot / 60;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t){
	os << t.hours << " hours, " << t.minutes << " minutes ";
	return os;
}