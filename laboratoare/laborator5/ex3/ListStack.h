#pragma once
#ifndef _LISTSTACK_
#define _LISTSTACK_
#include <iostream>
#include "Stack.h"

using namespace std;

class ListStack :public Stack
{

public:
	class Nod
	{
	private:
		int info;
		Nod* succ;
	public:
		Nod(int info = 0, Nod* succ = NULL);
		Nod(const Nod&);
		~Nod();
		Nod& operator=(const Nod&);

		friend class ListStack;
	};

	Nod* front = NULL;

	ListStack(Nod* front = NULL);
	ListStack(const ListStack&);
	~ListStack();
	ListStack& operator=(const ListStack&);

	virtual void push(int);
	virtual void pop(int);
	virtual bool isFull();
	virtual bool isEmpty();
	virtual void print();	
};

#endif