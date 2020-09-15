#include <iostream>

using namespace std;

int main()
{
    int szam1, szam2, hanyszor;
    cout << "Add meg az elso szamot!" << endl;
    cin >> szam1;
    cout << "Add meg a masodik szamot!" << endl;
    cin >> szam2;

    /*
    15 3
    15 12 9 6 3 0
    1  1  1 1 1

    16 3
    16 13 10 7 4 1
    1  1  1  1 1
    */

    for(hanyszor = 0; szam1 >= szam2; szam1 = szam1 - szam2){
        //hanyszor = hanyszor + 1;          szam1 -= szam2
        //hanyszor += 1;
        hanyszor++;
    }
    /*
    for(hanyszor = 0; szam1 >= szam2; hanyszor++){
        szam1 = szam1 - szam2;
    }


    for(hanyszor = 0; szam1 >= szam2;){
        szam1 = szam1 - szam2;
        hanyszor++;
    }


    hanyszor = 0;
    while(szam1 >= szam2){
        szam1 = szam1 - szam2;
        hanyszor++;
    }
    */
    cout << "Hanyados: " << hanyszor << endl << "Maradek: " << szam1 << endl;

    return 0;
}
