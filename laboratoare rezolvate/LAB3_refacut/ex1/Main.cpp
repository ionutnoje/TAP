#include "Dreapta.h"
#include "Punct.h"
#include <iostream>

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


    return 0;
}