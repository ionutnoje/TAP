#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack st(12);//campul max pentru obiectul st este 50

    try {
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
    }
    catch(Stack::Stack_full exception){
        cout << "stiva plina" << endl;
    }

    st.print();

    try {
        st.pop();
    }
    catch(Stack::Stack_empty exception)
    {
        cout << "stiva este goala" << endl;
    }
    
    st.print();


    




    return 0;

}