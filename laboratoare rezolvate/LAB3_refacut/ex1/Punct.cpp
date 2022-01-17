#include "Punct.h"
#include <iostream>

using namespace std;


Punct::Punct(int x, int y):x(x),y(y){}
Punct::Punct(const Punct& punct)
{
    this->x = punct.x;
    this.y = punct.y;
}
Punct::~Punct(){};

void Punct::Afisare() {
	cout << "x=" << x << ",  y=" << y << endl;
}
