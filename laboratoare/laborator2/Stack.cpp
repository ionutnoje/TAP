#include "Stack.h"
#include <iostream>

using namespace std;


//lipseste tipul de retul la constructor


Stack::Stack(int max) :max(max) //campul max din obiect este initializat cu param Max
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


Stack::Stack(const Stack& param)
{
    this->max = param.max;
    this->top = param.top;
    this->vector = new int[max];
    for (int i = 0; i <= top; i++)
    {
        this->vector[i] = param.vector[i];
    }
}


bool Stack::isfull()
{
    if (top == max)
    {
        return true;
    }
    else return false;
}


bool Stack::isempty()
{
    if (top == 0)
    {
        return true;
    }
    else return false;
}


void Stack::push(int element)
{
    if (isfull() != true)
    {
        vector[top] = element;
        top++;
    }
    else
    {
         Stack_full exceptie;
         throw exceptie;
    }



}


void Stack::pop()
{
    if (isempty() != true)
    {
        vector[top] == NULL;
        top--;
    }
    else
    {
        Stack_empty exceptie;
        throw exceptie;
    }
}


int Stack::peek()
{
    if (isempty() == true)
    {
        Stack_empty exceptie;
        throw exceptie;
    }
    else
    {
        return vector[top];
    }
}


void Stack::print()
{
    if (isempty() == true)
    {
        Stack_empty exceptie;
        throw exceptie;
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            cout << "vector[" << i << "]= " << vector[i];
        }
    }
}


