#include <iostream>
#include <string>
#include "Client.h"
#include <string.h>
#include <string>

using namespace std;

#pragma once
#ifndef _BANCA_
#define _BANCA_

class Banca : public Client
{
    public:
        
        void adaugareClient(Client* client);
        Banca(string codBanca,int nrclienti);
        Client getClient(int index);
        void afisareBanca();




    private: 
        string codBanca;
        int nrclienti;
        Client **clienti;
        int contor_clienti;


};
#endif