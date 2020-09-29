#include <iostream>

using namespace std;

int main()
{
    // KIVÁLASZTÁSNÁL A KERESETT ELEM >>>BIZTOSAN<<< LÉTEZIK -> tehát nem kell i < meret

    const int meret = 8;
    string kartyanevek[meret] = {"7", "8", "9", "10", "also", "felso", "kiraly", "asz"};
    int kartyaertekek[meret]  = { 7 ,  8 ,  9 ,  10 ,  11   ,  12    ,  13     ,  14};

    string keresettElem = "felso";

    int i = 0;
    while(kartyanevek[i] != keresettElem){
        i++;
    }

    cout << "A kartyalap erteke: " << kartyaertekek[i];

    return 0;
}
