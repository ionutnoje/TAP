#include "Client.h"

Client::Client(string nume, string prenume, string adresa, int nr_conturi) {
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;

	this->nr_conturi = nr_conturi;
	this->conturi = new ContBancar*[nr_conturi];
	this->contor_conturi = 0;

	for (int i = 0; i < nr_conturi; i++)
		conturi[i] = NULL;
}



void Client::adaugaCont(ContBancar* cont) {
	if (contor_conturi < nr_conturi) {
		conturi[contor_conturi++] = cont;
	}
}

ContBancar Client::getBankAccount(int index)
{
	if(index >= 0 && index < contor_conturi)
		return *conturi[index];
}

string Client::getAdresa()
{
	return this->adresa;
}

int Client::getContorConturi()
{
	return this->contor_conturi;
}

string Client::getNume()
{
	return this->nume;
}

string Client::getPrenume()
{
	return this->prenume;
}

