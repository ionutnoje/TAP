
#include "banca.h"
#include "client.h"
#include "contbancar.h"
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
/*
    Banca b("BT",2); //desigur datele pot fi citite de la tastatura

    //desigur datele pot fi citite de la tastatura in cate un for pentru nr de clienti
    Client cl1("Alexandresu","Alexandru","TGM",2);
    Client cl2("Dumitrescu","Dumitru","TGJ",3);
    //conturile pot fi citite de la tastatura pentru fiecare client se citesc nrconturi buc. de conturi
    Cont c11("11","RON",100);
    Cont c12("12","RON",200);
    Cont c21("21","RON",300);
    Cont c22("22","RON",400);
    Cont c23("23","EUR",100);
    cl1.adaugaCont(&c11);
    cl1.adaugaCont(&c12);
    cl2.adaugaCont(&c21);
    cl2.adaugaCont(&c22);
    cl2.adaugaCont(&c23);

    b.adaugaClient(&cl1);
    b.adaugaClient(&cl2);
 */
    string numeB;
    unsigned nrClB;
    cout << "Nume banca: ";
    cin >> numeB;
    cout << "Nr. de clienti:";
    cin >> nrClB;
    Banca b(numeB, nrClB);
    for (unsigned i = 0; i < nrClB; ++i) {
        string nume, prenume, adresa;
        unsigned nrconturi;
        cout << "Dati datele clientului (nume,prenume,adresa,nrconturi): ";
        cin >> nume >> prenume >> adresa >> nrconturi;
        Client* cl = new Client(nume, prenume, adresa, nrconturi);
        b.adaugaClient(cl);
        for (unsigned j = 0; j < nrconturi; ++j) {
            string nrcont, moneda;
            float suma;
            cout << "Dati datele contului (nrcont,moneda,suma): ";
            cin >> nrcont >> moneda >> suma;
            ContBancar* cont = new ContBancar(nrcont, moneda, suma);
            cl->adaugaCont(cont);
        }
    }
    b.afisareBanca();
    unsigned indexCl = 0; //al catalea client
    unsigned index1 = 0, index2 = 1; //din ce index de cont in ce alt index de cont se transfera
    //b.getClient(indexCl).getCont(index1).depunere(100);
    b.getClient(indexCl)->getCont(index1)->depunere(100);
    cout << endl;
    b.afisareBanca();
    b.getClient(indexCl)->getCont(index1)->extragere(50);
    cout << endl;
    b.afisareBanca();
    //b.getClient(indexCl)->getCont(index1)->transfer(b.getClient(indexCl)->getCont(index2), 10);
    b.getClient(indexCl)->getCont(index1)->transfer(*b.getClient(indexCl)->getCont(index2),10);
    cout << endl;
    b.afisareBanca();

}