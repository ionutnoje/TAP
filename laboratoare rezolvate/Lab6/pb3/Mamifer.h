#pragma once
#ifndef _MAMIFER_
#define _MAMIFER_
#include "Animal.h"
class Mamifer:public virtual Animal
{
private:
	int lungime;
public:
	inline Mamifer(int varsta, string specie, int lungime):	Animal(varsta, specie) {
		this->lungime = lungime;
	}
	inline Mamifer(Mamifer& param) {
		setVarsta(param.getVarsta());
		setSpecie(param.getSpecie());
		this->lungime = param.lungime;
	}
	inline ~Mamifer() {
		Animal::~Animal();
	}
	inline Mamifer& operator=(Mamifer& param) {
		setVarsta(param.getVarsta());
		setSpecie(param.getSpecie());
		this->lungime = param.lungime;
		return *this;
	}
	int getLungime() {
		return lungime;
	}
	void setLungime(int lungime) {
		this->lungime = lungime;
	}
	void heterotrof() override{
		cout << "da";
	}
};
#endif

