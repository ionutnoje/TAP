#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int max): max(max)
{
    this->front = 0;
    this->rear = 0;
    this->vector = new int[max];
}

Queue::~Queue()
{
    this->front = 0;
    this->rear = 0;
    delete[] vector;
}

Queue::Queue(const Queue& param)
{
    this->max = param.max;
    this->front = param.front;
    this->rear = param.rear;
    this->vector = new int[max];
    for(int i = 0; i<= front; i++)
    {
        this->vector[i] = param.vector[i];
    }
}


bool Queue::isfull()
{
    if(rear == max)
    {
        return true;
    }
    else return false;

}

bool Queue::isempty()
{
    if(rear == 0)
    {
        return true;
    
    }
    else return false;
}

void Queue::enqueue(int element)
{
    if(isfull() != true)
    {
        vector[rear] = element;
        rear++;
    }
    else
    {
        //arunc exceptie
    }
}

void Queue::dequeue()
{
    if(isempty() != true)
    {
        for(int i = 0; i < rear - 1; i++)
        {
            vector[i] = vector[i + 1];
        }
        rear--;
    }
    else
    {
        //arunc eroare
    }
}

void Queue::print()
{
    if(isempty() == true)
    {
        cout << "coada este goala";
    }
    else
    {
        for(int i = 0; i <= rear; i++)
        {
            cout << "vector[" << i << "]= " << vector[i] << endl;
        }
    }
}


int Queue::elements()
{
    if(isempty() == true)
    {
        return 0;
    }
    else if(isfull() == true)
    {
       return max;
    }
    else
    {
        return front;
    }
}


int Queue::peak()
{
    if(isfull() == true)
    {
        return vector[max];
    }
    else if(isempty() == true)
    {
        cout << "coada este goala" << endl;
    }
    else
    {
        return vector[front];
    }
}