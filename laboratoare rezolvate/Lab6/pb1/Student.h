#pragma once
#ifndef _STUDENT_
#define _STUDENT_
#include "Persoana.h"
class Student:public Persoana
{
private:
	double nota;
public:
	string email;
	//Sudent(double nota, string email) : nota(nota), email(email) {};
	inline Student(string CNP, string nume, double nota, string email) {
		this->nume = nume;
		this->CNP = CNP;
		this->email = email;
		this->nota = nota;
	}
	inline Student(const Student& param) : Persoana(param), nota(param.nota), email(param.email) {}
	inline ~Student() { 
		//Persoana::~Persoana(); 
	}
	inline Student& operator=(const Student& param) {
		this->nume = param.nume;
		this->CNP = param.CNP;
		this->email = param.email;
		this->nota = param.nota;
		return *this;
	}
	double getNota() {
		return nota;
	}
	friend int main();
	void detalii() override {
		cout <<"Studentul:"<< nume << " " << CNP << " " << nota << " " << email << endl;
	}
};
#endif
