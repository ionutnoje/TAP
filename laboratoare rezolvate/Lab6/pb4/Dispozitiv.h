#pragma once
#ifndef _DISPOZITIV_
#define _DISPOZITIV_
#include <iostream>
using namespace std;
class Dispozitiv
{
protected:
	int lungime;
	int latime;
	float consum;
public:
	inline Dispozitiv() {
		this->lungime = 0;
		this->latime = 0;
		this->consum = 0.0;
	}
	inline Dispozitiv(int lungime, int latime, float consum):lungime(lungime),latime(latime), consum(consum) {}
	inline Dispozitiv(const Dispozitiv& param):lungime(param.lungime),latime(param.latime),consum(param.consum) {}
	inline Dispozitiv& operator=(const Dispozitiv& param) {
		this->latime = param.latime;
		this->lungime = param.lungime;
		this->consum = param.consum;
		return *this;
	}
	inline virtual ~Dispozitiv(){}
	inline virtual void afisareSpecificatii() {
		cout << endl << "Dispozitiv:" << endl << "lungime=" << lungime << ", latime=" << latime << ", consum=" << consum << " " << endl;
	}

};
#endif
