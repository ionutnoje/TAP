#pragma once
#ifndef _CONTBANCAR_
#define _CONTBANCAR_
#include <string>
#include "Operatiuni.h"
using namespace std;
class ContBancar:Operatiuni
{
private:
	string numarCont;
	float suma;
	string moneda;
public:
	ContBancar(string numarCont, string moneda="LEI", float suma = 0 );
	ContBancar(const ContBancar& param);
	~ContBancar();
	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void extragere(float suma);
	void transfer(ContBancar& contDest, float suma);
	string getNumarCont();
	float getSuma();
	string getMoneda();
	void setNumarCont(int numarCont);
	void setSuma(float suma);
	void setMoneda(string moneda);
	void afisareCont();
};
#endif

