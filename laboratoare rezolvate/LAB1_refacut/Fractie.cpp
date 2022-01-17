#include "Fractie.h"
#include <iostream>

using namespace std;


Fractie::Fractie(int numarator, int numitor):numarator(numarator),numitor(numitor){}
Fractie::Fractie(const Fractie& frac)
{
    this->numarator = frac.numarator;
    this->numitor = frac.numitor;
}
Fractie::~Fractie(){};

Fractie Fractie::adunare(const Fractie& fractie)
{
    Fractie rezultat;
    rezultat.numarator = this->numarator * fractie.numitor + this->numitor * fractie.numarator;
	rezultat.numitor = this->numitor * fractie.numitor;
	return rezultat;
}

Fractie Fractie::scadere(const Fractie& fractie)
{
    Fractie rezultat;
    rezultat.numarator = this->numarator * fractie.numitor - this->numitor * fractie.numarator;
	rezultat.numitor = this->numitor * fractie.numitor;
	return rezultat;
}

Fractie Fractie::inmultire(const Fractie& fractie) {
	Fractie rezultat;
	rezultat.numarator = this->numarator *  fractie.numarator;
	rezultat.numitor = this->numitor * fractie.numitor;
	return rezultat;
}

Fractie Fractie::impartire(const Fractie& fractie) {
	Fractie rezultat;
	rezultat.numarator = this->numarator * fractie.numitor;
	rezultat.numitor = this->numitor * fractie.numarator;
	return rezultat;
}

void Fractie::print()
{
    cout << "numaratorul este: " << this->numarator << " iar numitorul este: " << this->numitor << endl;
}