#include "StivaStatica.h"
#include <iostream>
#include "ListStack.h"
using namespace std;
int main() {
	/*ArrayStack s(5);
	try {
		for (int i = 0; i < 5; ++i)
		{
			cin >> s;
		}
	}
	catch (ArrayStack::Stack_Overflow ex) {
		cout << "stiva plina";
	}
	try {
		int r = s.pop();
		cout << r;
	}
	catch (ArrayStack::Stack_Underflow ex) {
		cout << "stiva goala";
	}
	cout << s;
	cout << s.peek();*/
	ListStack s(1);
	s.push(2);
	s.push(3);
	s.operator<<(cout);
	try {
		int info = s.pop();
		cout << info << endl;
	}
	catch (StackAbstract::Stack_Underflow ex) {
		cout << "stiva goala!";
	}
	s.operator<<(cout);
	s.operator>>(cin);
	s.operator<<(cout);
	cout << s.peek();
}