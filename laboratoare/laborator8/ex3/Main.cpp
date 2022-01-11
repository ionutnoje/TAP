// #include <iostream> 
// #include <string>
// #include <map>
// #include <fstream>  //filestream
// #include <sstream>  //stringstream



// using namespace std;

// int main()
// {
//     ifstream fin("intrare.txt"); //fisier de intrare
//     if(!fin)
//     {
//         cout << "nu se gaseste fisierul de intrare!" << endl;
//         return -1;
//     }

//     ofstream fout("rezultat.txt"); //se creaza pe disc is se creaza automat

//     map<unsigned,map<string,unsigned>> M;

//     map<unsigned,map<string,unsigned>> itM;//iterator
//     map<string, unsigned>::iterator itm;//iterator // cel cu care o sa parcurgem

//     string linie;
//     unsigned i = 0; // nr de linie// contor de linie

//     while(!fin.eof())
//     {
//         getline(fin, linie); //citire liniie cu linie pana la sfarsitul fisierului
//         stringstream ss(linie);
//         string cuvant;
//         map<string,unsigned> aux; // map care se pregateste pentru map interior


//         while( !ss.eof()) 
//         {
//             //aux.clear(); // nu se pune clear aici
//             ss >> cuvant;// ca si cin >> cuv, dar ia din fisier
//             //verif daca exista in map mic, daca da contor++
//             //daca nu sa se insereze
//             pair<map<string,unsigned>::iterator, bool> ret;
//             ret = aux.insert(pair<string, unsigned>(cuvant,1)); 

//             //se execute, insereaza cand nu exista perechea
//             if(ret.second == false)
//             {
//                 //suntem la cel putin a doua aparitie
//                 ret.first->second++;//retul revine cu un indicator la perechea care apare inca o data
//                 //ret.second este true daca exista deja cuvantul
//                 //ret.second este false daca nu exista cuvantul
//                 //ret.first este iteratorul pointerul catre pereche

//                 //(bbb,10)
//                 //ret.first->first cuv "bbb"
//                 //ret.first->second este 10->creste pe 11
//             }
//         }
//         //  se va insera linia + aux in M

//         M.insert(pair<unsigned,map<string,unsigned>>(i, aux));
//         aux.clear();
//         i++;
//     }//while inchis citire linie



//     for(itM = M.begin();itM!=M.end();++itM){
//         fout<<"linie: " << itM->first << endl;
//         for(itm = itM->second.begin(); itm!=itM->second.end(); ++itm)
//         {
//             fout<< itm->first<<" " << itm->second;
//         }
//     }






//     fin.close();
//     fout.close();
//     cout << "gata vezi rez in fisier!" << endl;
//     return 0;
// }

#include<iostream> //iostream
#include<string>
#include<map>
#include<fstream> //filestream 
#include<sstream> //stringstream 
using namespace  std;
int main() {
	ifstream fin("intrare.txt"); //fisier de intrare
	if (!fin) {
		cout << "Nu se gaseste fisierul de intrare\n";
		return -1;
	}
	ofstream fout("rezultat.txt");//se creeaza pe disc
	map<unsigned, map<string, unsigned>> M;


	string linie;
	unsigned i = 0; //nr. de linie
	while (!fin.eof()) { //nu e sf. fisier
		getline(fin, linie); //citire linie cu line
		stringstream ss(linie);
		string cuv;
		map<string, unsigned> aux;
		//map care se pregateste pt. map interior
		while (!ss.eof()) 
		{
			//aux.clear(); //NU se pune clear aici
			ss >> cuv; //cin>>cuv
			//verif. daca exista im map-mic, da ++
			//da nu sa se insereze
			pair<map<string, unsigned>::iterator, bool> ret;
			ret = aux.insert ( pair<string, unsigned>(cuv, 1));
			//se executa, insereaza cand nu exista perechea
			if (ret.second == false) {
				//suntem la cel putin a 2-a aparitie
				ret.first->second++;
				/* ret.second este true daca exista deja cuv.
				   ret.second este false NU exista
				   ret.first este interatul pointerul catre pereche
				   (bbb,10)
				   ret.first->first cuv "bbb" 
				   ret.first->second este 10->creste pe 11 */

			}
		}
		//se va insera linia+aux in M
		M.insert(pair<unsigned, map<string, unsigned>>(i, aux));
		aux.clear();
		i++;
	}//while inchis citire linie 
	map<unsigned, map<string, unsigned>>::iterator itM;
	map<string, unsigned>::iterator itm;
	for (itM = M.begin(); itM != M.end(); ++itM) {
		fout << "Linia " << itM->first << endl;
		for (itm = itM->second.begin(); itm != itM->second.end(); ++itm) {
			fout << itm->first << " " << itm->second<<"\t";
		}
		fout<<endl;
	}
	
	
	
	
	fin.close();
	fout.close();
	cout << "Gata vezi rez in fisier!";
	return 0;
}
/*Ex1
	set<string> S;
	....
	ss>>cuv;
	S.insert(cuv);
	set<string>::iterator itS;
	for (itS = S.begin(); itS != S.end(); ++itS)
		fout<<*itS;
	*/
	/*Ex2
	/* map<string,unsigned> M; 
	citire while(...){
	   fin>>cuv;
	   declarare ret
	   ret=M.insert(pair<string,unsigned>(cuv,1);
	   daca este false ...
	        ret.first->second++;
	   }
	
	*/












