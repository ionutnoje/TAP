#pragma once
#ifndef _DREAPTA_//C
#define _DREAPTA_
class Dreapta
{
private:
	int n, m;
public:
	Dreapta(int m = 1, int n = 0);
	Dreapta(const Dreapta& param);
	~Dreapta();
	void afisare();
	friend int main();
};
#endif
