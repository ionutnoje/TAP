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
	inline Animal() { this->varsta = 0, this->specie = ""; }
	inline virtual ~Animal() {}
	virtual void heterotrof() = 0;
	int getVarsta() { return varsta; }
	void setVarsta(int varsta) { this->varsta = varsta ; }
	string getSpecie() { return specie; }
	void setSpecie(string specie) { this->specie = specie; }
};
#endif
