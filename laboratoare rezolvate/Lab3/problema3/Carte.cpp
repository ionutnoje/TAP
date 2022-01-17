#include "Carte.h"
Carte::Carte(string autor, string titlu, int ISBN, double pret, int i) {
	this->i = i;
	this->autor = autor;
	this->titlu = titlu;
	this->ISBN = ISBN;
	this->pret = pret;
	contor++;
}
Carte::Carte(const Carte& param) {
	this->i = param.i;
	this->autor = param.autor;
	this->titlu = param.titlu;
	this->ISBN = param.ISBN;
	this->pret = param.pret;
	contor++;
}
Carte::~Carte() {
	contor--;
}
int Carte::contor = 0;