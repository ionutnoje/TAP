#pragma once
#ifndef _BANCA_
#define _BANCA_
#include <string>
#include "Client.h"
using namespace std;
class Banca
{
private:
	string codBanca;
	unsigned nrclienti;
	Client** clienti;
	int index;
public:
	Banca(string codBanca, unsigned nrclienti);
	Banca(const Banca& param);
	~Banca();
	string getCodBanca();
	unsigned getNrclienti();
	Client* getClient(int index);
	void setCodBanca(string codBanca);
	void setNrclienti(unsigned nrclienti);
	void setClient(int index, Client* client);
	void adaugaClient(Client* clientnou);
	void afisareBanca();
};
#endif
