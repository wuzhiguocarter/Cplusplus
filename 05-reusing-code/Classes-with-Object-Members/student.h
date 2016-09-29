#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <valarray>
#include <iostream>

using namespace std;

// class containing object "has-a"
class Student
{
private:
	typedef valarray<double> ArrayDb;
	string name;
	ArrayDb scores; 

	// private method
	ostream & arr_out(ostream & os) const;


public:
	Student():name("Null Student"),scores(){}
	explicit Student(const string & s):name(s),scores(){}
	explicit Student(int n):name("Nully"),scores(n){}
	Student(string & s, const ArrayDb & a):name(s),scores(a){}
	Student(const char * str, const double * pd, int n): name(str),scores(pd,n){}

	~Student(){}

	double Average() const;
	const string & Name() const;
	
	double & operator[] (int i);
	double operator[] (int i) const;

	// input
	friend istream & operator>>(istream & is, Student & stu);// 1word
	friend istream & getline(istream & is, Student & stu);// 1 line
	// output
	friend ostream & operator<<(ostream & os, const Student & stu);
	
};


#endif
