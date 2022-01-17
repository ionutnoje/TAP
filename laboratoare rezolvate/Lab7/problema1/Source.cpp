#include <iostream>
using namespace std;
template <class T>
T max(T* v, int n) {
	T max = v[0];
	for (int i = 1; i < n; ++i) {
		if (v[i] > max) max = v[i];
	}
	return max;
}

template <class T>
T min(T* v, int n) {
	T min = v[0];
	for (int i = 1; i < n; ++i) {
		if (v[i] < min) min = v[i];
	}
	return max;
}
template <class T>
bool cautare_secventiala(T* v, int n, T cheie) {
	for (int i = 0; i < n; ++i) {
		if (v[i] == cheie) return true;
	}
	return false;
}

template <class T>
bool cautare_binara(T* v, int n, T cheie) {
	int inc = 0, sf = n - 1;
	while (inc < sf) {
		int mij = (inc + sf) / 2;
		if (v[mij] == cheie) return true;
		else if (v[mij] < cheie) inc++;
		else sf--;
	}
	return false;
}

template <class T>
void bublesort(T* v, int n) {
	bool ok = 0;
	do {
		ok = 0;
		for (int i = 0; i < n - 1; ++i) {
			if (v[i] > v[i + 1]) {
				T aux = v[i];
				v[i] = v[i+1];
				v[i + 1] = aux;
				ok = 1;
			}
		}
	} while (ok == 1);
}

template <>
void bublesort<char>(char* v, int n) {
	bool ok = 0;
	do {
		ok = 0;
		for (int i = 0; i < n - 1; ++i) {
			if (v[i] < v[i + 1]) {
				char aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				ok = 1;
			}
		}
	} while (ok == 1);
}//varianta specializata se implementeaza obligatoriu dupa specializare

template <class T>
void afisare(T* v, int n) {
	for (int i = 0; i < n; ++i)
		cout << v[i] << " ";
	cout << endl;
}

int main() {
	int n;
	cout << "n=";
	cin >> n;
	int* v = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	afisare(v, n);
	bublesort(v, n);
	afisare(v, n);
	int m;
	cout << "m=";
	cin >> m;
	double* w = new double[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> w[i];
	}
	cout << max(w, m) << endl;
	afisare(w, m);
	cout << "n=";
	cin >> n;
	char* s = new char[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	afisare(s,n);
	bublesort<char>(s, n);
	afisare(s, n);
	delete[] w, v,s;
}