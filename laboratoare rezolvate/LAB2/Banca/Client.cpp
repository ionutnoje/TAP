#include "Client.h"
#include <iostream>
using namespace std;
Client::Client(string nume, string prenume, string adresa, unsigned nrconturi)
{
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;
	this->nrconturi = nrconturi;
	this->conturi = new ContBancar * [nrconturi];
	this->index = 0;
	
}
Client::Client(const Client& param)
{
	nume = param.nume;
	prenume = param.prenume;
	adresa = param.adresa;
	nrconturi = param.nrconturi;
	conturi = new ContBancar * [nrconturi];
	for (int i = 0; i < nrconturi; ++i)
	{
		conturi[i] = new ContBancar(*param.conturi[i]);
	}
}
Client::~Client() { 
	for (int i = 0; i < nrconturi; ++i) delete this->conturi[i];
	delete[] this->conturi;
};
string Client::getNume() {
	return this->nume;
}
string Client::getPrenume() {
	return this->prenume;
}
string Client::getAdresa() {
	return this->adresa;
}
unsigned Client::getNrconturi() {
	return this->nrconturi;
}
ContBancar* Client::getCont(int index) {
	return this->conturi[index];
}
void Client::setNume(string nume) {
	this->nume = nume;
}
void Client::setPrenume(string prenume) {
	this->prenume = prenume;
}
void Client::setAdresa(string Adresa) {
	this->adresa = adresa;
}
void Client::setNrconturi(unsigned nrconturi) {
	this->nrconturi = nrconturi;
}
void Client::setCont(int index,ContBancar* cont) {
	this->conturi[index] = cont;
}
void Client::adaugaCont(ContBancar* contnou) {
	if (index < nrconturi)
	{
		this->conturi[index] = contnou;
		++index;
	}
	else cout << "Nr maxim de conturi atinse" << endl;
}
void Client::afisareClient() {
	cout << nume << " " << prenume << " " << adresa << endl;
	for (int i = 0; i < nrconturi; ++i)
	{
		conturi[i]->afisareCont();
		cout << endl;
	}
}