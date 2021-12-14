#pragma once
#ifndef _ANGAJAT_
#define _ANGAJAT_

#include <iostream>
using namespace std;


class Angajat {

public:
    Angajat(double tariforar = 5.5, int nrore = 0);
    Angajat(const Angajat& obiect);
    virtual ~Angajat();
    Angajat& operator=(const Angajat&);
    double getTariforar();
    virtual double getSalar();
    friend ostream& operator<<(ostream&, const Angajat&);
    friend istream& operator>>(istream&, Angajat&);
    int getNrOre();
    // inline double getTarifOrar(){return tariforar;};
    // inline int getNrOre(){return nrore;};
    // virtual inline double getSalar(){return (tariforar * nrore);};



protected:
    double tariforar;
    int nrore;




};
#endif
