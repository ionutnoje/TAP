#pragma once
#ifndef _PUNCT_//C
#define _PUNCT_
#include "Dreapta.h"
class Punct
{
private:
	double x, y;
	static Dreapta dr;
	static int contorpctdedr;
	static int contorpctstdr;
	static int contorpctdrdr;
public:
	Punct(double x, double y);
	Punct(const Punct& param);
	~Punct();
	void afisare()const;
	friend double distanta(const Punct& p1, const Punct& p2);
	friend class Dreapta;
	friend int main();
	friend void centru_de_greutate(int nrpuncte, Punct**puncte);
};
#endif
