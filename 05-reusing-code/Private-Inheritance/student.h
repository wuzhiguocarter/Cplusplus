#ifndef STUDENTC_H_
#define STUDENTC_H_
#include <iostream>
#include <valarray>
#include <string>

// private inheritance "has-a"
class Student : private std::string, 
				private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	// private method for scores output
	std::ostream & arr_out(std::ostream & os) const;
public:
	Student()
		: std::string("Null Student"), ArrayDb() {}
	explicit Student(const std::string & s)
		: std::string(s), ArrayDb() {}
	explicit Student(int n)
		: std::string("Nully"), ArrayDb(n) {}
	Student(const std::string & s, int n)
		: std::string(s), ArrayDb(n) {}
	Student(const std::string & s, const ArrayDb & a)
		: std::string(s), ArrayDb(a) {}
	Student(const char * str, const double * pd, int n)
		: std::string(str), ArrayDb(pd, n) {}
	~Student() {}
	double Average() const;
	double & operator[](int i);
	double operator[](int i) const;
	const std::string & Name() const;
	// friends
	// input
	friend std::istream & operator>>(std::istream & is,
		Student & stu); // 1 word
	friend std::istream & getline(std::istream & is,
		Student & stu);	// 1 line
	// output
	friend std::ostream & operator<<(std::ostream & os,
		const Student & stu);

	/*
	============================================================
		How to make a particular base-class method available
	publicly in the derived class.
	============================================================
	*/
	//Redefining Access with using
	// we can using stu.min() outside student class scope this way
	using std::valarray<double>::min;
	using std::valarray<double>::max;
	// using std::valarray<double>::sum;

	// we can using stu.max() outside student class scope this way
	double sum() const // public Student method
	{
		return std::valarray<double>::sum();// use privately-inherited method
	}
};
#endif