#include "Fractie.h"
#include <iostream>
using namespace std;
Fractie::Fractie(int numarator, int numitor): numarator(numarator),numitor(numitor)
{
}
Fractie::~Fractie() {  };
Fractie::Fractie(const Fractie& param)
{
	numarator = param.numarator;
	numitor = param.numitor;
}
Fractie Fractie::adunare(const Fractie& param) {
	Fractie suma;
	suma.numarator = this->numarator * param.numitor + this->numitor * param.numarator;
	suma.numitor = this->numitor * param.numitor;
	return suma;
}
Fractie Fractie::scadere(const Fractie& param) {
	Fractie dif;
	dif.numarator = this->numarator * param.numitor - this->numitor * param.numarator;
	dif.numitor = this->numitor * param.numitor;
	return dif;
}
Fractie Fractie::inmultire(const Fractie& param) {
	Fractie rez;
	rez.numarator = this->numarator *  param.numarator;
	rez.numitor = this->numitor * param.numitor;
	return rez;
}
Fractie Fractie::impartire(const Fractie& param) {
	Fractie rez;
	rez.numarator = this->numarator * param.numitor;
	rez.numitor = this->numitor * param.numarator;
	return rez;
}
void Fractie::print()
{
	cout << numarator << "/" << numitor << endl;
}
int Fractie::cmmdc(int a, int b)
{
	while(b!=0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
Fractie Fractie::simplifica() {
	Fractie rez;
	int div = cmmdc(numitor, numarator);
	rez.numarator = numarator/div;
	rez.numitor = numitor/div;
	return rez;
}
Fractie Fractie::reciproc() {
	Fractie rez;
	rez.numarator = numitor;
	rez.numitor = numarator;
	return rez;
}
bool Fractie::egal(const Fractie& param)
{
	if (numitor == param.numitor && numarator == param.numarator)
	{
		return true;
	}
	return false;
}

