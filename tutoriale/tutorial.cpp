#include <iostream>
using namespace std;

class HumanBeing
{
    public :
        void display()
        {
            cout << "hello i am a human being";
        }
        int nr = 5;
        string nume = "ionut";
};


int main()
{
    HumanBeing humanBeing;
    humanBeing.display();
    cout << endl;
    cout << "numele: " << humanBeing.nume << endl;
    cout << "varsta: " <<humanBeing.nr << endl;
    


    return 0;
}