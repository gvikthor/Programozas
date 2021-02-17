#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << "Almafa123" << endl
         << "Szilvafa" << endl << "Lorem ipsum" << endl;

    int szam1 = 5; //integer, egész, IN
    int szam2 = 10;

    cout << szam1 + szam2 << endl;

    int szam3 = szam1 + szam2;
    cout << szam3 << endl << szam1-szam2 << endl
         << szam1*szam2 << endl << szam2 / szam1 << endl;

    cout << szam1 / szam2 << endl;

    float tortszam1 = 0.643;    //double, float --> törtszám, lehet pontatlan
    float tortszam2 = 0.258773;
    cout << tortszam1 + tortszam2 << endl;


    string szoveg1 = "Az alma";
    string szin = "piros";

    string nagyszoveg = szoveg1 + " " + szin;
    cout << nagyszoveg << endl;

    float eredmeny1 = szam1 + tortszam1;
    int   eredmeny2 = szam1 + tortszam1;
    cout << eredmeny1 << " " << eredmeny2 << endl;

    int nagyszam = 2147483646;
    cout << nagyszam << endl;
    nagyszam = nagyszam + 1;
    cout << nagyszam << endl;
    nagyszam = nagyszam + 1;
    cout << nagyszam << endl;
    nagyszam = nagyszam + 1;
    cout << nagyszam << endl;


    return 0;
}
