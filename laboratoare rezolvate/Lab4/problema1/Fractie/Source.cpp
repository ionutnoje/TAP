#include<iostream>
#include"Fractie.h"
using namespace std;
int main() {
	Fractie f1(1, 2);
	cout << "f1 este: "; f1.afisare();
	Fractie f1mm = f1--;//post decrementare
	cout << "f1 postdecrementat: "; f1.afisare();
	cout << "f1mm=1/2--: "; f1mm.afisare();
	Fractie mmf1 = --f1;//pre decrementare
	cout << "mmf1=--1/2: "; mmf1.afisare();
	cout << "f1 dupa a post si o predecrementare: "; f1.afisare();
	cout << "Semn schimbat: ";
	Fractie f2 = -f1;//schimbare de semn
	cout << "f2="; f2.afisare();
	f2 = Fractie(2);//operator=
	cout << "f2 devine";
	f2.afisare();
	Fractie suma = f1 + f2;//operator+
	Fractie dif = f1 - f2;//operator-
	Fractie prod = f1 * f2;//operator*
	Fractie cat = f1 / f2;//operator/
	cout << "f1+f2:"; suma.afisare();
	cout << "f1-f2:"; dif.afisare();
	cout << "f1*f2:"; prod.afisare();
	cout << "f1/f2:"; cat.afisare();
	cout << "Introduceti numarator si numitorul unei fractii:";
	Fractie frcitit;
	cin >> frcitit;
	cout << "Fractia este:" << frcitit << endl;
	fflush(stdin);
	cin.ignore();
	return 0;
}