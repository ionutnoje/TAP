#pragma once
#ifndef _ANIMAL_
#define _ANIMAL_
#include <iostream>
using namespace std;
class Animal
{
private:
	int varsta;
	string specie;
public:
	Animal(int varsta, string specie):varsta(varsta),specie(specie) {};
	Animal() { this->varsta = 0, this->specie = ""; }
	virtual ~Animal() {}
	virtual void heterotrof() = 0;
	inline int getVarsta() { return varsta; }
	inline void setVarsta(int varsta) { this->varsta = varsta ; }
	inline string getSpecie() { return specie; }
	inline void setSpecie(string specie) { this->specie = specie; }
};
#endif
