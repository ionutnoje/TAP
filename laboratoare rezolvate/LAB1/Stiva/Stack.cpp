
#include "Stack.h"
#include <iostream>
using namespace std;
//lipseste tipul de retur la constructor
//in cpp nu mia definesti param implicit, doar denumirea
Stack::Stack(int max):max(max)//campul max din obiect este initializat cu parametrul max
{
	//this->max = max; facut de max(max)
	this->top = 0;
	this->vector = new int[max];
}
Stack::~Stack()
{
	top = 0;
	max = 0;
	delete[] vector;
}
Stack::Stack(const Stack& param)
{
	this->top = param.top;
	this->max = param.max;
	this->vector = new int[max];
	for (int i = 0; i < top; ++i)
	{
		this->vector[i] = param.vector[i];
	}
}
bool Stack::isfull()
{
	if (top == max) return true;
	return false;
}
bool Stack::isempty()
{
	if (top == 0) return true;
	return false;
}
void Stack::push(int val)
{
	if (!isfull())
	{
		vector[top] = val;
		++top;
	}
	else
	{
		Stack_full exceptie;
		throw exceptie;
	}
}
int Stack::pop()
{
	if (!isempty())
	{
		--top;
		int val = vector[top];
		return val;
	}
	else
	{
		Stack_empty exceptie;
		throw exceptie;
	}
}
int Stack::peek()
{
	if (!isempty())
	{
		return vector[top-1];
	}
	else
	{
		Stack_empty exceptie;
		throw exceptie;
	}
}
void Stack::afisare()
{
	for (int i = 0; i < top; ++i)
	{
		cout << vector[i] << " ";
	}
	cout << endl;
}