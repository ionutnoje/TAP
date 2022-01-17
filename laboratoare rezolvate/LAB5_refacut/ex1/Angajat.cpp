#include "Angajat.h"

Angajat::Angajat(double tarifOrar, int nrOre):tarifOrar(tarifOrar),nrOre(nrOre){}
Angajat::Angajat(const Angajat& ang){
    this->tarifOrar = ang.tarifOrar;
    this->nrOre = ang.nrOre;
}

Angajat::~Angajat(){}

Angajat& Angajat::operator=(const Angajat& angajat)
{
    this->nrOre = angajat.nrOre;
    this->tarifOrar = angajat.tarifOrar;
    
    return *this;
}

double Angajat::getSalar()
{
    return this->nrOre*this->tarifOrar;
}

double Angajat::getTarifOrar()
{
    return this->tarifOrar;
}

ostream& Angajat::operator<<(ostream& os){
    os << "tarif orar: " << this->tarifOrar << " nr ore: " << this->nrOre << endl;
}

istream& Angajat::operator>>(istream& is)
{
    is >> "tarif: " >> this->tarifOrar;
    is >> "nrore" >> this->nrOre;
    return is;
}