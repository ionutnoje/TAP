#pragma once
#ifndef _MANAGER_
#define _MANAGER_
#include "Angajat.h"

class Manager:public Angajat
{
private:
	int nrAngajati;

public:
	Manager(int nrAngajati, int nrOre = 0, double tarifOrar = 5.5);
	Manager(const Manager&);
	~Manager();
	double getSalar() override;
	Manager& operator=(const Manager&);
	friend ostream& operator<<(ostream&, const Manager&);
	friend istream& operator>>(istream&, Manager&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);


};
#endif

