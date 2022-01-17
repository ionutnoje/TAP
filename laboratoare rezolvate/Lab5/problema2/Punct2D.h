#pragma once
#ifndef _PUNCT2D_
#define _PUNCT2D_
#include <iostream>
using namespace std;
class Punct2D
{
protected:
	int x, y;
public:
	Punct2D(int x = 0, int y = 0);
	Punct2D(const Punct2D& param);
	virtual ~Punct2D();
	Punct2D& operator=(const Punct2D&);
	Punct2D operator-() const;
	Punct2D operator+(const Punct2D&) const;//returneaza un alt obiect reprezentand suma obiectului
									  //curent cu parametrul dat
	//friend Punct2D operator+(const Punct2D&, const Punct2D&);
	//Punct2D operator-(const Punct2D&) const;
	friend Punct2D operator-(const Punct2D&, const Punct2D&);//returneaza un alt obiect reprezentand 
															//diferenta a cei doi param: param1-param2
	Punct2D operator*(const Punct2D&) const;//imultirea obiectul curent cu parametrul dat
	//friend Punct2D operator*(const Punct2D&, const Punct2D&);
	Punct2D operator/(const Punct2D&) const;//impartima obiectul curent cu parametrul dat
	//friend Punct2D operator/(const Punct2D&,const Punct2D&);
	Punct2D& operator+=(const Punct2D&);
	Punct2D& operator-=(const Punct2D&);
	Punct2D& operator/=(const Punct2D&);
	Punct2D& operator*=(const Punct2D&);//NU poate fi freind intrucat schimba obiectul curent
										//il inmulteste cu parametrul dat
	Punct2D& operator--();// --Punct2D; predecrementare
						  //scadem din obiectul curent -1
	Punct2D& operator++();
	Punct2D operator++(int a);
	Punct2D operator--(int a);// Punct2D--; postdecrementare
						//scadem din obiectul curent -1
	//Punct2D& operator=(const Punct2D&);
	bool operator==(const Punct2D&) const;//comparam obiectul curent cu parametrul dat
	//bool operator<(const Punct2D&) const;
	bool operator<=(const Punct2D&) const;
	bool operator>(const Punct2D&) const;
	bool operator>=(const Punct2D&) const;
	bool operator!=(const Punct2D&) const;
	friend bool operator<(const Punct2D&, const Punct2D&);//comparam cei doi parametri
	//friend bool operator<=(const Punct2D&, const Punct2D&);
	//friend bool operator>(const Punct2D&, const Punct2D&);
	//friend bool operator>=(const Punct2D&, const Punct2D&);
	//friend bool operator==(const Punct2D&, const Punct2D&);
	//friend bool operator!=(const Punct2D&, const Punct2D&);
	friend ostream& operator<<(ostream&, const Punct2D&);
	//ostream& operator<<(ostream&) const;
	istream& operator>>(istream&) ;
	virtual double distanta(const Punct2D& p);
	void afisare();
	//friend istream& operator>>(istream&, Punct2D&);
};
#endif
