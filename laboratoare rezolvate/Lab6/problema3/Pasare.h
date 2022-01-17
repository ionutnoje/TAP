#pragma once
#ifndef _Pasare_
#define _Pasare_
#include "Animal.h"
class Pasare :public virtual Animal
{
private:
	int nrpene;
public:
	inline Pasare(int varsta, string specie, int nrpene):Animal(varsta, specie) {
		this->nrpene = nrpene;
	}
	inline Pasare(Pasare& param) {
		setVarsta(param.getVarsta());
		setSpecie(param.getSpecie());
		this->nrpene = param.nrpene;
	}
	inline Pasare(int nrpene):Animal() {
		this->nrpene = nrpene;
	}
	inline ~Pasare() {
		Animal::~Animal();
	}
	inline Pasare& operator=(Pasare& param) {
		setVarsta(param.getVarsta());
		setSpecie(param.getSpecie());
		this->nrpene = param.nrpene;
		return *this;
	}
	int getNrpene() {
		return nrpene;
	}
	void setNrpene(int nrpene) {
		this->nrpene = nrpene;
	}
	void heterotrof() override {
		cout << "da";
	}
};
#endif
