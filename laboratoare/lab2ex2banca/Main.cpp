#include "Banca.h"
#include "Client.h"
#include "ContBancar.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{

    string numeB;
    unsigned nrClB;

    cout << "Nume Bank: ";
    cin >> numeB;

    cout << "Nr. de clienti:";
    cin >> nrClB;

    Banca b(numeB, nrClB);


    for (unsigned i = 0; i < nrClB; ++i) {
        string nume, prenume, adresa;
        unsigned nrBankAccounturi;

        cout << "Dati datele clientului (nume,prenume,adresa,nrBankAccounturi): ";
        cin >> nume >> prenume >> adresa >> nrBankAccounturi;

        Client* cl = new Client(nume, prenume, adresa, nrBankAccounturi);
        b.adaugaClient(cl);

        for (unsigned j = 0; j < nrBankAccounturi; ++j) {
            string nrBankAccount, moneda;
            float suma;

            cout << "Dati datele BankAccountului (nrBankAccount,moneda,suma): ";
            cin >> nrBankAccount >> moneda >> suma;

            ContBancar* cont = new ContBancar(nrBankAccount, moneda, suma);

            cl->adaugaCont(cont);
        }
    }

    b.afisareBanca();

    unsigned indexCl = 0; 
    unsigned index1 = 0, index2 = 1; 
    //b.getClient(indexCl).getBankAccount(index1).depunere(100);
    b.getClient(0);

    cout << endl;
    b.afisareBanca();

   // b.getClient(indexCl).getBankAccount(index1).retragere(50);

    cout << endl;
    b.afisareBanca();

    //b.getClient(indexCl).getBankAccount(index1).transfer(b.getClient(indexCl).getBankAccount(index2), 10);

    cout << endl;
    b.afisareBanca();
}