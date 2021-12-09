#pragma once
#ifndef OPERATIUNI
#define OPERATIUNI

#include <iostream>
#include <string.h>
#include <string.h>
#include <string>

using namespace std;

class Operatiuni {
private:

public:
	virtual float getSumaTotala()=0;
	virtual float getDobanda()=0;
	virtual void depunere(float suma)=0;
	virtual void retragere(float suma)=0;
};
#endif