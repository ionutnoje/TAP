#include "Mamifer.h"

Mamifer::Mamifer(string specie, int varsta, double lungime):Animal(specie, varsta), lungime(lungime)
{
}

Mamifer::~Mamifer(){}

Mamifer::Mamifer(const Mamifer& m):Animal(m.specie, m.varsta)
{
	lungime = m.lungime;
}

Mamifer& Mamifer::operator=(const Mamifer& m)
{
	Animal::operator=(m);
	lungime = m.lungime;

	return *this;
}