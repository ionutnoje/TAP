#pragma once
#ifndef _ACTOR_
#define _ACTOR_
#include <iostream>
using namespace std;
class Actor
{
private:
	int i;
	static int contor;
	string nume;
	string prenume;
	int varsta;
public:
	Actor(string nume, string prenume, int varsta, int i = 0);
	Actor(const Actor& param);
	~Actor();
	void afisareActor();
	static int getContor();
	friend class Film;
	friend bool  verifActori(const Actor& actor1, const Actor& actor2);
};
#endif
