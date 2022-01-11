#pragma once
#ifndef _ORNITORINC_
#define _ORNITORINC_
#include <iostream>
#include "Mamifer.h"
#include "Pasare.h"

using namespace std;

class Ornitorinc : public Mamifer, public Pasare
{
protected:
	Ornitorinc(string specie = "", int varsta = 0, double lungime = 0, int nrPene = 0);
	~Ornitorinc();
	Ornitorinc(const Ornitorinc&);
	Ornitorinc& operator=(const Ornitorinc&);
public:
	inline bool amfibiu() { return true; }
	inline bool zboara() override { return false; }
	inline bool naste() override { return true; }

	inline bool heterotrof() { return true; }
};

#endif 