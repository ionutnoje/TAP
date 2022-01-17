#include <iostream>
#include "Matrice.h"
using namespace std;
int main() {
	Matrice m(3, 3);
	for (int i = 0; i < m.nrLinii; ++i)
		for (int j = 0; j < m.nrColoane; ++j) m.elemente[i][j] = i*(i+j) + j;
	m.afisare();
	Matrice m2=m--;
	cout << m;
	cout << m2;
	m = --m2;
	cout << endl;
	m.afisare();
	m2.afisare();
	m = -m;
	cout << endl << m;
	Matrice m3 = m.operator+(m2);
	cout << m3;
	cout << endl << m;
	m = -m;
	if (m > m3) cout << "da";
	else cout << "nu";
	m = m2++;
}