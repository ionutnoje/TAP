#include<iostream>
#include"Fractie.h"
using namespace std;
Fractie::Fractie(int numarator, int numitor) :numarator(numarator), numitor(numitor) {}
Fractie::Fractie(const Fractie& fr) {
	this->numarator = fr.numarator;
	this->numitor = fr.numitor;
}
Fractie::~Fractie() {}

// +

Fractie Fractie::operator+(const Fractie& fr) const
{
    Fractie rez;

    return rez;
}

Fractie operator+(const Fractie& fr1, const Fractie& fr2)
{
    Fractie rez

    return rez;
}


// ++

Fractie& Fractie::operator++()
{
    //operatii pe this->numarator = this->numarator +....
    return *this;
}

Fractie Fractie::operator++()
{
    Fractie rez;
    rez = *this;
    ++*this;
    return rez;
}


Fractie& Fractie::operator+=(const Fractie& fr)
{
    this->numarator = this->numarator + fr.numarator;

    return *this;
}


bool Fractie::operator<=(const Fractie& fr)
{
    if(this->numarator * fr.nummitor <= this->numitor * fr.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// <<
//     friend
ostream& operator<<(ostream& os, const Fractie& fr)
{
    os << fr.numarator << "/" << fr.numitor;
    return os;
}

//     clasa
ostream& Fractie::operator<<(ostream& os) const
{
    os << fr.numarator << "/" << fr.numitor;
    return os;
}

istream& operator>>(istream& is, Fractie& fr)
{
    is >> fr.numarator >> fr.numitor;
    return is;
}

istream& Fractie::operator>>(istream& is)
{
    is >> fr.numarator >> fr.numitor;
    return is; 
}


