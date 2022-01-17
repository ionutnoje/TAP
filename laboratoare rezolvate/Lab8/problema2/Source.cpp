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
	map<string, unsigned>  M;
	string linie;
	unsigned i = 0;//nr linie
	while (!fin.eof()) {//citire linie cu linie pana la sf fisierului
		string cuv;
		fin >> cuv;
		pair<map<string, unsigned>::iterator, bool>ret;

		ret = M.insert(pair<string, unsigned>(cuv, 1));
		if(ret.second ==false)
		{
			ret.first->second++;
		}
		i++;
	}
	map<string, unsigned>::iterator itM;
	for (itM = M.begin(); itM != M.end(); ++itM) {
		fout << itM->first << " " << itM->second;
		fout << endl;
	}

	fin.close();
	fout.close();
	cout << "Done. Rezultat e in fisier" << endl;
	return 0;
}