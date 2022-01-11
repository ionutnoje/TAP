#include "Animal.h"

Animal::Animal(string specie, int varsta):specie(specie),varsta(varsta)
{
}

Animal::~Animal(){}

Animal::Animal(const Animal& a)
{
	specie = a.specie;
	varsta = a.varsta;
}

Animal& Animal::operator=(const Animal& a)
{
	specie = a.specie;
	varsta = a.varsta;

	return *this;
}
