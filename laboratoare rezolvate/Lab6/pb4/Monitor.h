#pragma once
#ifndef _Monitor_
#define _Monitor_
#include "Dispozitiv.h"
class Monitor :public virtual Dispozitiv
{
protected:
	int nrpixeli;
	string culoare;
public:
	inline Monitor() :Dispozitiv() {
		this->nrpixeli = 0;
		this->culoare = "";
	}
	inline Monitor(int nrpixeli, string culoare) : Dispozitiv(), nrpixeli(nrpixeli), culoare(culoare) {
	}
	inline Monitor(int lungime, int latime, double consum, int nrpixeli, string culoare) :
		Dispozitiv(lungime, latime, consum), nrpixeli(nrpixeli), culoare(culoare) {
	}
	inline Monitor(const Monitor& param) : Dispozitiv(param), nrpixeli(param.nrpixeli), culoare(culoare) {

	}
	inline Monitor& operator=(const Monitor& param) {
		Dispozitiv::operator=(param);
		this->nrpixeli = param.nrpixeli;
		this->culoare = param.culoare;
	}
	inline virtual ~Monitor() {
		Dispozitiv::~Dispozitiv();
	}
	inline virtual void afisareSpecificatii() {
		cout << endl << "Monitor:" << endl << "nrpixeli:" << nrpixeli << ", culoare:" << culoare << " " << endl;
		Dispozitiv::afisareSpecificatii();
	}
};
#endif

