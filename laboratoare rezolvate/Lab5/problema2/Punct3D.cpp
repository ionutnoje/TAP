#include "Punct3D.h"
Punct3D::Punct3D(int x, int y, int z) : Punct2D(x,y),z(z) {

}
Punct3D::Punct3D(const Punct3D& param) : Punct2D(param.x, param.y), z(param.z){

}
Punct3D::~Punct3D() {
	Punct2D::~Punct2D();
}
Punct3D& Punct3D::operator=(const Punct3D& param) {
	if (this != &param) {
		Punct2D::operator=((Punct2D)(param));
		this->z = param.z;
	}
	return *this;
}
Punct3D Punct3D::operator-() const {
	Punct3D p1(-this->x, -this->y,-this->z);
	return p1;
}
ostream& operator<<(ostream& os, const Punct3D& param) {
	os << (Punct2D)param;
	os<< param.z << endl;
	return os;

}

istream& Punct3D::operator>>(istream& is) {
	cout << "Dati x, y, z:" << endl;
	((Punct2D*)this)->operator>>(is);
	is >> z;
	return is;
}
Punct3D Punct3D::operator+(const Punct3D& punct) const {//this+param metoda membra
	Punct3D rez;
	rez.x = this->x + punct.x;
	rez.y = this->y + punct.y;
	rez.z = this->z + punct.z;
	return rez;
}
Punct3D operator-(const Punct3D& punct1, const Punct3D& punct2) {//param1-param2 metoda punctiend
	Punct3D rez;
	rez.x = punct1.x - punct2.x;
	rez.y = punct1.y - punct2.y;
	rez.z = punct1.z - punct2.z;
	return rez;
}
/*
Punct3D Punct3D::operator-(const Punct3D& punct) const {//this+param metoda membra
	Punct3D rez;
	rez.x = this->x - punct.x;
	rez.y = this->y - punct.y;
	rez.z = this->z - punct.z;
	return rez;
}*/
Punct3D Punct3D::operator*(const Punct3D& punct) const {
	return Punct3D(this->x * punct.x, this->y * punct.y, this->z*punct.z);
}
/*
Punct3D operator*(const Punct3D& punct1, const Punct3D& punct2) {//param1-param2 metoda punctiend
	return Punct3D(punct1.x * punct2.x, punct1.y * punct2.y, punct1.z * punct2.z);
}*/
Punct3D Punct3D::operator/(const Punct3D& punct) const {
	return Punct3D(this->x / punct.x, this->y / punct.y, this->z / punct.z);
}
/*
Punct3D operator/(const Punct3D& punct1,const Punct3D& punct2){//metoda punctiend operator/
	return Punct3D(punct1.x / punct2.x, punct1.y / punct2.y, punct1.z / punct2.z);
}
*/
Punct3D& Punct3D::operator+=(const Punct3D& punct) {
	this->x += punct.x;
	this->y += punct.y;
	this->z += punct.z;
	return *this;
}
Punct3D& Punct3D::operator-=(const Punct3D& punct) {
	this->x -= punct.x;
	this->y -= punct.y;
	this->z -= punct.z;
	return *this;
}
Punct3D& Punct3D::operator/=(const Punct3D& punct) {
	this->x /= punct.x;
	this->y /= punct.y;
	this->z /= punct.z;
	return *this;
}
Punct3D& Punct3D::operator*=(const Punct3D& punct) {
	this->x *= punct.x;
	this->y *= punct.y;
	this->z *= punct.z;
	return *this;
}
Punct3D& Punct3D::operator--() {//--(*this)
	this->x = this->x - 1;
	this->y = this->y - 1;
	this->z = this->z - 1;
	return *this;
}
Punct3D Punct3D::operator--(int a) {//(*this)--
	Punct3D punct = *this;
	--* this;
	return punct;
}
Punct3D& Punct3D::operator++() {//--(*this)
	this->x = this->x + 1;
	this->y = this->y + 1;
	this->z = this->z + 1;
	return *this;
}
Punct3D Punct3D::operator++(int a) {//(*this)--
	Punct3D punct = *this;
	++* this;
	return punct;
}
bool Punct3D::operator==(const Punct3D& punct) const {
	Punct2D temp1 = *this;
	Punct2D temp2 = punct;
	if (temp1 == temp2)return this->z == punct.z;
	else return false;
}
/*
bool Punct3D::operator<(const Punct3D& punct) const {
	Punct2D temp1 = *this;
	Punct2D temp2 = punct;
	if (temp1 < temp2)return true;
	else if (temp1 > temp2) return false;
	else return this->z < punct.z;
}*/
bool Punct3D::operator<=(const Punct3D& punct) const {

	Punct2D temp1 = *this;
	Punct2D temp2 = punct;
	if (temp1 < temp2)return true;
	else if (temp1 > temp2) return false;
	else return this->z == punct.z;
}
bool Punct3D::operator>(const Punct3D& punct) const {
	Punct2D temp1 = *this;
	Punct2D temp2 = punct;
	if (temp1 < temp2)return true;
	else if (temp1 > temp2) return false;
	else return this->z < punct.z;
}
bool Punct3D::operator>=(const Punct3D& punct) const {
	Punct2D temp1 = *this;
	Punct2D temp2 = punct;
	if (temp1 > temp2)return true;
	else if (temp1 < temp2) return false;
	else return this->z == punct.z;
}
bool Punct3D::operator!=(const Punct3D& punct) const {
	Punct2D temp1 = *this;
	Punct2D temp2 = punct;
	if (temp1 != temp2)return true;
	else return !(this->z == punct.z);
}
bool operator<(const Punct3D& punct1, const Punct3D& punct2) {
	Punct2D temp1 = punct1;
	Punct2D temp2 = punct2;
	if (temp1 < temp2)return true;
	else if (temp1 > temp2) return false;
	else return punct1.z < punct2.z;
}
/*
bool operator<=(const Punct3D& punct1, const Punct3D& punct2) {
	Punct2D temp1 = punct1;
	Punct2D temp2 = punct2;
	if (temp1 < temp2)return true;
	else if (temp1 > temp2) return false;
	else return punct1.z == punct2.z;
}
bool operator>(const Punct3D& punct1, const Punct3D& punct2) {
	Punct2D temp1 = punct1;
	Punct2D temp2 = punct2;
	if (temp1 > temp2)return true;
	else if (temp1 < temp2) return false;
	else return punct1.z > punct2.z;
}
bool operator>=(const Punct3D& punct1, const Punct3D& punct2) {
	Punct2D temp1 = punct1;
	Punct2D temp2 = punct2;
	if (temp1 > temp2)return true;
	else if (temp1 < temp2) return false;
	else return punct1.z == punct2.z;
}
bool operator==(const Punct3D& punct1, const Punct3D& punct2) {
	Punct2D temp1 = punct1;
	Punct2D temp2 = punct2;
	if (temp1 == temp2)return punct1.z == punct2.z;
	else return false;
}
bool operator!=(const Punct3D& punct1, const Punct3D& punct2) {
	Punct2D temp1 = punct1;
	Punct2D temp2 = punct2;
	if (temp1 != temp2)return punct1.z != punct2.z;
	else return false;
}*/
/*double Punct3D::distanta(const Punct2D& p) {
	return sqrt((p.x - this->x) * (p.x - this->x) - (p.y - this->y) * (p.y - this->y));
}*/
void Punct3D::afisare() {
	cout << this->x << " " << this->y << " " << " " << this->z << endl;
}