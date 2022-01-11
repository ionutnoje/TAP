#include <iostream>
#include "Angajat.h"

using namespace std;


Angajat::Angajat(double tariforar, int nrore) :tariforar(tariforar), nrore(nrore) {}

Angajat::Angajat(const Angajat& obiect)
{
    this->nrore = obiect.nrore;
    this->tariforar = obiect.tariforar;
}

Angajat::~Angajat()
{
    this->tariforar = 0;
    this->nrore = 0;
}

ostream& operator<<(ostream& os, const Angajat& ang)
{
    os << "tariforar= " << ang.tariforar<< "\nnrore= " << ang.nrore << endl;
    return os;
}


istream& operator>>(istream& is, Angajat& ang)
{
    cout << "introduceti val nrore: " << endl;
    is >> ang.nrore;
    cout << "introduceti tariful orar: " << endl;
    is >> ang.tariforar;
    return is;
}

Angajat& Angajat::operator=(const Angajat& ang)
{
    this->nrore = ang.nrore;
    this->tariforar = ang.tariforar;

    return *this;
}

double Angajat::getSalar()
{
    return this->tariforar * this->nrore;
}

double Angajat::getTariforar()
{
    return this->tariforar;
}

int Angajat::getNrOre()
{
    return this->nrore;
}