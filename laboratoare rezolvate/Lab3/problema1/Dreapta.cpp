#include "Dreapta.h"
#include <iostream>
using namespace std;
Dreapta::Dreapta(int m, int n) : m(m), n(n) {

}
Dreapta::Dreapta(const Dreapta& param) {
	this->m = param.m;
	this->n = param.n;
}
Dreapta::~Dreapta(){}
void Dreapta::afisare() {
	cout << "m=" << m << ",  n=" << n << endl;
}