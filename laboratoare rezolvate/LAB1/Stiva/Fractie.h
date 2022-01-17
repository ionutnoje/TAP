#pragma once
#ifndef _FRACTIE_//C
#define _FRACTIE_
class Fractie
{
private:
	int numarator, numitor;
public:
	Fractie(int numarator=0, int numitor =1);
	Fractie(const Fractie& param);
	~Fractie();
	Fractie adunare(const Fractie& param);
	Fractie scadere(const Fractie& param);
	Fractie inmultire(const Fractie& param);
	Fractie impartire(const Fractie& param);
	void print();
	static int cmmdc(int a, int b);
	Fractie simplifica();
	Fractie reciproc();
	bool egal(const Fractie& param);
};
#endif
