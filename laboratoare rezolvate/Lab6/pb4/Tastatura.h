#pragma once
#ifndef _TASTATURA_
#define _TASTATURA_
#include "Dispozitiv.h"
class Tastatura:public virtual Dispozitiv
{
protected:
	int nrTaste;
	string culoareTaste;
public:
	inline Tastatura():Dispozitiv() {
		this->nrTaste = 0;
		this->culoareTaste = "";
	}
	inline Tastatura(int nrTaste, string culoareTaste) : Dispozitiv() ,nrTaste(nrTaste), culoareTaste(culoareTaste){
	}
	inline Tastatura(int lungime, int latime, double consum, int nrTaste, string culoareTaste) :
		Dispozitiv(lungime, latime, consum), nrTaste(nrTaste), culoareTaste(culoareTaste) {
	}
	inline Tastatura(const Tastatura& param) : Dispozitiv(param), nrTaste(param.nrTaste), culoareTaste(culoareTaste) {

	}
	inline Tastatura& operator=(const Tastatura& param) {
		Dispozitiv::operator=(param);
		this->nrTaste = param.nrTaste;
		this->culoareTaste = param.culoareTaste;
	}
	inline virtual ~Tastatura() {
		Dispozitiv::~Dispozitiv();
	}
	inline virtual void afisareSpecificatii() {
		cout << endl << "Tastatura:" << endl << "nrTaste:" << nrTaste << ", culoare taste:" << culoareTaste << " " << endl;
		Dispozitiv::afisareSpecificatii();
	}
};
#endif

