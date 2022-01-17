#pragma once
#ifndef _ANGAJAT_
#define _ANGAJAT_

class Angajat{

private:
    double tarifOrar = 5.5;
    int nrOre;

public:
    double getSalar();
    double getTarifOrar();

    Angajat(double tarifOrar = 5.5, int nrOre = 0);
    Angajat(const Angajat& ang);
    ~Angajat();
    Angajat& operator=(const Angajat& angajat);

    ostream& perator<<(ostream&);
    istream& operator>>(istream&);

};

#endif