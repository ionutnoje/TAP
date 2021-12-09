#include<iostream>
#include"Fractie.h"
using namespace std;
int main(){
	Fractie f1(1,2);
    Fractie f2(3,4);

    cout << "f1 initial: ";
    f1.afisare();
    cout << endl;
    cout << "f2 initial: " ;
    f2.afisare();
    cout << endl;

    Fractie suma = f1 + f2;
    cout << "f1 + f2 = ";
    suma.afisare();


    Fractie scadere = f1 - f2;
    cout << "\nf1 - f2 = ";
    scadere.afisare();


    Fractie inmultire = f1 * f2;
    cout << "\nf1 * f2 = ";
    inmultire.afisare();


    Fractie impartire = f1 / f2;
    cout << "\nf1 / f2 = ";
    impartire.afisare();


    cout << endl;
    f1*=f2;
    cout << "f1 = " ;
    f1.afisare();
    

    --f1;
    cout << "\nf1 predecrementat " ;
    f1.afisare();

    f1--;
    cout << "\nf1 postdecrementat ";
    f1.afisare();


    cout << "\nf2 dupa atribuire ";
    f2 = 3;
    f2.afisare();
    

    f1 = 2;
    f2 = 3;

    bool rez = f1 == f2;
    cout << "f1 == f2: " ;
    cout << rez << endl;



    bool rez1 = f1 < f2;
    cout << "f1 < f2: " ;
    cout << rez1 << endl;


    cout << "reciproca lui f1 ";
    f1.reciproc();
    f1.afisare();
    cout << endl;



    return 0;
}
