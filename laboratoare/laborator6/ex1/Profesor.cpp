#include "Profesor.h"

Profesor::Profesor(string cnp, string nume, string email, string materia):Persoana(cnp, nume),email(email), materia(materia)
{
}

Profesor::~Profesor(){}

Profesor::Profesor(const Profesor& p):Persoana(p.cnp, p.nume)
{
	email = p.email;
	materia = p.materia;
}

Profesor& Profesor::operator=(const Profesor& p)
{
	Persoana::operator=(p);
	email = p.email;
	materia = p.materia;

	return *this;
}
