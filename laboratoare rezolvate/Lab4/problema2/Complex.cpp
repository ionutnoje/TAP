#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex(float re, float im) :re(re), im(im) {
}
Complex::Complex(const Complex& param): re(param.re),im(param.im){
}
Complex::~Complex() {
}
Complex Complex::operator-() const {//schimbare de semn
	Complex c(-1 * this->re, -1 * this->im);
	return c;
}
Complex Complex::operator+(const Complex& c) const {//this+param metoda membra
	Complex rez;
	rez.re = this->re + c.re;
	rez.im = this->im + c.im;
	return rez;
}
/*
Complex operator+(const Complex& c1, const Complex& c2) {
	Complex rez;
	rez.re =c1.re + c2.re;
	rez.im = c1.im + c2.im;
	return rez;
}*/
Complex operator-(const Complex& c1, const Complex& c2) {//param1-param2 metoda friend
	Complex rez;
	rez.re = c1.re - c2.re;
	rez.im = c1.im - c2.im;
	return rez;
}
/*
Complex Complex::operator-(const Complex& c) const {//this+param metoda membra
	Complex rez;
	rez.re = this->re - c.re;
	rez.im = this->im - c.im;
	return rez;
}*/
Complex Complex::operator*(const Complex& c) const {
	Complex rez;
	rez.re = this->re* c.re- this->im*c.im;
	rez.im = this->re * c.im + this->im * c.re;
	return rez;
}
/*
Complex operator*(const Complex& c1, const Complex& c2) {//param1-param2 metoda friend
	Complex rez;
	rez.re = c1.re* c2.re- c1.im*c2.im;
	rez.im = c1.re * c2.im + c1.im * c2.re;
	return rez;
}*/
Complex Complex::operator/(const Complex& c) const {
	Complex rez;
	rez.re = (this->re * c.re + this->im * c.im) / (c.re * c.re + c.im * c.im);
	rez.im = (this->im * c.re-this->re * c.im)/ (c.re * c.re + c.im * c.im);
	return rez;
}
/*
Complex operator/(const Complex& c1,const Complex& c2){//metoda friend operator/
	Complex rez;
	rez.re = (c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im);
	rez.im = (c1.im * c2.re-c1.re * c2.im)/ (c2.re * c2.re + c2.im * c2.im);
	return rez;
}
*/
Complex& Complex::operator+=(const Complex& c) {
	this->re += c.re;
	this->im += c.im;
	return *this;
}
Complex& Complex::operator-=(const Complex& c) {
	this->re -= c.re;
	this->im -= c.im;
	return *this;
}
Complex& Complex::operator/=(const Complex& c) {
	Complex rez;
	rez.re = (this->re * c.re + this->im * c.im) / (c.re * c.re + c.im * c.im);
	rez.im = (this->im * c.re - this->re * c.im) / (c.re * c.re + c.im * c.im);
	*this = rez;
	return *this;
}
Complex& Complex::operator*=(const Complex& c) {
	Complex rez;
	rez.re = this->re * c.re - this->im * c.im;
	rez.im = this->re * c.im + this->im * c.re;
	*this = rez;
	return *this;
}
Complex& Complex::operator--() {//--(*this)
	--re;
	return *this;
}
Complex Complex::operator--(int a) {//(*this)--
	Complex c = *this;
	--*this;
	return c;
}
Complex& Complex::operator++() {//--(*this)
	++re;
	return *this;
}
Complex Complex::operator++(int a) {//(*this)--
	Complex c = *this;
	++* this;
	return c;
}
Complex& Complex::operator=(const Complex& c) {
	this->re = c.re;
	this->im = c.im;
	return *this;
}

bool Complex::operator==(const Complex& c) const {
	return (this->re == c.re && this->im == c.im);
}
/*
bool Complex::operator<(const Complex& c) const {
	
}*/
//bool Complex::operator<=(const Complex& c) const {	}
//bool Complex::operator>(const Complex& c) const {}
//bool Complex::operator>=(const Complex& c) const {}
bool Complex::operator!=(const Complex& c) const {
	return !(this->re == c.re && this->im == c.im);
}
//bool operator<(const Complex& c1, const Complex& c2) {}
/*
bool operator<=(const Complex& c1, const Complex& c2) {
	
}
bool operator>(const Complex& c1, const Complex& c2) {
	
}
bool operator>=(const Complex& c1, const Complex& c2) {
	
}
bool operator==(const Complex& c1, const Complex& c2) {
	return (c1.re == c2.re && c1.im == c2.im);
}
bool operator!=(const Complex& c1, const Complex& c2) {
	return !(c1.re == c2.re && c1.im == c2.im);
}*/

void Complex::afisare() const {
	cout << re << "+" << im << "i" << endl;
}
ostream& operator<<(ostream& os, const Complex& c) {
	os << c.re << "+" << c.im << "i" << endl;
	return os;
}
istream& operator>>(istream& is, Complex& c) {
	is >> c.re >> c.im;
	return is;
}
/*
ostream& Complex::operator<<(ostream& os) const {
	os << re << "+" << im << "i" << endl;
	return os;
}
istream& Complex::operator>>(istream&) const {
	is >> re >> im;
	return is;
}*/
float modul(float re, float im) {
	float rez = sqrt(re*re + im*im);
	return rez;
}
Complex conjugat(float re, float im) {
	return Complex(re, -im);
}