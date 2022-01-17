#include "Banca.h"
#include <iostream>
using namespace std;
Banca::Banca(string codBanca, unsigned nrclienti): codBanca(codBanca), nrclienti(nrclienti) {
	this->clienti = new Client*[nrclienti];
}
Banca::Banca(const Banca& param) {
	this->codBanca = param.codBanca;
	this->nrclienti = param.nrclienti;
	this->index = 0;
	this->clienti = new Client * [nrclienti];
	for (int i = 0; i < nrclienti; ++i)
	{
		this->clienti[i] = new Client(*param.clienti[i]);
	}
}
Banca::~Banca() {
	for (int i = 0; i < nrclienti; ++i)
	{
		delete this->clienti[i];
	}
	delete[] clienti;
}
string Banca::getCodBanca() {
	return codBanca;
}
unsigned Banca::getNrclienti() {
	return nrclienti;
}
Client* Banca::getClient(int index) {
	return clienti[index];
}
void Banca::setCodBanca(string codBanca) {
	this->codBanca = codBanca;
}
void Banca::setNrclienti(unsigned nrclienti) {
	this->nrclienti = nrclienti;
}
void Banca::setClient(int index, Client* client) {
	if (index < nrclienti)
		this->clienti[index] = client;
	else cout << "nu poti seta acest client" << endl;
}
void Banca::adaugaClient(Client* clientnou) {
	if (index < nrclienti)
	{
		this->clienti[index] = clientnou;
		++index;
	}
	else cout << "Nr maxim de clienti atinsi";
}
void Banca::afisareBanca()
{
	cout << codBanca << endl;
	for (int i = 0; i < nrclienti; ++i)
	{
		this->clienti[i]->afisareClient();
		cout << endl;
	}
}