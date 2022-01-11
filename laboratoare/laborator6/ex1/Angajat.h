#pragma once
#ifndef _ANGAJAT_
#define _ANGAJAT_
#include <iostream>
#include "Persoana.h"

class Angajat : public Persoana
{
protected:
	string email, departament;
public:
	Angajat(string cnp, string nume, string email, string departament);
	~Angajat();
	Angajat(const Angajat&);
	Angajat& operator=(const Angajat&);

	inline string getDepartament() { return departament; }
	inline void detalii() override { cout << "Angajatul " << nume << " face parte din departamentul: " << getDepartament() << endl; }


};

#endif