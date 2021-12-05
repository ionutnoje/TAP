#pragma once
#ifndef _CLIENT_
#define _CLIENT_


#include <iostream>
#include <string>
#include "ContBancar.h"
#include <string.h>


class Client
{
    public:
        Client(string nume,string prenume,string adresa,int nrconturi);
        Client(const Client& c);                
        void adaugareCont(ContBancar* cont);
        ContBancar getContBancar(int index);


    private: 
        string nume;
        string prenume;
        string adresa;
        int nrconturi;
        ContBancar** conturi;
        int contor_conturi;

        friend class Banca;


};
#endif
///