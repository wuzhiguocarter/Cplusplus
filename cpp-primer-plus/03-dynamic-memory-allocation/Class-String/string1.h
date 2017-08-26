#ifndef _STRING1_H_
#define _STRING1_H_

#include <iostream>

using std::ostream;
using std::istream;

class String
{
private:
	char *str;                  //pointer to string
	int len;                     //length of string
	static int num_strings;      //object counter
	static const int CINLIM = 80;//cin limit input
public:
	//constructors and destructor
	String(const char *s);//constructor
	String(const String &);//copy constructor
	String();//default constructor
	~String();

	int length () const { return len; }

	//overloaded operator
	String & operator= (const String &);
	String & operator= (const char *);
	char & operator[] (int i);
	const char & operator[] (int i) const;

	//overloaded operator  friends
	friend bool operator< (const String &st, const String &st2);
	friend bool operator> (const String &st, const String &st2);
	friend bool operator== (const String &st, const String &st2);

	friend ostream & operator<< (ostream &os, const String &st);
	friend istream & operator<< (istream &is, const String &st);
	
	//static function
	static int HowMany();
};



#endif