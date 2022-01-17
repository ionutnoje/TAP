#include<iostream>
#include"Fractie.h"
using namespace std;
Fractie::Fractie(int numarator, int numitor) :numarator(numarator), numitor(numitor) {}
Fractie::Fractie(const Fractie& fr) {
	this->numarator = fr.numarator;
	this->numitor = fr.numitor;
}
Fractie::~Fractie() {}

// + clasa/friend
Fractie Fractie::operator+(const Fractie& fr) const
{
    Fractie fr;
    

    return fr;
}

Fractie operator+(const Fractie& fr1, const Fractie& fr2)
{
    Fractie rez;

    return rez;
}
//la fel pentru -,*,/


//+= 
Fractie& Fractie::operator+=(const Fractie& fr)
{
    this->numarator = this->numarator + fr.numarator;
    return *this;
}
//la fel pentru -=,*=,/=



//-- pre si post
Fractie& Fractie::operator--()
{
	this->numarator = this->numarator - this->numitor;
    return *this;
}

Fractie Fractie::operator--(int a)
{
    Fractie rez;
    rez = *this;
    --*this;
    return rez;
}
// la fel pentru ++



Fractie& Fractie::operator=(const Fractie& fr)
{
    this->numarator = fr.numarator;
    this->numitor = fr.numitor;

    return *this;
}


bool Fractie::operator==(const Fractie& fr) const
{
    //verificari pentru egalitate cu returnuri
}
// la fel pentru <=, >=, !=, <, >



// <<
//friend
    ostream& operator<<(ostream& os, const Fractie& fr)
    {
        os << fr.numarator << "/" << fr.numitor;
        return os;
    }
//clasa
    ostream& Fractie::operator<<(ostream& os)const
    {
        os << this->numarator << "/" << this->numitor;
        return os;
    }


// >>
//friend
    istream& operator>>(istream& is, Fractie& fr)
    {
        is >> fr.numarator >> fr.numitor;
	    return is;
    }
//clasa
    istream& Fractie::operator>>(istream& is) const{
        is >> this->numarator >> this->numitor;
        return is;
    }



