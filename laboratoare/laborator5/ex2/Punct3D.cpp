#include "Punct3D.h"
#include <math.h>
#include<iostream>

using namespace std;

Punct3D::Punct3D(int x, int y, int z):Punct2D(x, y),z(z)
{

}

Punct3D::Punct3D(const Punct3D& p): Punct2D(p)
{
	z = p.z;
}

Punct3D::~Punct3D()
{
	z = 0;
}

Punct3D& Punct3D::operator=(const Punct3D& p)
{
	if (this != &p)
	{
		Punct3D::operator=(p);
		z = p.z;
	}
	return *this;
}

void Punct3D::distanta(const Punct3D& p)
{
	cout << "Distanta dintre 2 puncte in spatiu: " << sqrt(pow((x - p.x), 2) + pow((y - p.y), 2) + pow((z - p.z), 2)) << endl;
}

bool Punct3D::operator==(const Punct3D&) const
{
	return false;
}

bool Punct3D::operator<(const Punct3D&) const
{
	return false;
}

bool Punct3D::operator>(const Punct3D&) const
{
	return false;
}

bool Punct3D::operator<=(const Punct3D&) const
{
	return false;
}

bool Punct3D::operator>=(const Punct3D&) const
{
	return false;
}

Punct3D Punct3D::operator-() const
{
	return Punct3D();
}

Punct3D Punct3D::operator+(const Punct3D&) const
{
	return Punct3D();
}

Punct3D Punct3D::operator-(const Punct3D&) const
{
	return Punct3D();
}

Punct3D Punct3D::operator*(const Punct3D&) const
{
	return Punct3D();
}

Punct3D Punct3D::operator/(const Punct3D&) const
{
	return Punct3D();
}

Punct3D& Punct3D::operator*=(const Punct3D&)
{
	return *this;
}

Punct3D& Punct3D::operator/=(const Punct3D&)
{
	return *this;
}

Punct3D& Punct3D::operator++()
{
	return *this;
}

Punct3D& Punct3D::operator--()
{
	return *this;
}

ostream& operator<<(ostream& os, const Punct3D& p)
{
	os << "x: " << p.x << "  y: " << p.y << "  z: " << p.z;
	return os;
}

istream& operator>>(istream& is, Punct3D& p)
{
	cout << "x: ";
	is >> p.x;
	cout << "y: ";
	is >> p.y;
	cout << "z: ";
	is >> p.z;

	return is;
}
