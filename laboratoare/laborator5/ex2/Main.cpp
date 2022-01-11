#include <iostream>
#include "Punct2D.h"
#include "Punct3D.h"

using namespace std;

int main()
{
	Punct2D p1_2D(1, 2);
	Punct2D p2_2D(1, 5);
	
	p1_2D.distanta(p2_2D);


	Punct3D p1_3D(1, 2, 3);
	Punct3D p2_3D(1, 2, 5);

	p1_3D.distanta(p2_3D);


	int n;
	cin >> n;

	Punct2D** p2D = new Punct2D * [n];

	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		p2D[i] = new Punct2D(a,b);

	}

	for (int i = 0; i < n; ++i)
	{
		cout << "Punctul p2d[" << i << "] are coordonatele: " << p2D[i]->getCoordonateX() << " si " << p2D[i]->getCoordonateY() << endl;
	}

	int m;
	cin >> m;

	Punct3D** p3D = new Punct3D * [m];

	for (int i = 0; i < m; ++i)
	{
		int x, y, z;
		cin >> x >> y >> z;
		p3D[i] = new Punct3D(x,y,z);
	}

	return 0;
}