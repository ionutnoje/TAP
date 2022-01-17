#pragma once
#ifndef _Isoscel_
#define _Isoscel_
#include <iostream>
#include "Triunghi.h"
using namespace std;
class Isoscel :public virtual Triunghi
{
public:
	inline Isoscel(double a, double b) : Triunghi(a, a, b) {}
	inline Isoscel(const Isoscel& param) : Triunghi(param) {}
	virtual inline ~Isoscel() { Triunghi::~Triunghi(); }
	inline Isoscel& operator=(const Isoscel& param) {
		Triunghi::operator=(param);
	}
	virtual double arie() {
		double h = sqrt(a * a - c * c / 4);
		double rez = a*h/2;
		return rez;
	}
};
#endif

