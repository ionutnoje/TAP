#pragma once
#ifndef _PUNCT_
#define _PUNCT_

class Punct{

private:
    int x,y;
    static Dreapta dr;
    static int contorpctsemiplandr;
    static int contorpctsemiplanst;
    static int contorpctdr;


public:
    Punct(int x, int y);
    Punct(const Punct& punct);
    ~Punct();
    void Afisare();

    friend class Dreapta;
    

};
#endif