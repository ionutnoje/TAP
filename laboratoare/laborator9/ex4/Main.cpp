// #include <iostream>
// #include <algorithm>
// #include <iterator>
// #include <map>
// #include <set>
// #include <fstream>

// using namespace std;

// //in map este cheia din fisier, valoarea: set (tuturor permutarilor cuv)

// int main()
// {
//     ifstream fin("fisier_intrare.txt");
//     ostream fout("fisier_iesire.txt");

//     if(!fin)
//     {
//         cout << "fisier intrare negasit" << endl;
//         return -1;
//     }
//     else
//     {
//         cout << "fisier intrare gasit" << endl;
//     }

//     map<string, set<string>> M;

//     while(!fin.eof())
//     {
//         string cuv;
//         fin >> cuv;//citim cate un cuvant separat prin spatiu din fisier

//         set<string> setPermutari;
//         sort(cuv.begin(),cuv.end());// mere -> eemr, eemr, meer, ......, rmee
//         do{
//             setPermutari.insert(cuv);
//         }
//         while(next_permutation(cuv.begin(),cuv.end()));
//         M.insert(pair<string, set<string>>(cuv, setPermutari));
//         setPermutari.clear();
//     }

//     map<string, set<string>>iterator itM;
//     set<string>iterator itS;
//     for(itM = M.begin(); itM != M.end(); i++) //cheia este: {mere. (eemr,mere,......toate permutarile)}
//     {
//         fout<<itM->first<<":("; //cuv
//         //itM->second este tot setul cuv permutate
//         for(itS = itM->second.begin();itS != itM->second->end(); ++itS)
//         {
//             fout << *itS << ", ";// pointer catre eemr, apoi catre meer, ......
//         }
//         fout << ")" << endl;
//     }




//     fin.close();
//     fout.close();

//     return 0;
// }


#include<iostream> //iostream
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<fstream>
#include<string>
//using namespace std;
int main()
{
	std::ifstream fin("fisier_intrare.txt");
	std::ofstream fout("fisierRezultat.txt");
//in map cheia este cuv din fisier, valoare: set {tuturor permutarilor cuv.}
	if (!fin) {
		std::cout << "Fisier intrare negasit";
		return -1;
	}
	std::map<std::string, std::set<std::string> > M;
	while (!fin.eof()) {
		std::string cuv;
		fin >> cuv; //cin>>cuv;
		std::string cuvorig = cuv;
		std::set<std::string> setperm;
		sort(cuv.begin(), cuv.end()); //mere -> eemr, eemr, meer, .... ,rmee
		do {
			setperm.insert(cuv); //eemr, 
		} while (std::next_permutation(cuv.begin(), cuv.end()));
		M.insert(std::pair<std::string, std::set<std::string> >(cuvorig, setperm));
		setperm.clear();

	}
	fin.close();
	std::map<std::string, std::set<std::string> >::iterator itM; 
	std::set<std::string>::iterator itS;
	for (itM = M.begin(); itM != M.end(); ++itM) {    //mere,(eemr,meer,reem,...,rmee,NULL)
		fout << itM->first << ":{"; //cuv             //pruna,(anpru,........., urpna)
		//itM->second este tot setul cuv. permutate
			for (itS = itM->second.begin(); itS != itM->second.end(); ++itS) {
				fout << *itS << ", "; //pointer catre eemr, ai catre meer,...
			}
		fout << "}"<<std::endl; 
	}
	fout.close();
	return 0;
}