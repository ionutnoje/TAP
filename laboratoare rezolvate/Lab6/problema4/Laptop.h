#pragma once
#ifndef _Laptop_
#define _Laptop_
#include "Dispozitiv.h"
#include "Monitor.h"
#include "Tastatura.h"
class Laptop :public virtual Monitor, public virtual Tastatura
{
protected:
	double pret;
public:
	inline Laptop(): Monitor(),Tastatura() {
		this->pret = 0;
	}
	inline Laptop(int lungime, int latime, double consum, int nrpixeli, string culoare, int nrTaste, string culoareTaste, double pret) :
		Monitor(lungime, latime, consum, nrpixeli, culoare), Tastatura(nrTaste, culoareTaste), pret(pret) {
	}
	inline Laptop(const Laptop& param) :  Monitor(param),Tastatura(param){
		this->pret = param.pret;
	}
	inline Laptop& operator=(const Laptop& param) {
		Monitor::operator=(param);
		Tastatura::operator=(param);
		this->pret = param.pret;
		return *this;
	}
	inline ~Laptop() {
		Monitor::~Monitor();
		Tastatura::~Tastatura();
	}
	inline void afisareSpecificatii() override{
		cout << endl << "Laptop:" << endl << "pret:"<<pret<<" ";
		Monitor::afisareSpecificatii();
		Tastatura::afisareSpecificatii();
	}
};
#endif
