#include "Banca.h"
#include <iostream>
using namespace std;

Banca::Banca(string cod, int nrclienti) {
	this->cod = cod;

	this->clienti = new Client * [nrclienti];
	this->nrclienti = nrclienti;
	this->contor_clienti = 0;

	for (int i = 0; i < nrclienti; i++)
		clienti[i] = NULL;

}

void Banca::adaugaClient(Client* client)
{
	if (contor_clienti < nrclienti) {
		this->clienti[contor_clienti++] = client;
	}
}

Client Banca::getClient(int index)
{
	if (index >= 0 && index < contor_clienti)
		return *clienti[index];
}

void Banca::afisareBanca()
{
	cout << this->cod << endl;

	for (int i = 0; i < this->contor_clienti; i++) {
		cout << clienti[i]->getNume() << " " << clienti[i]->getPrenume() << " " << clienti[i]->getAdresa() << endl;

		for (int j = 0; j < this->clienti[i]->getContorConturi(); j++) {
			cout << clienti[i]->conturi[j]->getNrCont() << " " << clienti[i]->conturi[j]->getMoneda() << " " << clienti[i]->conturi[j]->getSuma() << endl;
		}

		cout << endl;
	}
}

int Banca::getContorClienti()
{
	return this->contor_clienti;
}

int Banca::getNrClienti()
{
	return this->nrclienti;
}
