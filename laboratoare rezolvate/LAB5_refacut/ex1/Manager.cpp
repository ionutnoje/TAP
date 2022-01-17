#include "Manager.h"

Manager::Manager(int nrAngajati, int nrOre, double tarifOrar):Angajat(nrOre,tarifOrar),nrAngajati(nrAngajati){}
Manager::Manager(const Manager& manager){
	Angajat::Angajat(manager);
	nrAngajati = manager.nrAngajati;
}

Manager::~Manager(){}

double Manager::getSalar() {
	return nrOre * tarifOrar * 1.5;
}

Manager& Manager::operator=(const Manager& manager)
{
	Angajat::operator=((Angajat)manager);
	this->nrAngajati = manager.nrAngajati;
}

ostream& operator<<(ostream& os, const Manager& manager)
{
	os << (Angajat)manager;
	os << " " << manager.nrAngajati;
	return os;
}

// ostream& Manager::operator<<(ostream& os)
// {
// 	((Angajat*)this)->operator<<(os);
// 	os << " " << param.nrAngajati;
// 	return os;
// }


istream& Manager::operator>>(istream& is) {
	((Angajat*)this)->operator>>(is); 
	cout << "Dati nr de angajati: ";
	is >> this->nrAngajati;
	return is;
}

