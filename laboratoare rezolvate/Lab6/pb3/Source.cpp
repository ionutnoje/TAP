#include "Ornitorinc.h"
int main() {
	Mamifer m(12, "lup", 125);
	m.heterotrof();
	cout << endl << m.getSpecie() << " " << m.getVarsta() << " " << m.getLungime() << endl;
	Pasare p(13, "vrabie", 1321);
	p.heterotrof();
	cout << endl << p.getSpecie() << " " << p.getVarsta() << " " << p.getNrpene() << endl;
	Ornitorinc o(14, "ornitorinc", 123, 120);
	cout << endl << o.getSpecie() << " " << o.getVarsta() << " " << o.getNrpene() << " " << o.getLungime() << endl;
	o.heterotrof();
	o.amfibiu();
	o.setNrpene(150);
	o.setLungime(124);
	o.setVarsta(17);
	cout << endl << o.getSpecie() << " " << o.getVarsta() << " " << o.getNrpene() << " " << o.getLungime() << endl;
}