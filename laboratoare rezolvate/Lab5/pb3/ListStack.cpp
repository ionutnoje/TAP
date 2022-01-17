#include "ListStack.h"
ListStack::ListStack(const ListStack& param) {
	this->top = param.top;
}
ListStack& ListStack::operator=(const ListStack& param) {
	this->top = param.top;
	return *this;
}
void ListStack::push(int info) {
	Node* temp = new Node(info);
	temp->succ = top;
	top = temp;
}
/*int ListStack::pop()
{
	if (!isempty())
	{
		ListStack::Node* temp = top;
		bool ok = true;
		while (ok) {
			if (temp->succ == NULL)
			{
				ok = false;
				break;
			}
			else
			{
				if (temp->succ->succ == NULL)
					ok = false;
				break;
			}
			while (temp->succ->succ != NULL)
			{
				temp = temp->succ;
				if (temp->succ->succ == NULL) 
					ok = false;
			}
		}
		ListStack::Node* penultim = temp;
		if (penultim->succ != NULL)
		{
			ListStack::Node* ultim = temp->succ;
			int info = ultim->info;
			penultim->succ = NULL;
			ultim->~Node();
			return info;
		}
		else {
			int info = penultim->info;
			penultim->succ = NULL;
			penultim->~Node();
			return info;
		}
	}
	else
	{
		StackAbstract::Stack_Underflow exception;
		throw exception;
	}
}*/
int ListStack::pop()
{
	if (!isempty())
	{
		ListStack::Node* temp = top;
	
			while (temp->succ->succ != NULL)
			{
				temp = temp->succ;
			}
		ListStack::Node* penultim = temp;
		ListStack::Node* ultim = temp->succ;
		int info = ultim->info;
		penultim->succ = NULL;
		ultim->~Node();
		return info;
	}
	else
	{
		StackAbstract::Stack_Underflow exception;
		throw exception;
	}
}
ostream& ListStack::operator<<(ostream& os) {
	ListStack::Node* temp = top;
	while (temp != NULL)
	{
		os << temp->info << " ";
		temp = temp->succ;
	}
	os << endl;
	return os;
}
istream& ListStack::operator>>(istream& is) {
	int info;
	is >> info;
	Node* temp = new Node(info);
	temp->succ = top;
	top = temp;
	return is;
}
int ListStack::peek() {
	return top->info;
}
bool ListStack::isempty()
{
	if (top == NULL) return true;
	return false;
}