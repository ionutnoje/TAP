#include "Student.h"

Student::Student(string cnp, string nume,string email, int nota):Persoana(cnp,nume),email(email),nota(nota)
{
}

Student::~Student(){}

Student::Student(const Student& s):Persoana(s.cnp, s.nume)
{
	email = s.email;
	nota = s.nota;
}

Student& Student::operator=(const Student& s)
{
	Persoana::operator=(s);
	email = s.email;
	nota = s.nota;

	return *this;
}
