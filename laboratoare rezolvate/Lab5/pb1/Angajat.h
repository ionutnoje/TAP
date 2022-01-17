#pragma once
#ifndef _ANGAJAT_
#define _ANGAJAT_
#include <iostream>
using namespace std;
class Angajat
{
protected:
	double tarifOrar;
	int nrOre;
public:
	Angajat(int nrOre=0, double tarifOrar = 5.5);
	Angajat(const Angajat& param);
	virtual ~Angajat();
	Angajat& operator=(const Angajat&);
	virtual double getSalar();
	double getTarifOrar();
	friend ostream& operator<<(ostream&, const Angajat&);
	istream& operator>>(istream&);
};
#endif

