// #pragma once
// #ifndef BANK_H
// #define BANK_H

// #include "Client.h"

// class Banca
// {
// private:
// 	// string cod;

// 	// Client** clienti;
// 	// int nrclienti;
// 	// int contor_clienti;

// public:
// 	Banca(string cod, int nrclienti);
// 	void adaugaClient(Client* client);
// 	Client getClient(int index);
// 	void afisareBanca();

// 	string cod;

// 	Client** clienti;
// 	int nrclienti;
// 	int contor_clienti;
// };

// #endif // 






#pragma once
#ifndef BANK_H
#define BANK_H

#include "Client.h"

class Banca
{
private:
	string cod;

	
	int nrclienti;
	int contor_clienti;

public:
	Banca(string cod, int nrclienti);
	void adaugaClient(Client* client);
	Client getClient(int index);
	void afisareBanca();
	int getNrClienti();
	int getContorClienti();
	Client** clienti;

	
};

#endif // 



