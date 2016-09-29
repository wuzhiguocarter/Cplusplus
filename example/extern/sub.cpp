#include "sub.h"

extern double PI;

double sub(double a, double b){
	return a-b;
}

double subPI(double c){
	return c-PI;

}

extern double add(double a, double b);

double subadd2PI(double d){
	return subPI(add(add(d,PI),PI));
}

static int private