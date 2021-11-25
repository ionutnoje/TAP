#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue coada(10);

    // try
    // {
        coada.enqueue(1);
        coada.enqueue(2);
        coada.enqueue(3);
        coada.enqueue(4);
        coada.enqueue(5);
    //}
    // catch(Queue::Queue_full exceptie)
    // {
    //     cout << "coada este plina!" << endl;
    // }

    coada.print();
    


    return 0;
}