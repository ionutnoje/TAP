#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int max): max(max)
{
    this->front = 0;
    this->rear = -1;
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
    if(front == max)
    {
        return true;
    }
    else return false;

}

bool Queue::isempty()
{
    if(rear == -1)
    {
        return true;
    
    }
    else return false;
}

void Queue::enqueue(int element)
{
    if(isfull() != true)
    {
        vector[front] = element;
        front++;
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
        vector[rear + 1] == NULL;
        rear++;
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
        for(int i = rear; i <= front; i++)
        {
            cout << "vector[" << i << "]= " << vector[i] << endl;
        }
    }
}


int Queue::elements()
{
    if(isempty() == true)
    {
        cout << "coada are 0 elemente" << endl;
    }
    else if(isfull() == true)
    {
        cout << "coada are " << this->max << " elemente" << endl;
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
        cout << "nu sunt elemente in coada" << endl;
    }
    else
    {
        return vector[front];
    }
}