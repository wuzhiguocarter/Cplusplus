#include "student.h"

double Student::Average() const
{
	if(scores.size() > 0)
		return scores.sum()/scores.size();
	else
		return 0;
}

const string & Student::Name() const
{
	return name;
}
double & Student::operator[] (int i)
{
	return scores[i];
}

double Student::operator[] (int i) const
{
	return scores[i];
}

ostream & Student::arr_out(ostream & os) const
{
	int lim = scores.size();
	if ( lim > 0)
	{
		for(int i = 0; i < lim; i++)
		{
			os << scores[i] << "\t";
			if( i % 5 == 4)
			{
				os << endl;
			}
		}
	}
	else
		os << " empty array\n";

	return os;

}


//friends
// input
istream & operator>>(istream & is, Student & stu)
{
	is >> stu.name;
	return is;

}
istream & getline(istream & is, Student & stu)
{
	getline(is, stu.name);
	return is;
}
// output
ostream & operator<<(ostream & os, const Student & stu)
{
	os << "Scores for " << stu.name << ": \n";
	stu.arr_out(os);
	return os;
}