#pragma once
#ifndef _MATRICE_
#define _MATRICE_
#include <iostream>
using namespace std;
class Matrice {
private:
	int nrLinii, nrColoane;
	int** elemente;
public:
	Matrice(int nrLinii = 0, int nrCol = 0);
	Matrice(const Matrice&);
	~Matrice();
	Matrice operator-() const;
	Matrice operator+(const Matrice&) const;
	//friend Matrice operator+(const Matrice&, const Matrice&);
	Matrice operator-(const Matrice&) const;
	friend Matrice operator-(const Matrice&, const Matrice&);
	Matrice operator*(const Matrice&) const;
	//friend Matrice operator*(const Matrice&, const Matrice&);
	Matrice operator/(const Matrice&) const;
	//friend Matrice operator/(const Matrice&,const Matrice&);
	Matrice& operator+=(const Matrice&);
	Matrice& operator-=(const Matrice&);
	Matrice& operator/=(const Matrice&);
	Matrice& operator*=(const Matrice&);
	Matrice& operator--();
	Matrice& operator++();
	Matrice operator++(int a);
	Matrice operator--(int a);
	Matrice& operator=(const Matrice&);
	bool operator==(const Matrice&) const;
	//bool operator<(const Matrice&) const;
	bool operator<=(const Matrice&) const;
	bool operator>(const Matrice&) const;
	bool operator>=(const Matrice&) const;
	bool operator!=(const Matrice&) const;
	friend bool operator<(const Matrice&, const Matrice&);
	//friend bool operator<=(const Matrice&, const Matrice&);
	//friend bool operator>(const Matrice&, const Matrice&);
	//friend bool operator>=(const Matrice&, const Matrice&);
	//friend bool operator==(const Matrice&, const Matrice&);
	//friend bool operator!=(const Matrice&, const Matrice&);
	friend ostream& operator<<(ostream&, const Matrice&);
	//ostream& Matrice::operator<<(ostream&) const;
	//istream& Matrice::operator>>(istream&) const;
	friend istream& operator>>(istream&, Matrice&);
	void afisare() const;//va fi inlocuit cu supraincarcarea operatorului <<
	int* operator[](int index) const;
	friend int sumael(int , int , int**);
	friend int main();
};
#endif

