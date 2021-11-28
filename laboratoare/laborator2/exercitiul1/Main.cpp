#include "Fractie.h"
#include <iostream>

using namespace std;


int main()
{

    Fractie fractie1(3,4);
    Fractie fractie2(20,32);
    cout << "fractie1: " << endl; 
    fractie1.print();    
    cout << "fractie2: " << endl;
    fractie2.print();

    fractie1.Adunare(fractie1,fractie2);
    cout << endl;
    fractie2.Scadere(fractie1,fractie2);

    cout << "cmmdc a celor doua numere este " << CMMDC(20,32);
    
    
    fractie2.Simplifica();

    fractie2.reciproc();

    cout << "valoarea functiei egal este: " << fractie1.egal(fractie2) << endl;
    


    return 0;
}