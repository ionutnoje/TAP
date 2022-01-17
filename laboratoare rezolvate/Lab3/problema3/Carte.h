#pragma once
#ifndef _CARTE_
#define _CARTE_
#include <iostream>
using namespace std;
class Carte
{
private:
	string autor;
	string titlu;
	int ISBN;
	double pret;
	static int contor;
	int i;
public:
	Carte(string autor, string titlu, int ISBN, double pret, int i = 0);
	Carte(const Carte& param);
	~Carte();
	static int getContor(){ return contor; }
	inline string getAutor()const {
		return autor;
	}
	inline string getTitlu()const {
		return titlu;
	}
	inline int getISBN()const {
		return ISBN;
	}
	inline double getPret() const {
		return pret;
	}
	inline void setAutor(string autor) {
		this->autor = autor;
	}
	inline void setTitlu(string titlu) {
		this->titlu = titlu;
	}
	inline void setISBN(int ISBN) {
		this->ISBN = ISBN;
	}
	inline void setPret(double pret) {
		this->pret = pret;
	}
	inline void afisareCarte() {
		cout << "titlu: " << titlu << endl << "autor: " << autor << endl << "ISBN: " << ISBN << endl << "pret: " << pret << endl << endl;
	}
};
#endif

