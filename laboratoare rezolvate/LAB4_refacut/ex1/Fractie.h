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

    // +
        //clasa
        Fractie operator+(const Fractie& )const;

        //friend
        friend Fractie operator+(const Fractie& f1, const Fractie& f2);

    // -
        Fractie operator-(const Fractie&) const;
        friend Fractie operator-(const Fractie& , const Fractie&);

    // *
        Fractie operator*(const Fractie&)const;
        friend Fractie operator*(const Fractie&, const Fractie&);

    // /
        Fractie operator/(const Fractie&)const;
        friend Fractie operator/(const Fractie&, const Fractie&);

    

    // +=
        Fractie& operator+=(const Fractie&);

    // -=
        Fractie& operator-=(const Fractie&);

    // *= 
        Fractie& operator*=(const Fractie&);
    
    // /=
        Fractie& operator/=(const Fractie&);

    

    // --
        Fractie& operator--();
        Fractie operator--(int a);

    // ++
        Fractie& operator++();
        Fractie operator++(int a);

    // =
        Fractie& operator=(const Fractie&);

    // ==
        bool operator==(const Fractie&) const;
    	//friend bool operator==(const Fractie&, const Fractie&);

    // <= 
        bool operator<=(const Fractie&) const;
    	//friend bool operator<=(const Fractie&, const Fractie&);

    // >=
        bool operator>=(const Fractie&) const;
    	//friend bool operator>=(const Fractie&, const Fractie&);

    // != 
        bool operator!=(const Fractie&) const;
	    //friend bool operator!=(const Fractie&, const Fractie&);

    // <
        bool operator<(const Fractie&) const;
	    //friend bool operator<(const Fractie&, const Fractie&);//comparam cei doi parametri

    // >
        bool operator>(const Fractie&) const;
        friend bool operator>(const Fractie&, const Fractie&);

    // <<   
        //clasa
        ostream& Fractie::operator<<(ostream&) const;
        
        //friend
        //friend ostream& operator<<(ostream&, const Fractie&);

    // >>
        //clasa
        istream& Fractie::operator>>(istream&) const;

        //friend
        //istream& Fractie::operator>>(istream&, Fractie&);


};
#endif