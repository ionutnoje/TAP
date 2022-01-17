#pragma once
#ifndef _TRIUNGHI_
#define _TRIUNGHI_
#include <iostream>
using namespace std;
class Triunghi
{
protected:
	double a, b, c;
public:
	inline Triunghi() {};
	inline Triunghi(double a, double b, double c): a(a), b(b), c(c){}
	inline Triunghi(const Triunghi& param):a(param.a),b(param.b),c(param.c){}
	virtual inline ~Triunghi(){}
	inline Triunghi& operator=(const Triunghi& param) {
		this->a = param.a;
		this->b = param.b;
		this->c = param.c;
		return *this;
	}
	inline double perimetru() {
		return a + b + c;
	}
	virtual double arie() {
		double p = this->perimetru() / 2;
		double rez = sqrt(p * (p - a) * (p - b) * (p - c));
		return rez;
	}
};
#endif
