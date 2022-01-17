#include <iostream>
#include "Angajat.h"
#include "Manager.h"
using namespace std;
int main()
{
	Angajat a(8);
	cout << a;
	cout << a.getSalar() << " " << a.getTarifOrar();
	Manager m(3,8,6);
	cout <<endl<< m.getSalar();
	cout << endl << m.getTarifOrar() << endl;
	cout << m;
}