#include "Animal.h"

Animal::Animal(string specie, int varsta):specie(specie),varsta(varsta){}

Animal::~Animal(){}

Animal::Animal(const Animal& a)
{
	this->specie = a.specie;
	this->varsta = a.varsta;
}

Animal& Animal::operator=(const Animal& a)
{
	this->specie = a.specie;
	this->varsta = a.varsta;

	return *this;
}
