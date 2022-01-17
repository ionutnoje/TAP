#include "Dreapta.h"
#include <iostream>

using namespace std;

Dreapta::Dreapta(int m, int n):m(m),n(n){}
Dreapta::Dreapta(const Dreapta& dr)
{
    this->m = dr.m;
    this->n = dr.n;
}

Dreapta::~Dreapta(){}

void Dreapta::Afisare()
{
    cout << "coordonata m: " << this->m << " coordonata n: " << this->n << endl;
}