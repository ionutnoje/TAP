#pragma once
#ifndef _CLIENT_
#define _CLIENT_
#include <string>
#include "ContBancar.h"
using namespace std;
class Client
{
private :
	string nume;
	string prenume;
	string adresa;
	unsigned nrconturi;
	int index;
	ContBancar** conturi;
public :
	Client(string nume, string prenume, string adresa, unsigned nrconturi);
	Client(const Client& param);
	~Client();
	string getNume();
	string getPrenume();
	string getAdresa();
	unsigned getNrconturi();
	ContBancar* getCont(int index);
	void setNume(string nume);
	void setPrenume(string prenume);
	void setAdresa(string Adresa);
	void setNrconturi(unsigned nrconturi);
	void setCont(int index,ContBancar* cont);
	void adaugaCont(ContBancar* contnou);
	void afisareClient();
};
#endif

