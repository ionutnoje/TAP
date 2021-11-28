#pragma once    //are grija ca include ul acestui fisier sa se exec o singura data
#ifndef _FRACTIE_  //
#define _FRACTIE_  

static int CMMDC(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    
    return a;
}



class Fractie
{
        public:
            Fractie();
            Fractie(int);
            Fractie(int , int );
            Fractie(const Fractie& obiect);
            void Adunare( Fractie& obiect2);
            void Scadere( Fractie& obiect2);
            void Inmultire( Fractie& obiect2);
            void Impartire( Fractie& obiect2);
            void Simplifica();
            void reciproc();
            bool egal(const Fractie& obiect);
            void print();




    private:
        int numarator;
        int numitor;



        

};
#endif