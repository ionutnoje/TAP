#pragma once
#ifndef STIVASTATICA_H
#define STIVASTATICA_H
#include <iostream>
using namespace std;
class StackAbstract {
public:
	virtual void push(int) = 0;
	virtual int pop() = 0;
	virtual int peek() = 0;
	virtual bool isempty() = 0;
	virtual bool isfull() = 0;
	virtual void print() = 0;
	class Stack_Underflow {};
	class Stack_Overflow{};
};
class ArrayStack: public StackAbstract
{
private:
	int* vector;
	int top;
	int max;
public:
	ArrayStack(int max = 100);
	ArrayStack(const ArrayStack&);
	~ArrayStack();
	ArrayStack& operator=(const ArrayStack&);
	virtual void push(int);
	virtual int pop();
	virtual int peek();
	virtual bool isempty();
	virtual bool isfull();
	virtual void print();
	friend ostream& operator<<(ostream&, const ArrayStack&);
	friend istream& operator>>(istream&, ArrayStack&);
};
#endif 

