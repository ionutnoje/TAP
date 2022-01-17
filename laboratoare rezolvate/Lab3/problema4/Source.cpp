#include <iostream>
#include "Film.h"
#include "Actor.h"
int main()
{
	int nrfilme;
	cout << "dati nr filme:";
	cin >> nrfilme;
	Film** filme = new Film * [nrfilme];
	Actor* actor;
	for (int i = 0; i < nrfilme; ++i)
	{
		int buget, pret;
		cout << "dati buget:";
		cin >> buget;
		cout << "dati pret";
		cin >> pret;
		cout << "dati nr de actori";
		int n;
		cin >> n;
		cout << "dati actorii:";
		filme[i] = new Film(buget, pret, n);
		for (int j = 0; j < n; ++j)
		{
			cout << "nume=";
			string nume, prenume;
			int varsta;
			cin >> nume;
			cout << "prenume=";
			cin >> prenume;
			cout << "varsta=";
			cin >> varsta;
			actor = new Actor(nume, prenume, varsta, j);
			filme[i]->adaugareActor(actor);
		}
	}
	for (int i = 0; i < nrfilme; ++i)
	{
		cout << "filmul" << i << endl;
		filme[i]->afisareFilm();
	}
	sortareFilme(nrfilme, filme);
	for (int i = 0; i < nrfilme; ++i)
	{
		cout << "filmul" << i << endl;
		filme[i]->afisareFilm();
	}
	cout << "actori comuni:" << endl;
	actoriComuni(*filme[0], *filme[1]);
	cout<<Actor::getContor();
	for (int i = 0; i < nrfilme; ++i)
	{
		delete filme[i];
	}
	delete[] filme;
}