#pragma once
#ifndef _QUEUE_
#define _QUEUE_

class Queue
{

    private: 
        int max, front, rear;
        int *vector;


    public:
        ~Queue();
        Queue(int max = 100);
        Queue(const Queue& param);
        void enqueue(int);
        bool isfull();
        bool isempty();
        void dequeue();
        void print();
        int elements();
        int peak();


        class Queue_empty{};
        class Queue_full{};


};
#endif