#include <iostream>
#include "Carte.h"
using namespace std;
int main() {
	cout << "dati nr de carti:";
	int n;
	cin >> n;
	Carte** carti = new Carte * [n];
	for (int i = 0; i < n; ++i)
	{
		string autor, titlu;
		int ISBN;
		double pret;
		//cin >> titlu >> autor >> ISBN >> pret;
		cout << "tilu=";
		cin >> titlu;
		cout << "autor=";
		cin >> autor;
		cout << "ISBN=";
		cin >> ISBN;
		cout << "Pret=";
		cin >> pret;
		carti[i] = new Carte(autor, titlu, ISBN, pret, i);
	}
	cout << "dati autor:";
	string autor;
	cin >> autor;
	for (int i = 0; i < n; ++i)
	{
		if (carti[i]->getAutor() == autor)
		{
			carti[i]->afisareCarte();
		}
	}
	for (int i = 0; i < n; ++i)
	{
		delete carti[i];
	}
	delete[] carti;
}