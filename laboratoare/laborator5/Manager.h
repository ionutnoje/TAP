#pragma once
#ifndef _MANAGER_
#define _MANAGER_
#include <iostream>
#include "Angajat.h"

using namespace std;

class Manager : public Angajat
{
public:
    double getSalar();
    Manager(double tariforar = 5.5, int nrore = 0, int nrsubordonati = 0);
    Manager(const Manager&);
    Manager& operator=(const Manager&);
    friend ostream& operator<<(ostream&, const Manager&);
    friend istream& operator>>(istream&, Manager&);
    ~Manager();
    int getNrSubordonati();

private:
    int nrsubordonati;


};
#endif