#include <iostream>
#include "LSI.h"
using namespace std;
int main() {
	LSI root(3);
	root.adaugareInceput(2);
	root.adaugareInceput(1);
	root.adaugareInceput(0);
	root.afisareLsi();
	root.stergereInceput();
	root.afisareLsi();
	Nod*nod_caut = root.cautare(6);
	if (nod_caut != NULL)
	{
		cout << "da";
	}
	else cout << "nu";
}