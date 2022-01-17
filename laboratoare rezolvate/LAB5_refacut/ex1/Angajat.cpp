#include "Angajat.h"
Angajat::Angajat(int nrOre, double tarifOrar) : nrOre(nrOre), tarifOrar(tarifOrar) {

}
Angajat::Angajat(const Angajat& param): nrOre(param.nrOre),tarifOrar(tarifOrar) {

}
Angajat::~Angajat() {}

Angajat& Angajat::operator=(const Angajat& param) {
	
    this->nrOre = param.nrOre;
	this->tarifOrar = param.tarifOrar;
	return *this;
}
double Angajat::getSalar() {
	return  this->nrOre * this->tarifOrar;
}
double Angajat::getTarifOrar() {
	return this->tarifOrar;
}
ostream& operator<<(ostream& os, const Angajat& ang) {
	os << ang.tarifOrar << " " << ang.nrOre;
	return os;
}
istream& Angajat::operator>>(istream& is) {
	cout << "Dati tarifOrar si nrOre:";
	is >> this->tarifOrar >> this->nrOre;
	return is;
}