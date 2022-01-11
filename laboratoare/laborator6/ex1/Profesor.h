#pragma once
#ifndef _PROFESOR_
#define _PROFESOR_
#include <iostream>
#include "Persoana.h"

class Profesor : public Persoana
{
protected:
	string email, materia;

public:
	Profesor(string cnp = "", string nume = "", string email = "", string materia = "");
	~Profesor();
	Profesor(const Profesor&);
	Profesor& operator=(const Profesor&);

	inline string getMaterie() { return materia; }
	inline void detalii() override { cout << "Profesorul " << nume << " preda materia: " << getMaterie() << endl; }
};

#endif