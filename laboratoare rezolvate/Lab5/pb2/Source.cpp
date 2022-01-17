#include "Punct3D.h"
#include "Punct2D.h"
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "dati n:";
	cin >> n;
	Punct2D** v1 = new Punct2D * [n];
	for (int i = 0; i < n; ++i)
	{
		v1[i] = new Punct2D();
		v1[i]->operator>>(cin);
		v1[i]->afisare();
		cout << endl;
	}
	cout << v1[0]->distanta(*v1[1]) << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << *v1[i];
		//v1[i]->afisare();
		//cout << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		delete v1[i];
	}
	delete[] v1;
	int m;
	cout << "dati m:";
	cin >> m;
	Punct3D** v = new Punct3D*[m];
	for (int i = 0; i < m; ++i)
	{
		cout << "dati x,y,z:" << endl;
		int x, y, z;
		cin >> x >> y >> z;
		v[i] = new Punct3D(x, y, z);
		//cout << v[i];
		//v[i] = new Punct3D();
		//v[i]->operator>>(cin);
	}
	for (int i = 0; i < m; ++i)
	{
		cout << *v[i];
		//v[i]->afisare();
	}
	for (int i = 0; i < m; ++i)
	{
		delete v[i];
	}
	delete[] v;
}