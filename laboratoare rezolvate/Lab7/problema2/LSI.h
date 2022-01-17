#pragma once
#ifndef _LSI_
#define _LSI_
#include <iostream>
using namespace std;
template <class T>
class LSI;
template <class T>
class Nod {
private:
	T info;
	Nod* succ;
public:
	Nod(T info);
	Nod(const Nod<T>& param);
	~Nod();
	Nod<T>& operator=(const Nod<T>& param);
	bool operator==(const Nod<T>& param);
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);
	friend class LSI<T>;
	//friend T main();
};
template <class T>
Nod<T>::Nod(T info) :info(info) {
	this->succ = NULL;
}
template <class T>
Nod<T>::Nod(const Nod<T>& param) :info(param.info), succ(param.succ) {}
template <class T>
Nod<T>::~Nod() {}
template <class T>
Nod<T>& Nod<T>::operator=(const Nod<T>& param) {
	this->info = param.info;
	this->succ = param.succ;
	return *this;
}
template <class T>
bool Nod<T>::operator==(const Nod<T>& param){
	return this->info == param.info;
}
template <class T>
ostream& Nod<T>::operator<<(ostream& os) const {
	os << this->info << " " << this->succ << endl;
	return os;
}
template <class T>
istream& Nod<T>::operator>>(istream& is) {
	T info;
	is >> info;
	this = new  Nod<T>(info);
	return is;
}
template <class T>
class LSI
{
private:
		Nod<T>* prim;
public:
	LSI(T info);
	LSI(const LSI<T>& param);
	LSI& operator=(const LSI<T>& param);
	bool operator==(const LSI<T>& param) const;
	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);
	void adaugareInceput(T info);
	void stergereInceput();
};
template <class T>
LSI<T>::LSI(T info) {
	prim = new Nod<T>(info);
}
template <class T>
LSI<T>::LSI(const LSI<T>& param) {
	this->prim = param.prim;
}
template <class T>
LSI<T>& LSI<T>::operator=(const LSI<T>& param) {
	this->prim = param.prim;
	return *this;
}
template <class T>
bool LSI<T>::operator==(const LSI<T>& param) const {
	return this->prim->info == param.prim->info;
}
template <class T>
ostream& LSI<T>::operator<<(ostream& os) {
	Nod<T>* temp = prim;
	while (temp != NULL) {
		os << temp->info << " " << temp->succ << endl;
		temp = temp->succ;
	}
	os << endl;
	return os;
}
template <class T>
istream& LSI<T>::operator>>(istream & is) {
	T info;
	is >> info;
	adaugareInceput(info);
	return is;
}
template <class T>
void LSI<T>::adaugareInceput(T info_nou) {
	Nod<T>* nod_nou = new Nod<T>(info_nou);
	if (this->prim == NULL)
	{
		return;
	}
	else {
		nod_nou->succ = this->prim;
		prim = nod_nou;
	}
}
template <class T>
void LSI<T>::stergereInceput() {
	if (prim == NULL)
	{
		cout << "eroare, lista nula";
		return;
	}
	else {
		Nod<T>* salv = prim;
		prim = prim->succ;
		salv->~Nod();
	}
}
#endif
