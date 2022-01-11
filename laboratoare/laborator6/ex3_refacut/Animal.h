#pragma once
#ifndef _ANIMAL_
#define _ANIMAL_
#include <iostream>

using namespace std;

class Animal
{
protected:
	string specie;
	int varsta;
public:
	Animal(string specie = "", int varsta = 0);
	~Animal();
	Animal(const Animal&);
	Animal& operator=(const Animal&);

	virtual bool heterotrof() = 0;
	inline void setSpecie(string s) { this->specie = s; }
	inline string getSpecie() { return this->specie; }
	inline void setVarsta(int v) { this->varsta = v; }
	inline int getVarsta() { return this->varsta; }
};

#endif