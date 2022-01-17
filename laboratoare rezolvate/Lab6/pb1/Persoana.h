#pragma once
#ifndef _PERSOANA_
#define _PERSOANA_
#include <iostream>
using namespace std;
class Persoana
{
protected:
	string CNP;
	string nume;
public:
	Persoana(){}
	//inline Persoana(string CNP, string nume) :CNP(CNP), nume(nume) {}
	virtual inline ~Persoana(){}
	inline Persoana(const Persoana& param): CNP(param.CNP), nume(param.nume) {}
	inline Persoana& operator=(const Persoana& param) {
		this->CNP = param.CNP;
		this->nume = param.nume;
		return *this;
	}
	virtual void detalii() = 0;
};
#endif
