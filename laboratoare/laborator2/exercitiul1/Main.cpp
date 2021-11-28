#include "Fractie.h"
#include <iostream>

using namespace std;


int main()
{

    Fractie fractie1(3,4);
    Fractie fractie2(4,3);
    cout << "fractie1: " << endl; 
    fractie1.print();    
    cout << "fractie2: " << endl;
    fractie2.print();

    // fractie1.Adunare(fractie2);
    // cout << endl;
    // fractie2.Scadere(fractie2);

    // cout << "cmmdc a celor doua numere este " << CMMDC(20,32);
    
    
    // fractie2.Simplifica();

    // fractie2.reciproc();

    // cout << "valoarea functiei egal este: " << fractie1.egal(fractie2) << endl;
    

    fractie1.Inmultire(fractie2);
    
    fractie1.Impartire(fractie2);


    return 0;
}