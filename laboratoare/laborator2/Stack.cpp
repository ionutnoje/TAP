#include "Stack.h"

//lipseste tipul de retul la constructor

Stack::Stack(int Max):max(Max) //campul max din obiect este initializat cu param Max
{             
    //max = -1;
    //this->max = -1;
    //this->max = max;// same as max(max);
    this->top = 0;
    this->vector = new int[max];
    
}

Stack::~Stack()
{
    this->top = 0;
    this->max = 0;
    delete[] vector;
}