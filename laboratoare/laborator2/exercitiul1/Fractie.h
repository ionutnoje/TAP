#pragma once    //are grija ca include ul acestui fisier sa se exec o singura data
#ifndef _FRACTIE_  //
#define _FRACTIE_  

class Fractie
{
        public:
            Fractie();
            Fractie(int);
            Fractie(int , int );
            Fractie(const Fractie& obiect);
            int Adunare( Fractie& obiect1, Fractie& obiect2);
            int Scadere( Fractie& obiect1, Fractie& obiect2);
            int Inmultire( Fractie& obiect1, Fractie& obiect2);
            int Impartire( Fractie& obiect1, Fractie& obiect2);
            static int CMMDC(int a, int b);
            int Simplifica();
            int reciproc();
            bool egal(const Fractie& obiect);
            void print();




    private:
        int numarator;
        int numitor;



        

};
#endif