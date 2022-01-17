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
		Angajat(int nrOre = 0, double tarifOrar = 5.5);
		Angajat(const Angajat&);
		~Angajat();
		virtual double getSalar();
		double getTarifOrar();
		Angajat& operator=(const Angajat&);
		friend ostream& operator<<(ostream& , const Angajat&);
		ostream& operator<<(ostream&);
		istream& operator>>(istream&);
		friend istream& operator>>(istream&, Angajat&);

};
#endif

