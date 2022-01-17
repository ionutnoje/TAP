#pragma once
#ifndef _PUNCT3D_
#define _PUNCT3D_
#include <iostream>
#include "Punct2D.h"
using namespace std;
class Punct3D: public Punct2D
{
private:
	int z;
public:
	Punct3D(int x = 0, int y = 0, int z = 0);
	Punct3D(const Punct3D& param);
	~Punct3D();
	Punct3D& operator=(const Punct3D&);
	Punct3D operator-() const;
	Punct3D operator+(const Punct3D&) const;//returneaza un alt obiect reprezentand suma obiectului
									  //curent cu parametrul dat
	//friend Punct3D operator+(const Punct3D&, const Punct3D&);
	//Punct3D operator-(const Punct3D&) const;
	friend Punct3D operator-(const Punct3D&, const Punct3D&);//returneaza un alt obiect reprezentand 
															//diferenta a cei doi param: param1-param2
	Punct3D operator*(const Punct3D&) const;//imultirea obiectul curent cu parametrul dat
	//friend Punct3D operator*(const Punct3D&, const Punct3D&);
	Punct3D operator/(const Punct3D&) const;//impartima obiectul curent cu parametrul dat
	//friend Punct3D operator/(const Punct3D&,const Punct3D&);
	Punct3D& operator+=(const Punct3D&);
	Punct3D& operator-=(const Punct3D&);
	Punct3D& operator/=(const Punct3D&);
	Punct3D& operator*=(const Punct3D&);//NU poate fi freind intrucat schimba obiectul curent
										//il inmulteste cu parametrul dat
	Punct3D& operator--();// --Punct3D; predecrementare
						  //scadem din obiectul curent -1
	Punct3D& operator++();
	Punct3D operator++(int a);
	Punct3D operator--(int a);// Punct3D--; postdecrementare
						//scadem din obiectul curent -1
	//Punct3D& operator=(const Punct3D&);
	bool operator==(const Punct3D&) const;//comparam obiectul curent cu parametrul dat
	//bool operator<(const Punct3D&) const;
	bool operator<=(const Punct3D&) const;
	bool operator>(const Punct3D&) const;
	bool operator>=(const Punct3D&) const;
	bool operator!=(const Punct3D&) const;
	friend bool operator<(const Punct3D&, const Punct3D&);//comparam cei doi parametri
	//friend bool operator<=(const Punct3D&, const Punct3D&);
	//friend bool operator>(const Punct3D&, const Punct3D&);
	//friend bool operator>=(const Punct3D&, const Punct3D&);
	//friend bool operator==(const Punct3D&, const Punct3D&);
	//friend bool operator!=(const Punct3D&, const Punct3D&);
	friend ostream& operator<<(ostream&, const Punct3D&);
	//ostream& operator<<(ostream&) const;
	istream& operator>>(istream&);
	//friend istream& operator>>(istream&, Punct3D&);
	//double distanta(const Punct2D& p) override;
	void afisare();
};
#endif


