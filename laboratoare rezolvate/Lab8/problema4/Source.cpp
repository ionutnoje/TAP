#include <iostream>
#include <set>
#include "Student.h"
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
	set<Student> studentinume;
	set<Student, ComparaNota> studentinota;
	while (!fin.eof()) {
		string cnp, nume;
		double notaex, notalab;
		int nrabsente;
		fin >> cnp >> nume >> notalab >> notaex >> nrabsente;
		Student s(cnp, nume, notalab, notaex, nrabsente);
		studentinume.insert(s);
		studentinota.insert(s);
	}
	set<Student>::iterator itnume;
	fout << "Dupa nume:" << endl;
	for (itnume = studentinume.begin(); itnume != studentinume.end(); ++itnume) {
		itnume->operator<<(fout);
	}
	fout << endl << "Dupa nota:" << endl;
	set<Student, ComparaNota>::iterator itnota;
	for (itnota = studentinota.begin(); itnota != studentinota.end(); ++itnota) {
		itnota->operator<<(fout);
	}
	Student s;
	if (studentinume.find(s) != studentinume.end()) {
		cout << "gasit" << endl;
	}
	else cout << "nu am gasit" << endl;
	int x, y;
	cout << "dati x:";
	cin >> x;
	cout << "dati y:";
	cin >> y;
	double xx = (double)x;
	double yx = (double)y+0.1*x;
	for (itnota = studentinota.begin(); itnota != studentinota.end(); ++itnota) {
		if (itnota->notaex >= xx && itnota->notaex <= yx) {
			itnota->operator<<(cout);
		}
	}
	cout << endl << "studentii cu mai putin de 11 absente sunt:" << endl;
	for (itnota = studentinota.begin(); itnota != studentinota.end(); ++itnota) {
		if (itnota->nrabs < 11) {
			itnota->operator<<(cout);
		}
	}
	fin.close();
	fout.close();
	cout << "Done. Rezultat e in fisier" << endl;
	return 0;
}