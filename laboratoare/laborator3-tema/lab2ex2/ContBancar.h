#pragma once
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string.h>
#include <string>
using namespace std;
using std::string;

class Operatiuni {
private:

public:
	virtual float getSumaTotala()=0;
	virtual float getDobanda()=0;
	virtual void depunere(float suma)=0;
	virtual void retragere(float suma)=0;
};

class ContBancar : Operatiuni
{
private:
	float suma;
	string moneda;
	string nrcont;

	friend class Bank;

public:
	BankAccount(string nrcont, string moneda, float suma);
	BankAccount(const ContBancar& cont);

	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void retragere(float suma);
};
#endif 


