#pragma once
#ifndef _TABLOU_
#define _TABLOU_
#include <iostream>
using namespace std;
template <class T>
class Tablou
{
private:
	int dim;
	T* val;
public:
	Tablou(int dim);
	Tablou(const Tablou<T>& param);
	~Tablou();
	Tablou<T>& operator=(const Tablou<T>& param);
	T& operator[](int i) const;
	ostream& operator<<(ostream& os)const;
	istream& operator>>(istream& is);
};
template <class T>
Tablou<T>::Tablou(int dim) : dim(dim) {
	val = new T[dim];
}
template <class T>
Tablou<T>::Tablou(const Tablou<T>& param) {
	this->val = new T[param.dim];
	this->dim = param.dim;
	for (int i = 0; i < dim; ++i) {
		val[i] = param.val[i];
	}
}
template <class T>
Tablou<T>::~Tablou() {
	delete[] val;
}
template <class T>
Tablou<T>& Tablou<T>::operator=(const Tablou<T>& param) {
	this->val = new T[param.dim];
	this->dim = param.dim;
	for (int i = 0; i < dim; ++i) {
		val[i] = param.val[i];
	}
	return *this;
}
template <class T>
T& Tablou<T>::operator[](int i) const {
	return this->val[i];
}
template <class T>
ostream& Tablou<T>::operator<<(ostream& os) const{
	os << "dim=" << this->dim << endl;
	for (int i = 0; i < this->dim; ++i) {
		os << this->val[i] << " ";
	}
	os << endl;
	return os;
}
template <class T>
istream& Tablou<T>::operator>>(istream& is) {
	cout << "nr de el=";
	is >> dim;
	this->val = new T[dim];
	for (int i = 0; i < dim; ++i)
		is >> val[i];
	return is;
}

template <>
class Tablou<char>
{
private:
	int dim;
	char* val;
public:
	Tablou() {
		this->dim = 26;
		this->val = new char[dim];
		for (int i = 0; i < dim; ++i)
			val[i] = 'a' + i;
	}
	Tablou(const Tablou<char>& param) {
		this->dim = param.dim;
		this->val = new char[dim];
		for (int i = 0; i < dim; ++i)
			val[i] = param.val[i];
	}
	~Tablou() {
		delete[]val;
	}
	Tablou<char>& operator=(const Tablou<char>& param) {
		this->dim = param.dim;
		this->val = new char[dim];
		for (int i = 0; i < dim; ++i)
			val[i] = param.val[i];
		return *this;
	}
	char& operator[](int i) const {
		return val[i];
	}
	ostream& operator<<(ostream& os)const {
		os << "dim=" << this->dim << endl;
		for (int i = 0; i < this->dim; ++i) {
			os << this->val[i] << " ";
		}
		os << endl;
		return os;
	}
	istream& operator>>(istream& is) {
		cout << "nr de el=";
		is >> dim;
		this->val = new char[dim];
		for (int i = 0; i < dim; ++i)
			is >> val[i];
		return is;
	}
};
#endif

