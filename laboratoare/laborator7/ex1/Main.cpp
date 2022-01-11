// #include <iostream>

// using namespace std;


// template <class T>
// T Maximum(T *vector, int n)
// {
//     T m = vector[0];
//     for(int i = 0; i < n; i++)
//     {
//         if(m <= vector[i])
//         {
//             m = vector[i];
//         }
//     }
    
//     return m;
// }

// template <class T>
// void Bubble(T* a, int n)
// {   T aux;
//     bool ok = 0;

//     do{
//         for (int i = 0; i < n-1; i++){
//             if(a[i] > a[i + 1])
//             {
//                 aux = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = aux;
//                 ok = 1;
//             }
//         }
//     }
//     while(ok == 1);
// } 

// template <class T>
// void Afisare(T* a, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         cout << "elementul " << i << " este: " << a[i] <<endl;
//     }
// }



// //varianta specializata se trece dupa cea generalizata
// template <>
// void Bubble<char>(char* a, int n)
// {   char aux;
//     bool ok = 0;

//     do{
//         ok = 0;
//         for (int i = 0; i < n-1; i++){
//             if(a[i] < a[i + 1])
//             {
//                 aux = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = aux;
//                 ok = 1;
//             }
//         }
//     }
//     while(ok == 1);
// } 


// int main()
// {
//     int n;
//     cout << "nr de alemente: " << endl;
//     cin >> n;

//     int *v = new int[n];

//     for( int i = 0; i < n; i++)
//     {
//         cout << "elementul: " << endl;
//         cin >> v[i];
//     }

//     int m;
//     cout << "nr de alemente: " << endl;
//     cin >> m;

//     double *w = new double[m];

//     for( int j = 0; j < m; j++)
//     {
//         cout << "elementul: " << endl;
//         cin >> w[j];
//     }


//     int M1;
//     double M2;

//     M1 = Maximum<int>(v,n);
//     M2 = Maximum<double>(w,m);

//     cout << "maximul din v: " << M1 << endl;
//     cout << "maximul din w: " << M2 << endl;

//     Bubble<int>(v,n);
//     Bubble<double>(w,m);
//     Afisare<int>(v,n);
//     Afisare<double>(w,m);


//     int x;
//     cout << "nr de alemente: " << endl;
//     cin >> x;

//     char *a = new char[x];
//     for(int k = 0; k < x; k++)
//     {
//         cin >> a[k];
//     }

//     Bubble<char>(a,x);
//     Afisare<char>(a,x);

// }


#include <iostream>

using namespace std;

template <class T>
T Minim(T* vector, int n)
{
	T m = vector[0];

	for (int i = 0; i < n; ++i)
	{
		if (vector[i] < m)
			m = vector[i];
	}
	return m;
}

template <class T>
T Maxim(T* vector, int n)
{
	T m = vector[0];

	for (int i = 0; i < n; ++i)
	{
		if (vector[i] > m)
			m = vector[i];
	}
	return m;
}

template <class T>
void Bubble(T* a, int n)
{
	T aux;
	bool ok = 0;
	do {
		ok = 0;
		for (int i = 0; i < n-1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				T aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				ok = 1;
			}
		}
	} while (ok == 1);
}

//template <class T>
//void Bubble<char>(char* a, int n)
//{	
//	bool ok = 0;
//	do {
//		ok = 0;
//		for (int i = 0; i < n - 1; i++) {
//			if (a[i] < a[i + 1])
//			{
//				char aux = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = aux;
//				ok = 1;
//			}
//		}
//	} while (ok == 1);
//}

template <class T>
void afisare(T* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
	}
}

int main() {

	int n;
	cout << "n = ";
	cin >> n;

	int* v = new int[n];
	for (int i = 0; i < n; ++i) {
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}

	double* s = new double[n];
	for (int i = 0; i < n; ++i) {
		cout << "v[" << i << "] = ";
		cin >> s[i];
	}

	int M1;
	double M2;

	M1 = Maxim<int>(v, n);
	M2 = Maxim<double>(s, n);

	//cout << M1 << M2;

	Bubble(v, n);
	//Bubble(s, n);

	afisare(v, n);
	//afisare(s, n);

	/*int x;
	cout << "nr de elemente: " << endl;
	cin >> x;

	char* a = new char[x];
	for (int k = 0; k < x; k++)
	{
		cin >> a[k];
	}

	Bubble<char>(a, x);
	afisare<char>(a, x);*/




	return 0;
}