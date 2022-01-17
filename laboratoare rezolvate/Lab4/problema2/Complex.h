#pragma once
#ifndef _COMPLEX_
#define _COMPLEX_
#include <iostream>
using namespace std;
class Complex {
private:
	float re, im;
public:
	Complex(float re = 0, float im = 0);
	Complex(const Complex&);
	~Complex();
	Complex operator-() const;
	Complex operator+(const Complex&) const;
	//friend Complex operator+(const Complex&, const Complex&);
	Complex operator-(const Complex&) const;
	friend Complex operator-(const Complex&, const Complex&);
	Complex operator*(const Complex&) const;
	//friend Complex operator*(const Complex&, const Complex&);
	Complex operator/(const Complex&) const;
	//friend Complex operator/(const Complex&,const Complex&);
	Complex& operator+=(const Complex&);
	Complex& operator-=(const Complex&);
	Complex& operator/=(const Complex&);
	Complex& operator*=(const Complex&);
	Complex& operator--();
	Complex& operator++();
	Complex operator++(int a);
	Complex operator--(int a);
	Complex& operator=(const Complex&);
	bool operator==(const Complex&) const;
	//bool operator<(const Complex&) const;
	bool operator<=(const Complex&) const;
	bool operator>(const Complex&) const;
	bool operator>=(const Complex&) const;
	bool operator!=(const Complex&) const;
	friend bool operator<(const Complex&, const Complex&);
	//friend bool operator<=(const Complex&, const Complex&);
	//friend bool operator>(const Complex&, const Complex&);
	//friend bool operator>=(const Complex&, const Complex&);
	//friend bool operator==(const Complex&, const Complex&);
	//friend bool operator!=(const Complex&, const Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
	//ostream& Complex::operator<<(ostream&) const;
	//istream& Complex::operator>>(istream&) const;
	friend istream& operator>>(istream&, Complex&);
	void afisare() const;//va fi inlocuit cu supraincarcarea operatorului <<
	friend int main();
	friend float modul(float, float);
	friend Complex conjucat(float, float);
};
#endif

