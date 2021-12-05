#include "Client.h"
#include <iostream>
#include <string.h>
#include <string>

Client::Client(string nume, string prenume, string adresa, int nrconturi) {
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;

	this->conturi = new ContBancar*[nrconturi];
	this->nrconturi = nrconturi;
	this->contor_conturi = 0;

	for (int i = 0; i < nrconturi; i++)
		conturi[i] = NULL;
}

/*Client::Client(const Client& c) {
	this->firstName = string(c.firstName);
	this->lastName = string(c.lastName);
	this->address = string(c.address);

	this->accounts = new BankAccount * [c.nrOfAccounts];
	this->nrOfAccounts = c.nrOfAccounts;
	this->top = 0;

	for (int i = 0; i < this->nrOfAccounts; i++)
		accounts[i] = NULL;
}*/

void Client::adaugaCont(ContBancar* cont) {
	if (top < nrconturi) {
		accounts[contor_conturi++] = cont;
	}
}

BankAccount Client::getContBancar(int index)
{
	if(index >= 0 and index < contor_conturi)
		return *conturi[index];
}
