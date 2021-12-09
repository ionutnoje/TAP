#pragma once
#ifndef CONTBANCAR
#define CONTBANCAR

#include "Operatiuni.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;



class ContBancar : Operatiuni
{
private:
	float suma;
	string moneda;
	string nrcont;


public:
	ContBancar(string nrcont, string moneda, float suma);
	ContBancar(const ContBancar& cont);

	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void retragere(float suma);
	float getSuma();
	string getMoneda();
	string getNrCont();
};
#endif 




