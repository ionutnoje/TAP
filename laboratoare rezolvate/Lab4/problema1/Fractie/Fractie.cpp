#include<iostream>
#include"Fractie.h"
using namespace std;
Fractie::Fractie(int numarator, int numitor) :numarator(numarator), numitor(numitor) {}
Fractie::Fractie(const Fractie& fr) {
	this->numarator = fr.numarator;
	this->numitor = fr.numitor;
}
Fractie::~Fractie() {}
Fractie Fractie::operator-() const {//schimbare de semn
	Fractie rez(-1 * this->numarator, this->numitor);
	return rez;
}
int cmmdc(int a, int b) {
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
Fractie Fractie::operator+(const Fractie& fr) const {//this+param metoda membra
	Fractie rez;
	int c = cmmdc(this->numitor, fr.numitor);
	int numitorcomun = this->numitor * fr.numitor / c;
	int a = numitorcomun / this->numarator;
	int b = numitorcomun / fr.numarator;
	rez.numarator = this->numarator * a + fr.numarator * b;
	rez.numitor = numitorcomun;
	return rez;
}
/*
Fractie operator+(const Fractie& fr1, const Fractie& fr2) {
	Fractie rez;
	int c = cmmdc(fr1.numitor, fr2.numitor);
	int numitorcomun = fr1.numitor * fr2.numitor / c;
	int a = numitorcomun / fr1.numarator;
	int b = numitorcomun / fr2.numarator;
	rez.numarator = fr1.numarator * a + fr2.numarator * b;
	rez.numitor = numitorcomun;
	return rez;
}*/
Fractie operator-(const Fractie& fr1, const Fractie& fr2) {//param1-param2 metoda friend
	Fractie rez;
	int c = cmmdc(fr1.numitor, fr2.numitor);
	int numitorcomun = fr1.numitor * fr2.numitor / c;
	int a = numitorcomun / fr1.numarator;
	int b = numitorcomun / fr2.numarator;
	rez.numarator = fr1.numarator * a - fr2.numarator * b;
	rez.numitor = numitorcomun;
	return rez;
}
/*
Fractie Fractie::operator-(const Fractie& fr) const {//this+param metoda membra
	Fractie rez;
	int c = cmmdc(this->numitor, fr.numitor);
	int numitorcomun = this->numitor * fr.numitor / c;
	int a = numitorcomun / this->numarator;
	int b = numitorcomun / fr.numarator;
	rez.numarator = this->numarator * a - fr.numarator * b;
	rez.numitor = numitorcomun;
	return rez;
}*/
Fractie Fractie::operator*(const Fractie& fr) const {
	return Fractie(this->numarator * fr.numarator, this->numitor * fr.numitor);
}
/*
Fractie operator*(const Fractie& fr1, const Fractie& fr2) {//param1-param2 metoda friend
	return Fractie(fr1.numarator * fr2.numarator, fr1.numitor * fr2.numitor);
}*/
Fractie Fractie::operator/(const Fractie& fr) const {
	cout << "Metoda membra impartire\n";
	return Fractie(*this * fr.reciproc());
}
/*
Fractie operator/(const Fractie& fr1,const Fractie& fr2){//metoda friend operator/
	cout<<"Metoda friend impartire\n";
	return Fractie(fr1*fr2.reciproc());
}
*/
Fractie& Fractie::operator+=(const Fractie& fr) {
	this->numarator = this->numarator + fr.numarator;
	return *this;
}
Fractie& Fractie::operator-=(const Fractie& fr) {
	this->numarator = this->numarator - fr.numarator;
	return *this;
}
Fractie& Fractie::operator/=(const Fractie& fr) {
	this->numarator = this->numarator * fr.numitor;
	this->numitor = this->numitor * fr.numarator;
	return *this;
}
Fractie& Fractie::operator*=(const Fractie& fr) {
	this->numarator = this->numarator * fr.numarator;
	this->numitor = this->numitor * fr.numitor;
	return *this;
}
Fractie& Fractie::operator--() {//--(*this)
	this->numarator = this->numarator - this->numitor;
	return *this;
}
Fractie Fractie::operator--(int a) {//(*this)--
	Fractie fr = *this;
	--* this;
	return fr;
}
Fractie& Fractie::operator++() {//--(*this)
	this->numarator = this->numarator + this->numitor;
	return *this;
}
Fractie Fractie::operator++(int a) {//(*this)--
	Fractie fr = *this;
	++* this;
	return fr;
}
Fractie& Fractie::operator=(const Fractie& fr) {
	if (this->numitor == fr.numitor && this->numarator == fr.numarator);
	else {
		this->numarator = fr.numarator;
		this->numitor = fr.numitor;
	}
	return *this;
}
bool Fractie::operator==(const Fractie& fr) const {
	Fractie thissimpl = this->simplifica();
	Fractie frsimpl = fr.simplifica();
	return (thissimpl.numarator == frsimpl.numarator && thissimpl.numitor == frsimpl.numitor);
}
/*
bool Fractie::operator<(const Fractie& fr) const {
	return (this->numarator * fr.numitor < this->numitor * fr.numarator);
}*/
bool Fractie::operator<=(const Fractie& fr) const {
	return (this->numarator * fr.numitor <= this->numitor * fr.numarator);
}
bool Fractie::operator>(const Fractie& fr) const {
	return (this->numarator * fr.numitor > this->numitor* fr.numarator);
}
bool Fractie::operator>=(const Fractie& fr) const {
	return (this->numarator * fr.numitor >= this->numitor * fr.numarator);
}
bool Fractie::operator!=(const Fractie& fr) const {
	Fractie thissimpl = this->simplifica();
	Fractie frsimpl = fr.simplifica();
	return !(thissimpl.numarator == frsimpl.numarator && thissimpl.numitor == frsimpl.numitor);
}
bool operator<(const Fractie& fr1, const Fractie& fr2) {
	return (fr1.numarator * fr2.numitor < fr1.numitor* fr2.numarator);
}
/*
bool operator<=(const Fractie& fr1, const Fractie& fr2) {
	return (fr1.numarator * fr2.numitor <= fr1.numitor* fr2.numarator);
}
bool operator>(const Fractie& fr1, const Fractie& fr2) {
	return (fr1.numarator * fr2.numitor > fr1.numitor* fr2.numarator);
}
bool operator>=(const Fractie& fr1, const Fractie& fr2) {
	return (fr1.numarator * fr2.numitor >= fr1.numitor* fr2.numarator);
}
bool operator==(const Fractie& fr1, const Fractie& fr2) {
	Fractie thissimpl = fr1.simplifica();
	Fractie frsimpl = fr2.simplifica();
	return (thissimpl.numarator == frsimpl.numarator && thissimpl.numitor == frsimpl.numitor);
}
bool operator!=(const Fractie& fr1, const Fractie& fr2) {
	Fractie thissimpl = fr1.simplifica();
	Fractie frsimpl = fr2.simplifica();
	return !(thissimpl.numarator == frsimpl.numarator && thissimpl.numitor == frsimpl.numitor);
}*/
Fractie Fractie::simplifica() const {
	int c = cmmdc(this->numarator, this->numitor);
	return Fractie(this->numarator / c, this->numitor / c);
}
Fractie Fractie::reciproc() const {
	return Fractie(this->numitor, this->numarator);
}
void Fractie::afisare() const {
	cout << this->numarator << "/" << this->numitor << endl;
}
ostream& operator<<(ostream& os, const Fractie& fr) {
	os << fr.numarator << "/" << fr.numitor;
	return os;
}
istream& operator>>(istream& is, Fractie& fr) {
	is >> fr.numarator >> fr.numitor;
	return is;
}
/*
ostream& Fractie::operator<<(ostream& os) const {
	os << this->numarator << "/" << this->numitor;
	return os;
}
istream& Fractie::operator>>(istream&) const {
	is >> this->numarator >> this->numitor;
	return is;
}*/