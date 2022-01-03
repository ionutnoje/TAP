#pragma once
#ifndef _NOD_
#define _NOD_
#include <iostream>

using namespace std;

class Nod
{
private:
	int info;
	Nod* succ;
public:
	Nod(int info, Nod* succ = NULL);
	Nod(const Nod& n);
	~Nod();
	Nod& operator=(const Nod& n);

	friend class LSI;
};

#endif
