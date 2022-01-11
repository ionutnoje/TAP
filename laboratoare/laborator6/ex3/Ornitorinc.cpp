#include "Ornitorinc.h"

Ornitorinc::Ornitorinc(string specie, int varsta, double lungime, int nrPene):Mamifer(specie, varsta, lungime), Pasare(nrPene)
{
}

Ornitorinc::~Ornitorinc(){}

Ornitorinc::Ornitorinc(const Ornitorinc& o):Mamifer(o.specie, o.varsta, o.lungime),Pasare(o.nrPene)
{
}

Ornitorinc& Ornitorinc::operator=(const Ornitorinc& o)
{
	Mamifer::operator=(o);
	Pasare::operator=(o.nrPene);

	return *this;
}
