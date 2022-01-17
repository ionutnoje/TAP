#pragma once
#ifndef _FRACTIE_
#define _FRACTIE_

class Fractie{

private:
    int numarator,numitor;


public:
    Fractie(int numarator = 0, int numitor = 1);
    Fractie(const Fractie& frac);
    ~Fractie();

    //-
    Fractie operator-() const;

    friend Fractie operator-(const Fractie&, const Fractie&);//returneaza un alt obiect reprezentand diferenta a cei doi param: param1-param2

    //+
    Fractie operator+() const;

    friend Fractie operator+(const Fractie&, const Fractie&);


    //--
    Fractie& operator--() const;   // --fractie; predecrementare  scadem din obiectul curent -1

    Fractie operator--(int a); // fractie--; postdecrementare

    //++

    Fractie& operator++() const; // ++fractie
    Fractie operator++(int a); //fractie++

    //*

    Fractie operator*() const;

    friend Fractie operator*(const Fractie&, const Fractie&);

    // /

    Fractie operator/() const;

    friend Fractie operator/(const Fractie&, const Fractie&);

    // +=
    Fractie& operator+=(const Fractie&);

    //-= 
    Fractie& operator-=(const Fractie&);

    // /=
    Fractie& operator/=(const Fractie&);

    // *= 
    Fractie& operator*=(const Fractie&);


    // =
    Fractie& operator=(const Fractie&);


    bool operator==(const Fractie&) const;//comparam obiectul curent cu parametrul dat
	//bool operator<(const Fractie&) const;
	bool operator<=(const Fractie&) const;
	bool operator>(const Fractie&) const;
	bool operator>=(const Fractie&) const;
	bool operator!=(const Fractie&) const;
	friend bool operator<(const Fractie&, const Fractie&);//comparam cei doi parametri
	//friend bool operator<=(const Fractie&, const Fractie&);
	//friend bool operator>(const Fractie&, const Fractie&);
	//friend bool operator>=(const Fractie&, const Fractie&);
	//friend bool operator==(const Fractie&, const Fractie&);
	//friend bool operator!=(const Fractie&, const Fractie&);
	

    friend ostream& operator<<(ostream&, const Fractie&);
	//ostream& Fractie::operator<<(ostream&) const;
	//istream& Fractie::operator>>(istream&) const;
	friend istream& operator>>(istream&, Fractie&);
	void afisare() const;//va fi inlocuit cu supraincarcarea operatorului <<



};
#endif