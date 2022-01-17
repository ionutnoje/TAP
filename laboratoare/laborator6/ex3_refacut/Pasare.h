#pragma once
#ifndef _PASARE_
#define _PASARE_
#include <iostream>
#include "Animal.h"

class Pasare : public virtual Animal
{
protected:
	int nrPene;
public:
	Pasare(string specie = "", int varsta = 0, int nrPene = 0);
	Pasare(int nrPene = 0);
	~Pasare();
	Pasare(const Pasare&);
	Pasare& operator=(const Pasare&);

	inline void setNrPene(int n) { this->nrPene = n; }
	inline int getNrPene() { return this->nrPene; }
	inline virtual bool zboara() { return true; }

	inline bool heterotrof() { return true; }
};

#endif