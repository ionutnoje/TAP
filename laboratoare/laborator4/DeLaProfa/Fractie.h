#pragma once
#ifndef _FRACTIE_H
#define _FRACTIE_H
#include <iostream>
using namespace std;
class Fractie{
	int numarator,numitor;
public:
	Fractie(int numarator=0,int numitor=1);
	Fractie(const Fractie&);
	~Fractie();
	Fractie operator-() const;
	Fractie operator+(const Fractie&) const;//returneaza un alt obiect reprezentand suma obiectului
									  //curent cu parametrul dat
	friend Fractie operator-(const Fractie&,const Fractie&);//returneaza un alt obiect reprezentand 
															//diferenta a cei doi param: param1-param2
	Fractie operator*(const Fractie&) const;//imultirea obiectul curent cu parametrul dat
	Fractie operator/(const Fractie&) const;//impartima obiectul curent cu parametrul dat
	//friend Fractie operator/(const Fractie&,const Fractie&);
	friend int cmmdc(int,int);
	Fractie& operator*=(const Fractie&);//NU poate fi freind intrucat schimba obiectul curent
										//il inmulteste cu parametrul dat
	Fractie& operator--();// --fractie; predecrementare
						  //scadem din obiectul curent -1
	Fractie operator--(int a);// fractie--; postdecrementare
						//scadem din obiectul curent -1
	Fractie& operator=(const Fractie&);
	bool operator==(const Fractie&) const;//comparam obiectul curent cu parametrul dat
	friend bool operator<(const Fractie&,const Fractie&);//comparam cei doi parametri
	Fractie simplifica() const;
	Fractie reciproc() const;
	friend ostream& operator<<(ostream&, const Fractie&);
	friend istream& operator>>(istream&, Fractie&);
	void afisare() const;//va fi inlocuit cu supraincarcarea operatorului <<
};
#endif