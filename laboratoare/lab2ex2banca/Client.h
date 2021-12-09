#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include "ContBancar.h"

class Client 
{
private:
	string nume;
	string prenume;
	string adresa;

	
	int nr_conturi;
	int contor_conturi;

	

public:
	Client(string nume, string prenume, string adresa, int nrconturi);
	Client(const Client& c);
	

	void adaugaCont(ContBancar* cont);
	ContBancar getBankAccount(int index);
	string getNume();
	string getPrenume();
	string getAdresa();
	int getContorConturi();
	
	ContBancar** conturi;
	
};

#endif 



