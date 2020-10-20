#include <iostream>
#include <vector>

using namespace std;

//Írjon programot, amely egy egész számokból álló tömb minden elemét megnöveli egy számmal!

void novel1(vector<int> tomb, int szam){
    for(int i = 0; i < tomb.size(); i++){
        tomb[i] += szam;
    }
}

vector<int> novel2(vector<int> tomb, int szam){
    for(int i = 0; i < tomb.size(); i++){
        tomb[i] += szam;
    }
    return tomb;
}

void novel3(vector<int> &tomb, int szam){
    for(int i = 0; i < tomb.size(); i++){
        tomb[i] += szam;
    }
}


/// visszateresitipus fuggvenynev(parametertipus parameter) --> a paramétert nem közvetlen módosítjuk, hanem lemásoljuk
/// visszateresitipus fuggvenynev(parametertipus &parameter) -> a paramétert közvetlen módosítjuk, tehát az eredeti érték változik

int main()
{
    vector<int> szamok = {5,7,9,4,15,2,7,0,-5,9};
    int N = 5;

    //novel1(szamok, N);

    /*vector<int> eredmeny = novel2(szamok, N);

    for(int i = 0; i < eredmeny.size(); i++){
        cout << i << ".: " << eredmeny[i] << endl;
    }*/

    novel3(szamok, N);
    for(int i = 0; i < szamok.size(); i++){
        cout << i << ".: " << szamok[i] << endl;
    }

    return 0;
}
