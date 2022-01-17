#include <iostream>
#include <string>
#include<map>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
	ifstream fin("fisier.txt");
	if (!fin) {
		cout << "file not found" << endl;
		return -1;
	}
	ofstream fout("rezultat.txt");//se creaza pe disc
	map<unsigned, map<string, unsigned> > M;
	string linie;
	unsigned i = 0;//nr linie
	while (!fin.eof()) {
		getline(fin, linie);//citire linie cu linie pana la sf fisierului
		stringstream ss(linie);
		string cuv;
		map<string,unsigned> aux;//map pregtatit pentru map interior
		while (!ss.eof()) {
			//aux.clear();
			ss >> cuv;
			//verif daca exista in map-mic, da ++ contor, daca nu, se inserezreaza in map-mic
			pair<map<string, unsigned>::iterator, bool>ret;
			ret = aux.insert(pair<string, unsigned>(cuv, 1));
			//ret.second == true daca exista, false daca nu exista
			if (ret.second == false) {
				//suntem la a doua aparitie cel putin
				ret.first->second++;
				//ret.fisrt este iteratorul pointer catre pereche
				//ret.first->first cuv "bbb"
				//ret.first->second este 10
			}
		}
		//se va insera linia+aux in M
		M.insert(pair<unsigned, map<string, unsigned>>(i, aux));
		aux.clear();
		i++;
	}
	map<unsigned, map<string, unsigned> >::iterator itM;
	map<string, unsigned>::iterator itm;
	for (itM = M.begin(); itM != M.end(); ++itM) {
		fout << "Linia " << itM->first << endl;
		for (itm = itM->second.begin(); itm != itM->second.end(); ++itm) {
			fout << itm->first << " " << itm->second << " ";
		}
		fout << endl;
	}

	fin.close();
	fout.close();
	cout << "Done. Rezultat e in fisier" << endl;
	return 0;
}