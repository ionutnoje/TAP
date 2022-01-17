#pragma once//are grija ca include-ul acestui fisier sa se execute o singura data
#ifndef _STACK_//C
#define _STACK_
class Stack
{
private:
	int max, top;
	int* vector;
public:
	Stack(int max = 100);//prototipuri de metoda
	~Stack();
	Stack(const Stack& param);
	void push(int);
	bool isfull();
	bool isempty();
	int pop();
	int peek();
	void afisare();
	class Stack_full {};//o clasa imbricata goala
	class Stack_empty {};
};

#endif
