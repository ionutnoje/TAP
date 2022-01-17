#pragma once
#ifndef _Ornitorinc_
#define _Ornitorinc_
#include "Mamifer.h"
#include "Pasare.h"
class Ornitorinc:public virtual Mamifer, public virtual Pasare
{
public:
	inline Ornitorinc(int varsta, string specie, int nrpene, int lungime) :Mamifer(varsta, specie, lungime), Pasare(nrpene) {
		setVarsta(varsta);
		setSpecie(specie);
	}
	inline Ornitorinc(Ornitorinc& param):Mamifer(param),Pasare(param) {
	}
	inline ~Ornitorinc() {
		Mamifer::~Mamifer();
		Pasare::~Pasare();
	}
	inline Ornitorinc& operator=(Ornitorinc& param) {
		setVarsta(param.getVarsta());
		setSpecie(param.getSpecie());
		return *this;
	}
	inline void heterotrof() {
		cout << "nu" << endl;
	}
	inline void amfibiu() {
		cout << "nu stiu daca e " << endl;
	}
};
#endif
