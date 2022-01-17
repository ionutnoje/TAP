#pragma once
#ifndef _PROFESOR_
#define _PROFESOR_
#include "Persoana.h"
class Profesor:Persoana
{
private:
	string materie;
public:
	string email;
	//Sudent(double nota, string email) : nota(nota), email(email) {};
	inline Profesor(string CNP, string nume, string materie, string email) {
		this->nume = nume;
		this->CNP = CNP;
		this->email = email;
		this->materie = materie;
	}
	inline Profesor(const Profesor& param) : Persoana(param), materie(param.materie), email(param.email) {}
	inline ~Profesor() {
		//Persoana::~Persoana(); 
	}
	inline Profesor& operator=(const Profesor& param) {
		this->nume = param.nume;
		this->CNP = param.CNP;
		this->email = param.email;
		this->materie = param.materie;
		return *this;
	}
	string getMaterie() {
		return materie;
	}
	void detalii() override {
		cout << "Profesorul:" << nume << " " << CNP << " " << materie << " " << email << endl;
	}
};
#endif