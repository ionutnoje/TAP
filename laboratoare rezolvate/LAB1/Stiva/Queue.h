#pragma once
#ifndef _QUEUE_//C
#define _QUEUE_
class Queue
{
private:
	int max, front, end;
	int* vector;
public:
	Queue(int max = 100);//prototipuri de metoda
	~Queue();
	Queue(const Queue& param);
	void enqueue(int);
	bool isfull();
	bool isempty();
	int dequeue();
	int getfront();
	int getend();
	void afisare();
	class Queue_full {};//o clasa imbricata goala
	class Queue_empty {};
};
#endif
