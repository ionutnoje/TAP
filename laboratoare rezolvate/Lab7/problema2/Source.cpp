#include <iostream>
#include "LSI.h"
using namespace std;
int main() {
	LSI<int> lista(1);
	for (int i = 2; i <= 5; ++i) {
		lista.adaugareInceput(i);
	}
	lista.operator<<(cout);
	lista.stergereInceput();
	cout << endl;
	lista.operator<<(cout);
}