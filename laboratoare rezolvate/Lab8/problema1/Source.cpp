#include <iostream>
#include <string>
#include<set>
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
	set<string> M;
	string linie;
	unsigned i = 0;//nr linie
	while (!fin.eof()) {
		getline(fin, linie);//citire linie cu linie pana la sf fisierului
		stringstream ss(linie);
		string cuv;
		while (!ss.eof()) {
			ss >> cuv;
			M.insert(cuv);
			
		}
	}
	set<string>::iterator itm;
		for (itm = M.begin(); itm != M.end(); ++itm) {
			fout << *itm << " ";
		}
		fout << endl;
	fin.close();
	fout.close();
	cout << "Done. Rezultat e in fisier" << endl;
	return 0;
}