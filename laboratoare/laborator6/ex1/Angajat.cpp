#include "Angajat.h"

Angajat::Angajat(string cnp, string nume, string email, string departament):Persoana(cnp, nume), email(email), departament(departament)
{
}

Angajat::~Angajat(){}

Angajat::Angajat(const Angajat& a):Persoana(a.cnp, a.nume)
{
	email = a.email;
	departament = a.departament;
}

Angajat& Angajat::operator=(const Angajat& a)
{
	Persoana::operator=(a);
	email = a.email;
	departament = a.departament;

	return *this;
}
