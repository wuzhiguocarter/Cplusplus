#include <cmath>
#include <iostream>
#include "myvector.h"

using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR{
	const double Rad_to_deg = 57.2957795130823;
	//member fuctions
	//private method
	void Vector::set_mag(){
		mag = sqrt( x*x + y*y);
	}
	void Vector::set_ang(){
		if (x == 0.0 && y == 0.0)
		{
			ang = 0.0;
		}
		else
			ang = atan2(y,x);
	}
	void Vector::set_x(){
		x = mag * cos(ang);
	}
	void Vector::set_y(){
		y = mag * sin(ang);
	}

	Vector::Vector(){
		x = y = mag = ang = 0.0;
		mode = 'r';
	}

	Vector::Vector(double n1, double n2, char form){
		mode = form;
		if ('r' == form)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if ('p' == form)
			{
				mag = n1;
				ang = n2;
				set_x();
				set_y();
			}
		else
		{
			cout << "Error:there is no mode " << form << "\n";
			cout << "vector set to 0 and mode to 'r'\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	void Vector::set(double n1, double n2, char form){
		mode = form;
		if ('r' == form)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if ('p' == form)
			{
				mag = n1;
				ang = n2;
				set_x();
				set_y();
			}
		else
		{
			cout << "Error:there is no mode " << form << "\n";
			cout << "vector set to 0 and mode to 'r'\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector(){

	}

	void Vector::polar_mode(){
		mode = 'p';
	}
	void Vector::rect_mode(){
		mode = 'r';
	}

	Vector Vector::operator+ (const Vector & b) const{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator- (const Vector & b) const{
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator- () const{
		return Vector(-x, -y);
	}
	Vector Vector::operator* (double n) const{
		return Vector(n * x, n * y);
	}

	//friend methods
	Vector operator* (double n, const Vector & a){
		return a * n;
	}

	std::ostream & operator<< (std::ostream & os, const Vector & v){
		if('r' == v.mode)
		{
			os << "(x,y) = (" << v.x << ", " << v.y << ")\n";
		}
		else if ('p' == v.mode)
		{
			os << "(m,a) = (" << v.mag << ", " 
				<< v.ang * Rad_to_deg << "deg)\n";
		}
		else
			os << "Vector object mode is invalid\n";

		return os;
	}

}