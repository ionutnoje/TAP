#include <iostream>
using namespace std;

class HumanBeing
{
    public :
        void display()
        {
            cout << "hello i am a human being";
        }
};


int main()
{
    HumanBeing humanBeing;
    humanBeing.display();


    return 0;
}