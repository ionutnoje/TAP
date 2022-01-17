#include "Film.h"
#include "Actor.h"
Film::Film(double buget, double pret, int nractori): buget(buget),pret(pret), nractori(nractori) {
	actori = new Actor * [nractori];
	index = 0;
}
Film::Film(const Film& param): buget(param.buget), pret(param.pret), nractori(param.nractori),index(param.index) {
	actori = new Actor * [nractori];
	for (int i = 0; i < nractori; ++i)
	{
		actori[i] = param.actori[i];
	}
}
Film::~Film() {
	for (int i = 0; i < nractori; ++i)
	{
		delete actori[i];
	}
	delete[] actori;
}
void Film::adaugareActor(Actor* actor) {
	if (index < nractori)
	{
		actori[index] = new Actor(*actor);
		++index;
	}
}
void Film::stergereActor() {
	actori[index-1]->~Actor();
	--index;
}
int comparareBuget(const Film& film1, const Film& film2) {
	if (film1.buget == film2.buget) return 0;
	if (film1.buget > film2.buget) return 1;
	return -1;
}
int comparareActori( Film& film1, Film& film2) {
	if (film1.index == film2.index) return 0;
	if (film1.index > film2.index) return 1;
	return -1;
}
void sortareFilme(int nrfilme, Film** filme ) {
	for (int i = 0; i < nrfilme - 1; ++i)
	{
		for (int j = i + 1; j < nrfilme; ++j)
		{
			int b = comparareBuget(*filme[i], *filme[j]);
			int nra = comparareActori(*filme[i], *filme[j]);
			if (b == 1)
			{
				Film* aux = new Film(*filme[i]);
				filme[i] = filme[j];
				filme[j] = aux;
			}
			else if (b == 0)
			{
				if (nra == 1)
				{
					Film* aux = new Film(*filme[i]);
					filme[i] = filme[j];
					filme[j] = aux;
				}
			}
		}
	}
}

void actoriComuni(const Film& film1, const Film& film2) {
	for (int i = 0; i < film1.index; ++i)
	{
		for (int j = 0; j < film2.index; ++j)
		{
			if (verifActori(*film1.actori[i], *film2.actori[j]))
			{
				film1.actori[i]->afisareActor();
			}
		}
	}
 }
void Film::afisareFilm() {
	cout << "buget= " << buget << "  pret=" << pret << endl;
	for (int i = 0; i < index; ++i)
	{
		actori[i]->afisareActor();
	}
}