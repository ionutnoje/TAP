#pragma once
#ifndef _MANAGER_
#define _MANAGER_
#include "Angajat.h"
class Manager:public Angajat
{
private:
	int nrAngajati;
public:
	Manager(int nrAngajati,int nrOre=8, double tarifOrar = 5.5);
	Manager(const Manager&);
	~Manager();
	Manager& operator=(const Manager&);
	double getSalar() override;
	friend ostream& operator<<(ostream&, const Manager&);
	istream& operator>>(istream&);
};
#endif

