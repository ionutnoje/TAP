#pragma once    //are grija ca include ul acestui fisier sa se exec o singura data
#ifndef _STACK_  //
#define _STACK_  //

class Stack
{
private:
    int max, top;
    int* vector;


public:
    //Stack(); mai bine folosim constructor cu parametru
    Stack(int max = 100);//protoripuri de metoda
    ~Stack();//destructor
    Stack(const Stack& param);//constructor de copiere(este obligatoriu in fiecare clasa)//preia ca param o stiva si o copiaza in mod identic in alta stiva cu top,max etc
    void push(int);//nu trebuie neaparat denumire de parametru,in unele cazuri trebuie ca si mai sus la max
    bool isfull();
    bool isempty();
    void pop();
    int peek();
    void print();

    class Stack_empty {};
    class Stack_full {};


};
#endif