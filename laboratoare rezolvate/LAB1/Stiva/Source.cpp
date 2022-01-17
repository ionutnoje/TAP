#include "Stack.h"
#include "Queue.h"
#include "Fractie.h"
#include <iostream>
using namespace std;
int main()
{
	/*Stack stiva;//max == 100
	Stack st(5);//st.max == 50
	try {
		stiva.push(1);
		stiva.push(2);
		stiva.push(3);//top == 3
		st.push(200);
		st.push(100); // top == 2
		st.push(5);
		st.push(6);
		st.push(7);
		st.push(8);
	}
	catch (Stack::Stack_full exceptie)
	{
		cout << "stiva plina";
	}
	stiva.afisare();
	cout <<endl<< stiva.peek();
	try {
		int val = stiva.pop();
		cout << endl << val;
		//val = stiva.pop();
		//cout << endl << val;
	}
	catch (Stack::Stack_empty exceptie)
	{
		cout << "stiva goala";
	}
	cout << endl;
	stiva.afisare();
	Stack stivacopie(st);
	//st.~Stack();
	//stiva.~Stack();
	cout << endl << endl;*/
	/*Queue q;
	try {
		q.enqueue(1);
		q.enqueue(2);
		q.enqueue(3);
		q.enqueue(4);
	}
	catch (Queue::Queue_full)
	{
		cout << "coada plina";
	}
	q.afisare();
	cout << q.getfront() << " " << q.getend() << endl;
	try {
		int val = q.dequeue();
		cout << val << endl;
		//val = stiva.pop();
		//cout << endl << val;
	}
	catch (Queue::Queue_empty exceptie)
	{
		cout << "coada goala";
	}
	q.afisare();*/
	Fractie f1(3, 2);
	f1.print();
	Fractie f2(9,4);
	f1.adunare(f2).print();
	f1.scadere(f2).print();
	f1.inmultire(f2).print();
	f1.impartire(f2).print();
	cout << Fractie::cmmdc(10, 15) << endl;
	f1.impartire(f2).simplifica().print();
	f2.reciproc().print();
	Fractie f3(3, 2);
	cout << f1.egal(f3);
}