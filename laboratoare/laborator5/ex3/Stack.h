#pragma once
#ifndef _STACK_
#define _STACK_

class Stack
{
private:
	int max, top;
	int* vector;
public:
	Stack(int max = 100);
	~Stack();
	Stack(const Stack& param);
	Stack& operator=(const Stack&);

	virtual void push(int);
	virtual void pop();
	virtual void peek();
	virtual bool isFull();
	virtual bool isEmpty();
	virtual void print();

	class Stack_full {};
	class Stack_empty {};
};

#endif
