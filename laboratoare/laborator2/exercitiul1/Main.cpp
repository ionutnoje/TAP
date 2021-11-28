#include "Fractie.h"
#include <iostream>

using namespace std;


int main()
{

    Fractie fractie1(3,4);
    Fractie fractie2(3,5);
    cout << "fractie1: " << endl; 
    fractie1.print();    
    cout << "fractie2: " << endl;
    fractie2.print();

    fractie1.Adunare(fractie1,fractie2);
    cout << endl;
    fractie2.Scadere(fractie1,fractie2);

    cout << "cmmdc a celor doua numere este" << CMMDC(12,41);
    
    
    


    return 0;
}