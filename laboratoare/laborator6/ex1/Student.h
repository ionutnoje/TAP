#pragma once
#ifndef _STUDENT_
#define _STUDENT_
#include <iostream>
#include "Persoana.h"

class Student : public Persoana
{
protected:
	string email;
	int nota;
public:
	Student(string nume = "", string cnp = 0, string email = "", int nota = 0);
	~Student();
	Student(const Student&);
	Student& operator=(const Student&);

	inline int getNota(){ return nota; }
	inline void detalii() override { cout << "Studentul " << nume << " are nota: " << getNota() << endl; }
};

#endif