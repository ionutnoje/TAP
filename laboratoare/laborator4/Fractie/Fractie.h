#pragma once
#ifndef _FRACTIE_
#define _FRACTIE_

#include <iostream>

using namespace std;

class Fractie{
	

	public: 
		int numarator,numitor;

		Fractie(int numarator = 0, int numitor = 1);
		Fractie(const Fractie&);
		~Fractie();

			Fractie operator-() const;//schimba semnul fractiei
			//Fractie operator+(const Fractie&) const;//returneaza un alt obiect reprezentand suma obiectului curent cu parametrul dat
		friend Fractie operator+(const Fractie&,const Fractie&);//returneaza un alt obiect reprezentand suma a celor doi param: param1 + param2
			//Fractie operator-(const Fractie&) const;
		friend Fractie operator-(const Fractie&,const Fractie&);//returneaza un alt obiect reprezentand diferenta a celor doi param: param1 - param2
			//Fractie operator*(const Fractie&) const;//inmultirea obiectului curent cu parametrul dat
		friend Fractie operator*(const Fractie&,const Fractie&);//returneaza un obiect care reprezinta valoarea inmultirii celor 2 fractii
			//Fractie operator/(const Fractie&) const;//impartirea obiectului curent cu parametrul dat
		friend Fractie operator/(const Fractie&,const Fractie&);//returneaza un obiect care reprezinta valoarea impartirii celor 2 fractii
		friend int cmmdc(int,int);
			Fractie& operator*=(const Fractie&);//nu poate sa fie friend pentru ca schimba obiectul curent//il inmulteste cu parametrul dat
			Fractie& operator--();//returnam obiectul predecrementat cu 1//--fractie;predecrementare//scadem din obiectul curent 1
			Fractie operator--(int a);//postdecrementare//returnam o alta fractie in care stocam valoarea obiectului curent predecrementat
			Fractie& operator=(const Fractie&);//obiectul curent o sa primeasca valorile de la obiectul din parametru si se returneaza pointerul catre this(obiectul curent)

			//bool operator==(const Fractie&) const;//comparam obiectul curent cu obiectul din parametru si se returneaza true sau false
			friend bool operator==(const Fractie&,const Fractie&);
			
			friend bool operator<(const Fractie&,const Fractie&);//comparam cei doi parametri
			//bool operator<(const Fractie&) const;//comparam obiectul curent cu obiectul 
			
			friend bool operator>(const Fractie&,const Fractie&);
			//bool operator>(const Fractie&) const;
			
			//bool operator<=(const Fractie&) const;
			friend bool operator<=(const Fractie&,const Fractie&);

			//bool operator>=(const Fractie&) const;
			friend bool operator>=(const Fractie&,const Fractie&);
			
			Fractie simplifica() const;
			Fractie reciproc() const;
		friend ofstream& operator<<(ostream&, const Fractie&);
		friend istream& operator>>(istream&, Fractie&);
			void afisare() const;


};
#endif