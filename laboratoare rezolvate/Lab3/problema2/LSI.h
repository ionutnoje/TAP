#pragma once
#ifndef _LSI_//C
#define _LSI_
#include <iostream>
using namespace std;
class LSI;
class Nod {
private:
	int info;
	Nod* succ;
public:
	Nod(int info);
	Nod(const Nod& param);
	~Nod();
	friend class LSI;
	//friend int main();
};
class LSI
{
private:
	Nod* prim;
public:
	LSI(int info);
	LSI(const LSI& param);
	~LSI();
	void eliberare(Nod* nod);
	void adaugareInceput(int info_nou);
	void stergereInceput();
	Nod* cautare(int info_cautat);
	void afisareLsi();
};
#endif
