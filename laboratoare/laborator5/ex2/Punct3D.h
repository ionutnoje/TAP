#pragma once
#ifndef _PUNCT3D_
#define _PUNCT3D_
#include <iostream>
#include "Punct2D.h"

class Punct3D : public Punct2D
{
protected:
	int z;

public:
	Punct3D(int x = 0, int y = 0, int z = 0);
	Punct3D(const Punct3D& p);
	~Punct3D();
	Punct3D& operator=(const Punct3D& p);

	void distanta(const Punct3D& p);

	bool operator==(const Punct3D&) const;
	bool operator<(const Punct3D&) const;
	bool operator>(const Punct3D&) const;
	bool operator<=(const Punct3D&) const;
	bool operator>=(const Punct3D&) const;

	Punct3D operator-() const;

	Punct3D operator+(const Punct3D&) const;
	Punct3D operator-(const Punct3D&) const;
	Punct3D operator*(const Punct3D&) const;
	Punct3D operator/(const Punct3D&) const;


	Punct3D& operator*=(const Punct3D&);
	Punct3D& operator/=(const Punct3D&);

	Punct3D& operator++();
	Punct3D& operator--();

	friend ostream& operator<<(ostream&, const Punct3D&);
	friend istream& operator>>(istream&, Punct3D&);
};

#endif
