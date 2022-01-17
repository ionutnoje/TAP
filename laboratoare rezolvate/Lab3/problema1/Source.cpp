#include <iostream>
#include "Dreapta.h"
#include "Punct.h"
using namespace std;
void centru_de_greutate(int nrpuncte, Punct**puncte)
{
	int sx = 0;
	int sy = 0;
	for (int i = 0; i < nrpuncte; ++i)
	{
		sx += puncte[i]->x;
		cout << sx << " ";
		sy += puncte[i]->y;
	}

	double xg = (double)sx / nrpuncte;
	double yg = (double)sy / nrpuncte;
	Punct cdg(xg, yg);
	cdg.afisare();
}
int main()
{
	int n, m;
	cout << "dati m:";
	cin >> m;
	cout << "dati n:";
	cin >> n;
	Punct::dr=Dreapta(m,n);
	Punct::dr.afisare();
	int nrpuncte;
	cout << "dati nrpuncte=";
	cin >> nrpuncte;
	Punct** puncte = new Punct * [nrpuncte];
	for (int i = 0; i < nrpuncte; ++i)
	{
		int a, b;
		cout << "dati x:";
		cin >> a;
		cout << "dati y:";
		cin >> b;
		puncte[i] = new Punct(a, b);
	}
	for (int i = 0; i < nrpuncte; ++i)
	{
		if (puncte[i]->y == Punct::dr.m * puncte[i]->x + Punct::dr.n) {
			Punct::contorpctdedr++;
			cout <<"pe dreapta: "<< Punct::contorpctdedr << " " << endl;
		}
		else if (puncte[i]->y > Punct::dr.m * puncte[i]->x + Punct::dr.n) {
			Punct::contorpctstdr++;
			cout << "in stanga: " << Punct::contorpctstdr << " " << endl;
		}
		else {
			Punct::contorpctdrdr++;
			cout << "in dreapta: " << Punct::contorpctdrdr << " " << endl;
		}
	}
	centru_de_greutate(nrpuncte, puncte);
	for (int i = 0; i < nrpuncte; ++i)
	{
		delete puncte[i];
	}
	delete[] puncte;
}