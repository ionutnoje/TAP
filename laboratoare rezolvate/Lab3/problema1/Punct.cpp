#include "Punct.h"
#include <iostream>
#include <cmath>
using namespace std;
Punct::Punct(double x, double y) : x(x), y(y) {
}
Punct::Punct(const Punct& param) : x(param.x), y(param.y) {

}
Punct::~Punct() {

}
void Punct::afisare() const{
	cout << "x=" << x << ",  y=" << y << endl;
}
double distanta(const Punct& p1, const Punct& p2) 
{
	double rez = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
	return rez;
}
int Punct::contorpctdedr = 0;
int Punct::contorpctdrdr = 0;
int Punct::contorpctstdr = 0;
Dreapta Punct::dr;