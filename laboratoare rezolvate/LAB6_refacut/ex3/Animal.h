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
	Animal(string specie, int varsta);
	virtual void heterotrof() = 0;
	int getVarsta();
	void setVarsta(int);
	string getSpecie();
	void setSpecie(string);
};
#endif
