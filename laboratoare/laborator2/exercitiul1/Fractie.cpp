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


void Fractie::Adunare(Fractie& obiect2)
{
    int numitor_final;
    int numarator_final;


    if(this->numitor == obiect2.numitor)
    {
        numitor_final = this->numitor;
        numarator_final = this->numarator + obiect2.numarator;

        cout << "Fractia dupa adunarea este: " << numarator_final << "/" << numitor_final << endl;
        
    }
    else
    {
        int aux = this->numitor;
        this->numarator = this->numarator * obiect2.numitor;
        this->numitor = this->numitor * obiect2.numitor;

        obiect2.numarator = obiect2.numarator * aux;
        obiect2.numitor = obiect2.numitor * aux;


        numitor_final = obiect2.numitor;
        numarator_final = this->numarator + obiect2.numarator;

        cout << "Fractia dupa adunarea este: " << numarator_final << "/" << numitor_final << endl;
        


    }
}


void Fractie::Scadere(Fractie& obiect2)
{
    int numitor_final;
    int numarator_final;


    if(this->numitor == obiect2.numitor)
    {
        numitor_final = this->numitor;
        numarator_final = this->numarator - obiect2.numarator;

        cout << "Fractia dupa scadere este: " << numarator_final << "/" << numitor_final  << endl;
        
    }
    else
    {
        int aux = this->numitor;
        this->numarator = this->numarator * obiect2.numitor;
        this->numitor = this->numitor * obiect2.numitor;

        obiect2.numarator = obiect2.numarator * aux;
        obiect2.numitor = obiect2.numitor * aux;


        numitor_final = obiect2.numitor;
        numarator_final = this->numarator - obiect2.numarator;

        cout << "Fractia dupa scadere este: " << numarator_final << "/" << numitor_final << endl;
        


    }
}

void Fractie::Inmultire(Fractie& obiect2)
{
    cout << "rezultatul inmultirii este : " << this->numarator * obiect2.numarator << "/" << this->numitor * obiect2.numitor << endl;
}


void Fractie::Impartire(Fractie& obiect2)
{
    cout << "rezultatul impartirii este : " << this->numarator * obiect2.numitor << "/" << this->numitor * obiect2.numarator << endl;
}


void Fractie::print()
{
    cout << "numaratorul este: " << this->numarator << " iar numitorul este: " << this->numitor << endl;
}


void Fractie::Simplifica()
{
    int cmmdc = CMMDC(this->numarator,this->numitor);

    if(this->numarator == this->numitor)
    {
        cout << "rezultatul simplificarii este 1" << endl;
    }
    else 
    {   
        if(this->numarator % this->numitor == 0)
        {
            cout << "fractia nu se poate simplifica, iar rezultatul este: " << this->numarator/this->numitor << endl;
        }
        else
        {
            this->numarator = this->numarator/cmmdc;
            this->numitor = this->numitor/cmmdc;
            cout << "fractia simplificata este: " << this->numarator << "/" << this->numitor << endl;
        
        }

    }

}


void Fractie::reciproc()
{
    int aux;

    cout << "\nfractia initiala este: " << this->numarator << "/" << this->numitor << endl; 


    aux = this->numarator;
    this->numarator = this->numitor;
    this->numitor = aux;


    cout << "fractia dupa inversare este: " << this->numarator << "/" << this->numitor << endl; 


}


bool Fractie::egal(const Fractie& obiect)
{
    if(this->numarator == obiect.numarator)
    {
        if(this->numitor == obiect.numitor)
        {
            return true;
        }
        else return false;
    }
    return false;
}


























