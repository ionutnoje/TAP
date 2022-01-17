#include "LSI.h"
#include<iostream>
using namespace std;
Nod::Nod(int info)
{
	this->info = info;
	this->succ = NULL;
}
Nod::Nod(const Nod& param) {
	info = param.info;
	succ = param.succ;
}
Nod::~Nod() {

}
void LSI::eliberare(Nod* nod) {
	nod->~Nod();
}
LSI::LSI(int info) {
	this->prim = new Nod(info);
}
LSI::LSI(const LSI& param) {
	this->prim = param.prim;
}
LSI::~LSI() {

}
void LSI::adaugareInceput(int info_nou) {
	Nod* nod_nou = new Nod(info_nou);
	if (this->prim == NULL)
	{
		return;
	}
	else {
		nod_nou->succ = this->prim;
		prim = nod_nou;
	}
}
void LSI::stergereInceput() {
	if (prim == NULL)
	{
		cout << "eroare, lista nula";
		return ;
	}
	else {
		Nod* salv = prim;
		prim = prim->succ;
		eliberare(salv);
	}
}
void LSI::afisareLsi() {
	Nod* tmp = new Nod(*prim);
	while (tmp != NULL)
	{
		cout << tmp->info << " ";
		tmp = tmp->succ;
	}
	cout<<endl;
}
Nod* LSI::cautare(int info_cautat) {
	Nod* tmp = new Nod(*prim);
	while (tmp != NULL)
	{
		if (tmp->info == info_cautat)
		{
			cout << "am gasit" << endl;
			return tmp;
		}
		tmp = tmp->succ;
	}
	cout << "nu am gasit" << endl;
	return NULL;
}