#include "Banca.h"
#include <iostream>
#include <string.h>
#include <string>


using namespace std;

Banca::Banca(string codBanca,int nrclienti):codBanca(codBanca),nrclienti(nrclienti)
{
    this->clienti = new Client* [nrclienti];
    this->contor_clienti = 0;

    for(int i = 0; i < nrclienti; i++)
    {
        clienti[i] = NULL;
    }
}

void Banca::adaugareClient(Client* client)
{
    if(contor_clienti < nrclienti)
    {
        this->clienti[contor_clienti++] = client;
        //contor_clienti++;
    }
}

Client Banca::getClient(int index)
{
    if(index >= 0 and index < contor_clienti)
    {
        return *clienti[index];
    }
}

void Banca::afisareBanca()
{
    cout << this->codBanca << endl;

    for(int i = 0; i < this->contor_clienti; i++)
    {
        cout << clienti[i]->nume << " " << clienti[i]->prenume << " " << clienti[i]->adresa << endl;

        for(int j = 0; j < this->clienti[i]->contor_conturi; j++)
        {
            cout << clienti[i]->conturi[j]->nrcont << " " << clienti[i]->conturi[j]->moneda << " " << clienti[i]->conturi[j]->suma << endl;
        }

        cout << endl;

    }
}


