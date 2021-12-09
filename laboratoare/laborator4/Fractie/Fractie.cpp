#include <iostream>
#include "Fractie.h"

using namespace std;

Fractie::Fractie(int numarator,int numitor):numarator(numarator),numitor(numitor){}

Fractie::Fractie(const Fractie& obiect)
{
    this->numarator = obiect.numarator;
    this->numitor = obiect.numitor;

}

Fractie::~Fractie(){}

//schimbare de semn
Fractie Fractie::operator-() const{
    Fractie rez(this->numarator * -1, this->numitor);
    return rez;
}

//cmmdc
int cmmdc(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

// //metoda membra +
// Fractie Fractie::operator+(const Fractie& fr) const{
    
//     Fractie rez;
//     int c = cmmdc(this->numitor, fr.numitor);
//     int numitorcomun = (this->numitor * fr.numitor)/c;
//     int a = numitorcomun/this->numitor;
//     int b = numitorcomun/fr.numitor;
//     rez.numarator = this->numarator * a + fr.numarator * b;
//     rez.numitor = numitorcomun;
//     return rez;
// }



// //metoda membra -
// Fractie Fractie::operator-(const Fractie& fr) const{

//     Fractie rez;
//     int c = cmmdc(this->numitor,fr.numitor);
//     int numitorcomun = (this->numitor * fr.numitor)/c;
//     int a = numitorcomun/this->numitor;
//     int b = numitorcomun/fr.numitor;
//     rez.numarator = this->numarator * a - fr.numarator * b;
//     rez.numitor = numitorcomun;

//     return rez;
// }


// //metoda membra *
// Fractie Fractie::operator*(const Fractie& fr) const{

//     Fractie rez;
//     rez.numarator = this->numarator * fr.numarator;
//     rez.numitor = this->numitor * fr.numitor;

//     return rez;
// }



// Fractie Fractie::operator/(const Fractie& fr) const{

//     Fractie rez;
//     rez.numarator = this->numarator * fr.numitor;
//     rez.numitor = this->numitor * fr.numarator;

//     return rez;
// }


Fractie& Fractie::operator*=(const Fractie& fr){
    this->numarator = this->numarator * fr.numarator;
    this->numitor = this->numitor * fr.numitor;

    return *this;
}


Fractie& Fractie::operator--()//predecrementare
{
    this->numarator = this->numarator - 1;
    return *this;
}

Fractie Fractie::operator--(int a)
{
    Fractie fr = *this;
    --*this;
    return fr;
}


Fractie& Fractie::operator=(const Fractie& fr)
{
    this->numarator=fr.numarator;
	this->numitor=fr.numitor;

    return *this;
}


bool Fractie::operator==(const Fractie& fr) const
{
    Fractie f1 = this->simplifica();
    Fractie f2 = fr.simplifica();

    if(f1.numarator == f2.numarator && f1.numitor == f2.numitor)
    {
        return true;
    }
    else
    {
        return false;
    }

}


bool Fractie::operator<(const Fractie& fr) const
{
    if(this->numarator * fr.numitor < this->numitor * fr.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool Fractie::operator>(const Fractie& fr) const
{
    if(this->numarator * fr.numitor > this->numitor * fr.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool Fractie::operator>=(const Fractie& fr) const
{
    if(this->numarator * fr.numitor >= this->numitor * fr.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool Fractie::operator<=(const Fractie& fr) const
{
    if(this->numarator * fr.numitor <= this->numitor * fr.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}






Fractie Fractie::reciproc() const
{
    Fractie rez(this->numitor,this->numarator);
    return rez;
}




Fractie Fractie::simplifica() const{
	int c=cmmdc(this->numarator,this->numitor);
	return Fractie(this->numarator/c,this->numitor/c);
}



void Fractie::afisare() const{
	cout<<this->numarator<<"/"<<this->numitor<<endl;
}


/////////////////////////////////////////////////////////////////////////////////////////
//metode friend


Fractie operator+(const Fractie& fr1,const Fractie& fr2)
{
    Fractie rez;
    int c = cmmdc(fr1.numitor, fr2.numitor);
    int numitorcomun = (fr1.numitor * fr2.numitor)/c;
    int a = numitorcomun/fr1.numitor;
    int b = numitorcomun/fr2.numitor;
    rez.numarator = fr1.numarator * a + fr2.numarator * b;
    rez.numitor = numitorcomun;
    return rez;
    
}


Fractie operator-(const Fractie& fr1, const Fractie& fr2)
{
    Fractie rez;
    int c = cmmdc(fr1.numitor,fr2.numitor);
    int numitorcomun = (fr1.numitor * fr2.numitor)/c;
    int a = numitorcomun/fr1.numitor;
    int b = numitorcomun/fr2.numitor;
    rez.numarator = fr1.numarator * a - fr2.numarator * b;
    rez.numitor = numitorcomun;
    return rez;
}




Fractie operator*(const Fractie& fr1, const Fractie& fr2)
{
    Fractie rez;
    rez.numitor = fr1.numitor * fr2.numitor;
    rez.numarator = fr1.numarator * fr2.numarator;

    return rez;
}



Fractie operator/(const Fractie& fr1, const Fractie& fr2)
{
    Fractie rez;
    rez.numitor = fr1.numitor * fr2.numarator;
    rez.numarator = fr1.numarator * fr2.numitor;

    return rez;
}

bool operator<(const Fractie& fr1, const Fractie& fr2)
{
    if(fr1.numarator * fr2.numitor < fr1.numitor * fr2.numarator)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool operator>(const Fractie& fr1, const Fractie& fr2)
{
    if(fr1.numarator * fr2.numitor > fr1.numitor * fr2.numarator)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


bool operator<=(const Fractie& fr1, const Fractie& fr2)
{
    if(fr1.numarator * fr2.numitor <= fr1.numitor * fr2.numarator)
    {
        return true;
    }
    else 
    {
        return false;
    }
}



bool operator>=(const Fractie& fr1, const Fractie& fr2)
{
    if(fr1.numarator * fr2.numitor >= fr1.numitor * fr2.numarator)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


bool operator==(const Fractie& fr1, const Fractie& fr2)
{
    Fractie f1 = fr1.simplifica();
    Fractie f2 = fr2.simplifica();

    if(f1.numarator == f2.numarator && f1.numitor == f2.numitor)
    {
        return true;
    }
    else
    {
        return false;
    }
}