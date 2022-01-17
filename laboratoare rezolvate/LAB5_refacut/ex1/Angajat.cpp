#include "Angajat.h"

Angajat::Angajat(int nrOre, double tarifOrar):nrOre(nrOre),tarifOrar(tarifOrar){}
Angajat::Angajat(const Angajat& angajat){
	this->nrOre = angajat.nrOre;
	this->tarifOrar = angajat.tarifOrar;
}
Angajat::~Angajat(){}

double Angajat::getSalar()
{
	return this->nrOre * this->tarifOrar;
}

double Angajat::getTarifOrar()
{
	return this->tarifOrar;
}

Angajat& Angajat::operator=(const Angajat& ang)
{
	this->nrOre = ang.nrOre;
	this->tarifOrar = ang.tarifOrar;
	return *this;
}


//friend
ostream& operator<<(ostream& os, const Angajat& ang) 
{
	os << ang.tarifOrar << " " << ang.nrOre;
	return os;
}

//clasa
// ostream& Angajat::operator<<(ostream& os)
// {
// 	os << this->tarifOrar << " " << this->nrOre;
//  	return os;
// }


//clasa
// istream& Angajat::operator>>(istream& is) 
// {
// 	cout << "Dati tarifOrar si nrOre:";
// 	is >> this->tarifOrar >> this->nrOre;
// 	return is;
// }

//friend
istream& operator>>(istream& is, Angajat& ang)
{
	cout << "Dati tarifOrar si nrOre:";
	is >> ang.tarifOrar >> ang.nrOre;
	return is;
}