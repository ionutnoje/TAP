#include "Pasare.h"

Pasare::Pasare(string specie, int varsta, int nrPene):Animal(specie, varsta), nrPene(nrPene){}

Pasare::~Pasare(){}

Pasare::Pasare(const Pasare& p):Animal(specie, varsta)
{
	this->nrPene = p.nrPene;
}

Pasare& Pasare::operator=(const Pasare& p)
{
	Animal::operator=(p);
	this->nrPene = p.nrPene;

	return *this;
}