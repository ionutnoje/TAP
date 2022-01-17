#pragma once
#ifndef _FILM_
#define _FILM_
#include "Actor.h"
#include <iostream>
using namespace std;
class Film
{
private:
	double buget;
	double pret;
	int nractori;
	int index;
	Actor **actori;
public:
	Film(double buget, double pret, int nractori);
	Film(const Film& param);
	~Film();
	void adaugareActor(Actor* actor);
	void stergereActor();
	friend int comparareBuget(const Film& film1, const Film& film2);
	friend int comparareActori(Film& film1, Film& film2);
	friend void sortareFilme(int nrfilme, Film** filme);
	friend void actoriComuni(const Film& film1, const Film& film2);
	void afisareFilm();
};
#endif
