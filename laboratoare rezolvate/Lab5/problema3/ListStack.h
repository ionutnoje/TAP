#pragma once
#ifndef _LISTSTACK_
#define _LISTSTACK_
#include "StivaStatica.h"
class ListStack:StackAbstract
{
	class Node {
		friend class ListStack;
	private:
		int info;
		Node* succ;
	public:
		Node(int info) :info(info) {
			succ = NULL;
		}
		~Node() {
			delete succ;
		}

	};
private:
	Node* top;
public:
	inline ListStack(int info=0) {
		top = new Node(info);
	}
	inline ~ListStack() {
		top->~Node();
	}
	ListStack(const ListStack& param);
	ListStack& operator=(const ListStack&);
	void push(int) override;
	int pop() override;
	int peek() override;
	bool isempty()override;
	bool isfull() override {
		return false;
	}
	void print() override {};
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};
#endif
