#include <iostream>
#include "Animal.h"
#include "Mamifer.h"
#include "Pasare.h"
#include "Ornitorinc.h"

using namespace std;

int main()
{
	Mamifer mamifer("mamifer", 10, 30.5);
	cout << mamifer.heterotrof();
	cout << mamifer.naste();

	Pasare pasare("pasare, 5, 10.5");
	cout << pasare.heterotrof();
	cout << pasare.zboara();

	Ornitorinc ornitorinc("x");

	Mamifer ma("x");
	

	

	

	



	





	return 0;
}