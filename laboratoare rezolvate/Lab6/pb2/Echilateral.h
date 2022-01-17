#pragma once
#ifndef _Echilateral_
#define _Echilateral_
#include <iostream>
#include "Isoscel.h"
using namespace std;
class Echilateral :public Isoscel
{
public:
	inline Echilateral(double a) :Triunghi(a,a,a), Isoscel(a,a) {}
	inline Echilateral(const Echilateral& param) : Isoscel(param) {}
	virtual inline ~Echilateral() { Isoscel::~Isoscel(); }
	inline Echilateral& operator=(const Echilateral& param) {
		Isoscel::operator=(param);
	}
	virtual double arie() {
		double rez = a * a*sqrt(3) / 4;
		return rez;
	}
};
#endif

