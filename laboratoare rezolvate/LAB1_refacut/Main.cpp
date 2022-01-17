#include "Fractie.h"
#include <iostream>

using namespace std;


int main()
{
    Fractie fractie1(2,4);
    Fractie fractie2(5,8);

    fractie1.print();
    fractie2.print();

    fractie1.adunare(fractie2).print();

   

    return 0;
}