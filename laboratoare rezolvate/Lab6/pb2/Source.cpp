#include "Triunghi.h"
#include "Dreptunghic.h"
#include "Isoscel.h"
#include "DreptunghicIsoscel.h"
#include "Echilateral.h"
int main() {
	Triunghi t(4, 6, 9);
	cout << t.perimetru() << endl;
	cout << t.arie() << endl;
	Dreptunghic* d = new Dreptunghic(4, 6, 9);
	cout << d->perimetru() << endl;
	cout << d->arie() << endl;
	Isoscel* i = new Isoscel(3, 4);
	cout << i->perimetru() << endl;
	cout << i->arie() << endl;
	DreptunghicIsoscel* di = new DreptunghicIsoscel(2);
	cout << di->perimetru() << endl;
	cout << di->arie() << endl;
	Echilateral* e = new Echilateral(3);
	cout << e->perimetru() << endl;
	cout << e->arie() << endl;
}