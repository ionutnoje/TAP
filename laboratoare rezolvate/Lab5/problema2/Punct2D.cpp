#include "Punct2D.h"
Punct2D::Punct2D(int x, int y) : x(x), y(y) {

}
Punct2D::Punct2D(const Punct2D& param): x(param.x),y(param.y) {

}
Punct2D::~Punct2D() {

}
Punct2D& Punct2D::operator=(const Punct2D& param) {
	if (this != &param) {
		this->x = param.x;
		this->y = param.y;
	}
	return *this;
}
Punct2D Punct2D::operator-() const{
	Punct2D p1(-this->x, -this->y);
	return p1;
}
ostream& operator<<(ostream& os, const Punct2D& param) {
	os << param.x << " " << param.y << " ";
	return os;

}
/*istream& operator>>(istream& is, Punct2D& param) {
	is >> param.x >> param.y;
	return is;
}*/
istream& Punct2D::operator>>(istream& is) {
	is >> this->x >> this->y;
	return is;
}
Punct2D Punct2D::operator+(const Punct2D& punct) const {//this+param metoda membra
	Punct2D rez;
	rez.x = this->x + punct.x;
	rez.y = this->y + punct.y;
	return rez;
}
Punct2D operator-(const Punct2D& punct1, const Punct2D& punct2) {//param1-param2 metoda punctiend
	Punct2D rez;
	rez.x = punct1.x - punct2.x;
	rez.y = punct1.y - punct2.y;
	return rez;
}
/*
Punct2D Punct2D::operator-(const Punct2D& punct) const {//this+param metoda membra
	Punct2D rez;
	rez.x = this->x - punct.x;
	rez.y = this->y - punct.y;
	return rez;
}*/
Punct2D Punct2D::operator*(const Punct2D& punct) const {
	return Punct2D(this->x * punct.x, this->y * punct.y);
}
/*
Punct2D operator*(const Punct2D& punct1, const Punct2D& punct2) {//param1-param2 metoda punctiend
	return Punct2D(punct1.x * punct2.x, punct1.y * punct2.y);
}*/
Punct2D Punct2D::operator/(const Punct2D& punct) const {
	return Punct2D(this->x / punct.x, this->y / punct.y);
}
/*
Punct2D operator/(const Punct2D& punct1,const Punct2D& punct2){//metoda punctiend operator/
	return Punct2D(punct1.x / punct2.x, punct1.y / punct2.y);
}
*/
Punct2D& Punct2D::operator+=(const Punct2D& punct) {
	this->x += punct.x;
	this->y += punct.y;
	return *this;
}
Punct2D& Punct2D::operator-=(const Punct2D& punct) {
	this->x -= punct.x;
	this->y -= punct.y;
	return *this;
}
Punct2D& Punct2D::operator/=(const Punct2D& punct) {
	this->x /= punct.x;
	this->y /= punct.y;
	return *this;
}
Punct2D& Punct2D::operator*=(const Punct2D& punct) {
	this->x *= punct.x;
	this->y *= punct.y;
	return *this;
}
Punct2D& Punct2D::operator--() {//--(*this)
	this->x = this->x - 1;
	this->y = this->y - 1;
	return *this;
}
Punct2D Punct2D::operator--(int a) {//(*this)--
	Punct2D punct = *this;
	--* this;
	return punct;
}
Punct2D& Punct2D::operator++() {//--(*this)
	this->x = this->x + 1;
	this->y = this->y + 1;
	return *this;
}
Punct2D Punct2D::operator++(int a) {//(*this)--
	Punct2D punct = *this;
	++* this;
	return punct;
}
bool Punct2D::operator==(const Punct2D& punct) const {
	return(this->x == punct.x && this->y == punct.y);
}
/*
bool Punct2D::operator<(const Punct2D& punct) const {
	if(this->x<punct.x) return true;
	else if(this->x>punct.x) return false;
	else
	{
		if(this->y<punct.y) return true;
		return false;
	}
}*/
bool Punct2D::operator<=(const Punct2D& punct) const {
	if (this->x < punct.x) return true;
	else if (this->x == punct.x)
		return this->y <= punct.y;
	else return false;
	
}
bool Punct2D::operator>(const Punct2D& punct) const {
	if (this->x > punct.x) return true;
	else if (this->x < punct.x) return false;
	else
	{
		if(this->x==punct.x) return (this->y > punct.y);
	}
}
bool Punct2D::operator>=(const Punct2D& punct) const {
	if (this->x > punct.x) return true;
	else if (this->x == punct.x)
		return this->y >= punct.y;
	else if(this->x>punct.x) return false;
}
bool Punct2D::operator!=(const Punct2D& punct) const {
	return!(this->x == punct.x && this->y == punct.y);
}
bool operator<(const Punct2D& punct1, const Punct2D& punct2) {
	if (punct1.x < punct2.x) return true;
	else if (punct1.x > punct2.x) return false;
	else
		if(punct1.x==punct2.x) return (punct1.y < punct2.y);
}
/*
bool operator<=(const Punct2D& punct1, const Punct2D& punct2) {
	return (punct1.x <= punct2.x) ;
}
bool operator>(const Punct2D& punct1, const Punct2D& punct2) {
	if (punct1.x > punct2.x) return true;
	else if (punct1.x < punct2.x) return false;
	else
		if(punct1.x==punct2.x) return (punct1.y > punct2.y);
}
bool operator>=(const Punct2D& punct1, const Punct2D& punct2) {
	return (punct1.x >= punct2.x) ;
}
bool operator==(const Punct2D& punct1, const Punct2D& punct2) {
	return (punct1.x == punct2.x && punct1.y==punct2.y) ;
}
bool operator!=(const Punct2D& punct1, const Punct2D& punct2) {
	return !(punct1.x == punct2.x && punct1.y==punct2.y) ;
}*/
double Punct2D::distanta(const Punct2D& p) {
	return sqrt((p.x - this->x) * (p.x - this->x) + (p.y - this->y) * (p.y - this->y));
}
void Punct2D::afisare() {
	cout << this->x << " " << this->y << " ";
}
