#pragma once
#ifndef _PERSOANA_
#define _PERSOANA_
#include <iostream>

using namespace std;

class Persoana
{
protected:
	string cnp, nume;
public:
	Persoana(string cnp = "", string nume = "");
	virtual ~Persoana();
	Persoana(const Persoana&);
	Persoana&  operator=(const Persoana&);

	virtual void detalii() = 0;
};

#endif