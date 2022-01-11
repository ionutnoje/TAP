#include "Persoana.h"

Persoana::Persoana(string cnp, string nume):cnp(cnp),nume(nume)
{

}

Persoana::~Persoana(){}

Persoana::Persoana(const Persoana& p)
{
	cnp = p.cnp;
	nume = p.nume;
}

Persoana& Persoana::operator=(const Persoana& p)
{
	cnp = p.cnp;
	nume = p.nume;
	return *this;
}