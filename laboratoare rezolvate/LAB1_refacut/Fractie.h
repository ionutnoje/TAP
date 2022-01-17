#pragma once
#ifndef _FRACTIE_
#define _FRACTIE_

class Fractie{

private:
    int numarator,numitor;

public:
    Fractie(int numarator = 0, int numitor = 1);
    Fractie(const Fractie& frac);
    ~Fractie();

    Fractie inmultire(const Fractie& frac);
    Fractie impartire(const Fractie& frac);
    Fractie adunare(const Fractie& frac);
    Fractie scadere(const Fractie& frac);

    void print();


};
#endif