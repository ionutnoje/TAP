#pragma once
#ifndef _DREAPTA_
#define _dREAPTA_


class Dreapta{

private:
    int m,n;


public:
    Dreapta(int m =1, int n = 0);
    Dreapta(const Dreapta& dr);
    ~Dreapta();
    void Afisare();


};
#endif