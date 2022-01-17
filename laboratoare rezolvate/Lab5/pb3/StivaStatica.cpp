#include "StivaStatica.h"
#include <iostream>
using namespace std;
ArrayStack::ArrayStack(int max):max(max){
	this->top = 0;
	this->vector = new int[max];
}
ArrayStack::~ArrayStack() {
	this->top = 0;
	this->max = 0;
	delete[] this->vector;
}
ArrayStack::ArrayStack(const ArrayStack& param)
{
	this->top = param.top;
	this->max = param.max;
	this->vector = new int[max];
	for (int i = 0; i < top; ++i)
	{
		this->vector[i] = param.vector[i];
	}
}
ArrayStack& ArrayStack::operator=(const ArrayStack& param) {
	this->top = param.top;
	this->max = param.max;
	this->vector = new int[max];
	for (int i = 0; i < top; ++i)
	{
		this->vector[i] = param.vector[i];
	}
	return *this;
}
bool ArrayStack::isfull()
{
	if (top == max) return true;
	return false;
}
bool ArrayStack::isempty()
{
	if (top == 0) return true;
	return false;
}
void ArrayStack::push(int val)
{
	if (!isfull())
	{
		vector[top] = val;
		++top;
	}
	else
	{
		Stack_Overflow exceptie;
		throw exceptie;
	}
}
int ArrayStack::pop()
{
	if (!isempty())
	{
		--top;
		int val = vector[top];
		return val;
	}
	else
	{
		Stack_Underflow exceptie;
		throw exceptie;
	}
}
int ArrayStack::peek()
{
	if (!isempty())
	{
		return vector[top - 1];
	}
	else
	{
		Stack_Underflow exceptie;
		throw exceptie;
	}
}
void ArrayStack::print()
{
	for (int i = 0; i < top; ++i)
	{
		cout << vector[i] << " ";
	}
	cout << endl;
}
ostream& operator<<(ostream& os, const ArrayStack& param) {
	for (int i = 0; i < param.top; ++i)
	{
		os << param.vector[i] << " ";
	}
	os << endl;
	return os;
}
istream& operator>>(istream& is, ArrayStack& param) {
	if (!param.isfull())
	{
		is>>param.vector[param.top];
		++param.top;
	}
	else
	{
		ArrayStack::Stack_Overflow exception;
		throw exception;
	}
}