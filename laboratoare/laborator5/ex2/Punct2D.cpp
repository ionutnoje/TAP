#include "Punct2D.h"
#include<iostream>

using namespace std;

Punct2D::Punct2D(int x, int y):x(x),y(y){}

Punct2D::Punct2D(const Punct2D& p)
{
	x = p.x;
	y = p.y;
}

Punct2D::~Punct2D()
{
	x = 0;
	y = 0;
}

Punct2D& Punct2D::operator=(const Punct2D& p)
{
	x = p.x;
	y = p.y;
	return *this;
}

void Punct2D::distanta(const Punct2D& p)
{
	cout << "Distanta dintre 2 puncte in plan: " << sqrt(pow((x - p.x), 2) + pow((y - p.y), 2)) << endl;
}

int Punct2D::getCoordonateX()
{
	return x;
}

int Punct2D::getCoordonateY()
{
	return y;
}

bool Punct2D::operator==(const Punct2D& p) const {
	return (x == p.x && y == p.y);
}

bool Punct2D::operator<(const Punct2D& p) const
{
	if(x == p.x)
		return (y < p.y);
	else
		return (x < p.x);
}

bool Punct2D::operator>(const Punct2D& p) const
{
	if (x == p.x)
		return (y > p.y);
	else
		return (x > p.x);
}

bool Punct2D::operator<=(const Punct2D& p) const
{
	if(x == p.x)
		return (y <= p.y);
	else
		return (x <= p.x);
}

bool Punct2D::operator>=(const Punct2D& p) const
{
	if (x == p.x)
		return (y >= p.y);
	else
		return (x >= p.x);
}

Punct2D Punct2D::operator-() const
{
	return Punct2D();
}

Punct2D Punct2D::operator+(const Punct2D&) const
{
	return Punct2D();
}

Punct2D Punct2D::operator-(const Punct2D&) const
{
	return Punct2D();
}

Punct2D Punct2D::operator*(const Punct2D&) const
{
	return Punct2D();
}

Punct2D Punct2D::operator/(const Punct2D&) const
{
	return Punct2D();
}

Punct2D& Punct2D::operator*=(const Punct2D& p)
{
	return *this;
}

Punct2D& Punct2D::operator/=(const Punct2D& p)
{
	return *this;
}

Punct2D& Punct2D::operator++()
{
	return *this;
}

Punct2D& Punct2D::operator--()
{
	return *this;
}

ostream& operator<<(ostream& os, const Punct2D& p)
{
	os << "x: " << p.x << "\ny: " << p.y;
	return os;
}

istream& operator>>(istream& is, Punct2D& p)
{
	cout << "x: ";
	is >> p.x;
	cout << "y: ";
	is >> p.y;

	return is;
}
