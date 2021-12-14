#include "Manager.h"
#include "Angajat.h"
#include <iostream>

using namespace std;

Manager::Manager(double tariforar, int nrore, int nrsubordonati) :Angajat(tariforar, nrore) { this->nrsubordonati = nrsubordonati; }

double Manager::getSalar()
{
    //return (this->tariforar * this->nrore) + (50/100) * (this->tariforar * this->nrore);
    return (this->getSalar());
}


Manager::Manager(const Manager& obj) :Angajat(obj)
{
    //Angajat(obj); // nu se apeleaza separat pe linie noua constructorul de copiere al clasei de baza
        //ci direct dupa

}/*

Manager& Manager::operator=(const Manager& param)
{
    operator(param);
    this->nrsubordonati = param.nrsubordonati;

    return *this;
}



istream& operator>>(istream& is, Angajat& param)
{
    operator>>(is, (Angajat)param);
    return is;
}*/
