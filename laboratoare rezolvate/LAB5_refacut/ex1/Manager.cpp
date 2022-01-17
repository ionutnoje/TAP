#include "Manager.h"
Manager::Manager(int nrAngajati, int nrOre, double tarifOrar) :Angajat(nrOre, tarifOrar), nrAngajati(nrAngajati) {}
Manager::Manager(const Manager& param):Angajat(param), nrAngajati(param.nrAngajati) {}
Manager::~Manager() {}
Manager& Manager::operator=(const Manager& param) {

	Angajat::operator=((Angajat)param);
	this->nrAngajati = param.nrAngajati;
	
	return *this;
}
double Manager::getSalar() {
	return nrOre * tarifOrar * 1.5;
}
ostream& operator<<(ostream& os, const Manager& param) {
	//os = operator<<(os, (Angajat)param);
	os << (Angajat)param;
	os << " " << param.nrAngajati;
	return os;
}
istream& Manager::operator>>(istream& is) {
	((Angajat*)this)->operator>>(is); //operator>> este functie MEMBRA 
	cout << "Dati nr de angajati: ";
	is >> this->nrAngajati;
	return is;
}