#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int max) :max(max)
{
	this->front = 0;
	this->end = 0;
	this->vector = new int[max];
}
Queue::~Queue()
{
	front = 0;
	end = 0;
	max = 0;
	delete[] vector;
}
Queue::Queue(const Queue& param)
{
	this->front = param.front;
	this->end = param.end;
	this->max = param.max;
	this->vector = new int[max];
	for (int i = front; i < end; ++i)
	{
		this->vector[i] = param.vector[i];
	}
}
bool Queue::isfull()
{
	if (end == max) return true;
	return false;
}
bool Queue::isempty()
{
	if (end == front) return true;
	return false;
}
void Queue::enqueue(int val)
{
	if (!isfull())
	{
		vector[end] = val;
		++end;
	}
	else
	{
		Queue_full exceptie;
		throw exceptie;
	}
}
int Queue::dequeue()
{
	if (!isempty())
	{
		int val = vector[front];
		memcpy(vector, vector + 1, max);
		--end;
		return val;
	}
	else
	{
		Queue_empty exceptie;
		throw exceptie;
	}
}
int Queue::getfront()
{
	if (!isempty())
	{
		return vector[front];
	}
	else
	{
		Queue_empty exceptie;
		throw exceptie;
	}
}
int Queue::getend()
{
	if (!isempty())
	{
		return vector[end-1];
	}
	else
	{
		Queue_empty exceptie;
		throw exceptie;
	}
}
void Queue::afisare()
{
	for (int i = 0; i < end; ++i)
	{
		cout << vector[i] << " ";
	}
	cout << endl;
}