#include<iostream>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<list>
#include<fstream>
#include<string>

using namespace std;

string getElement(list<string> s, int poz)
{
	list<string>::iterator it = s.begin();

	for (int i = 0; i < poz; i++)
		it++;

	return *it;
}

int getMaxLungime(list<string> s)
{
	list<string>::iterator it = s.begin();
	int max = 0;

	for (int i = 0; i < s.size() - 1; i++)
	{
		if (getElement(s, i).size() > getElement(s, i + 1).size())
			max = getElement(s, i).size();

		it++;
	}

	return max;
}

int main()
{
	list<string> lista;
	ifstream input("fisier_intrare.txt");
	ofstream output("fisier_iesire.txt");

	//Verificare daca s-a accesat in.txt
	if (!input.is_open())
	{
		cout << "Eroare la deschiderea fisierului.";
		return -1;
	}

	//Citire date din txt file
	while (!input.eof())
	{
		string linie = "";
		getline(input, linie);
		lista.push_back(linie);
	}

	cout << "[LOG]: Toate propozitiile au fost copiate.\n\n";

	//cout << getElement(lista, 0) << endl;
	int maxLungime = getMaxLungime(lista);

	string baraVerticala = "|";
	string baraJos(maxLungime, '_');

	list<string>::iterator it = lista.begin();

	//Modificare lista
	while (it != lista.end())
	{
		int lungimeCuvantCurent = it->length();

		string spatiu(maxLungime - lungimeCuvantCurent, ' ');
		spatiu += '|';

		it->insert(0, baraVerticala);
		*it = *it + spatiu;
		//lista.push_back(spatiu);

		it++;
	}

	lista.push_front(baraJos);
	lista.push_back(baraJos);

	it = lista.begin();

	//Scriere lista finala in output.txt
	while (it != lista.end())
	{
		
		output << *it;
		it++;
		output << "\n";

	}

	cout << "[LOG]: Poti verifica fisierul.";

	input.close();
	output.close();
	return 0;
}


/* subpunct b) L.insert(it+1,barajos);
    ++it;
}


    return 0;
}



list<string> -> fiecare element este o linie
   for1
                inainte de push_back se pune in fata liniei |
				push_back linie
				se calc. max. liniilor
				
Inca o data se parcurge  (for2) list 
				se ia fiecare element la sfarsitul lui se pune nr.spatii pt. completare
                string sp:"        " -> nr. de spatii dif. lung. linie-lungmax
				element+sp+"|"
				
push_front string barajos "____________________________" lungmax   
push_back si la sf. listei
b) bara jos se adauga si in al doilea for dupa fiecare linie


string barajos(10,'_');
for(it=L.begin();it!=L.end();++it){
    lungcuvcurent=it->length(); //lungcuvcurent=(*it).length();
    string spatii(lungmax-lungcuvcurent,' ');
	*it=*it+spatii+"|";
   /* subpunct b) L.insert(it+1,barajos);
    ++it;
}
*/