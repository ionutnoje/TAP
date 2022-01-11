#include "Manager.h"
#include "Angajat.h"
#include <iostream>

using namespace std;

Manager::Manager(double tariforar, int nrore, int nrsubordonati) :Angajat(tariforar, nrore) 
{ 
    this->nrsubordonati = nrsubordonati; 
}

double Manager::getSalar()
{
    return (this->getSalar());
}

Manager::~Manager()
{
    nrsubordonati = 0;
}

Manager::Manager(const Manager& obj) :Angajat(obj)
{
        nrsubordonati = obj.nrsubordonati;
}

Manager& Manager::operator=(const Manager& param)
{
    

    return *this;
}



istream& operator>>(istream& is, Manager& param)
{
    cout << "introduceti val nrore: " << endl;
    is >> param.nrore;
    cout << "introduceti tariful orar: " << endl;
    is >> param.tariforar;
    cout << "introduceti nr de angajati: " << endl;
    is >> param.nrsubordonati;

    return is;
}

ostream& operator<<(ostream& os, Manager& param)
{

    operator<<(os,(Angajat)param);

    cout << "\nnr subordonati: " << param.getNrSubordonati();
    

    return os;
}

int Manager::getNrSubordonati()
{
    return this->nrsubordonati;
}