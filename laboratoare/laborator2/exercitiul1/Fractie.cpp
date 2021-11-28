#include "Fractie.h"
#include <iostream>


using namespace std;



Fractie::Fractie():numarator(0), numitor(1)
{
    
}

Fractie::Fractie(int val_numarator): numarator(val_numarator), numitor(1)
{
    
}

Fractie::Fractie(int val_numarator, int val_numitor): numarator(val_numarator), numitor(val_numitor)
{

}

Fractie::Fractie(const Fractie& obiect)
{
    this->numarator = obiect.numarator;
    this->numitor = obiect.numitor;
    
}
void Fractie::Adunare(Fractie& obiect1,Fractie& obiect2)
{
    int numitor_final;
    int numarator_final;


    if(obiect1.numitor == obiect2.numitor)
    {
        numitor_final = obiect1.numitor;
        numarator_final = obiect1.numarator + obiect2.numarator;

        cout << "Fractia dupa adunarea este: " << numarator_final << "/" << numitor_final << endl;
        
    }
    else
    {
        int aux = obiect1.numitor;
        obiect1.numarator = obiect1.numarator * obiect2.numitor;
        obiect1.numitor = obiect1.numitor * obiect2.numitor;

        obiect2.numarator = obiect2.numarator * aux;
        obiect2.numitor = obiect2.numitor * aux;


        numitor_final = obiect2.numitor;
        numarator_final = obiect1.numarator + obiect2.numarator;

        cout << "Fractia dupa adunarea este: " << numarator_final << "/" << numitor_final << endl;
        


    }
}



void Fractie::Scadere(Fractie& obiect1,Fractie& obiect2)
{
    int numitor_final;
    int numarator_final;


    if(obiect1.numitor == obiect2.numitor)
    {
        numitor_final = obiect1.numitor;
        numarator_final = obiect1.numarator - obiect2.numarator;

        cout << "Fractia dupa scadere este: " << numarator_final << "/" << numitor_final  << endl;
        
    }
    else
    {
        int aux = obiect1.numitor;
        obiect1.numarator = obiect1.numarator * obiect2.numitor;
        obiect1.numitor = obiect1.numitor * obiect2.numitor;

        obiect2.numarator = obiect2.numarator * aux;
        obiect2.numitor = obiect2.numitor * aux;


        numitor_final = obiect2.numitor;
        numarator_final = obiect1.numarator - obiect2.numarator;

        cout << "Fractia dupa scadere este: " << numarator_final << "/" << numitor_final << endl;
        


    }
}


void Fractie::print()
{
    cout << "numaratorul este: " << this->numarator << " iar numitorul este: " << this->numitor << endl;
}


int CMMDC(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    
    return a;
}

























