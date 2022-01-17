#pragma once
#ifndef _MAMIFER_
#define _MAMIFER_
#include <iostream>
#include "Animal.h"

class Mamifer : public virtual Animal
{
protected:
	double lungime;	
public:
	Mamifer(string specie = "", int varsta = 0, double lungime = 0);
	~Mamifer();
	Mamifer(const Mamifer&);
	Mamifer& operator=(const Mamifer&);

	inline void setLungime(double l) { this->lungime = l; }
	inline double getLungime() { return this->lungime; }
	inline virtual bool naste() { return true; }

	inline bool heterotrof() { return true; }
};

#endif