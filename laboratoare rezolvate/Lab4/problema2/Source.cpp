#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex c(4, 3);
	cout << c;
	Complex c1=c--;
	cout << c << c1;
	c1 = ++c;
	cout << c << c1;
	cout << c1 * c;
	c1 += c;
	cout << endl<< c1 << c;
}