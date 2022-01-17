#pragma once
#ifndef _DREPTUNGHIC_
#define _DREPTUNGHIC_
#include <iostream>
#include "Triunghi.h"
using namespace std;
class Dreptunghic:public virtual Triunghi
{
public:
	inline Dreptunghic(double a, double b, double c) : Triunghi(a,b,c) {}
	inline Dreptunghic(const Dreptunghic& param) : Triunghi(param) {}
	virtual inline ~Dreptunghic() { Triunghi::~Triunghi(); }
	inline Dreptunghic& operator=(const Dreptunghic& param) {
		Triunghi::operator=(param);
	}
	virtual double arie() {
		double rez = a * b / 2;
		return rez;
	}
};
#endif