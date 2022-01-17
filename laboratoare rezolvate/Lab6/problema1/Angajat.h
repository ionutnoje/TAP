#pragma once
#ifndef _Angajat_
#define _Angajat_
#include "Persoana.h"
class Angajat :Persoana
{
private:
	string departament;
public:
	string email;
	//Sudent(double nota, string email) : nota(nota), email(email) {};
	inline Angajat(string CNP, string nume, string departament, string email) {
		this->nume = nume;
		this->CNP = CNP;
		this->email = email;
		this->departament = departament;
	}
	inline Angajat(const Angajat& param) : Persoana(param), departament(param.departament), email(param.email) {}
	inline ~Angajat() {
		//Persoana::~Persoana(); 
	}
	inline Angajat& operator=(const Angajat& param) {
		this->nume = param.nume;
		this->CNP = param.CNP;
		this->email = param.email;
		this->departament = param.departament;
		return *this;
	}
	string getDepartament() {
		return departament;
	}
	void detalii() override {
		cout << "Angajatul:" << nume << " " << CNP << " " << departament << " " << email << endl;
	}
};
#endif