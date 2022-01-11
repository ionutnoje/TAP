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
	Punct2D(const Punct2D& p);
	~Punct2D();
	Punct2D& operator=(const Punct2D& p);

	virtual void distanta(const Punct2D&);
	int getCoordonateX();
	int getCoordonateY();

	bool operator==(const Punct2D&) const;
	bool operator<(const Punct2D&) const;
	bool operator>(const Punct2D&) const;
	bool operator<=(const Punct2D&) const;
	bool operator>=(const Punct2D&) const;

	Punct2D operator-() const;
	
	Punct2D operator+(const Punct2D&) const;
	Punct2D operator-(const Punct2D&) const;
	Punct2D operator*(const Punct2D&) const;
	Punct2D operator/(const Punct2D&) const;


	Punct2D& operator*=(const Punct2D&);
	Punct2D& operator/=(const Punct2D&);

	Punct2D& operator++();
	Punct2D& operator--();

	friend ostream& operator<<(ostream&, const Punct2D&);
	friend istream& operator>>(istream&, Punct2D&);
};

#endif

