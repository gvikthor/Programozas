#include <iostream>
#include <vector>

using namespace std;

bool benneVan(vector<int> tomb, int elem){
    bool volt = false;
    int i = 0;
    while(i < tomb.size() && !volt){
        volt = tomb[i] == elem;
        i++;
    }

    return volt;
}

struct Ember{
    string nev;
    int eletkor;
    bool ferfi;
};

//feltételeztük, hogy a nevek egyedien azonosítják az embereket
bool benneVanEmber(vector<Ember> tomb, Ember elem){
    bool volt = false;
    int i = 0;
    while(i < tomb.size() && !volt){
        volt = (tomb[i].nev == elem.nev);
        i++;
    }

    return volt;
}

int main()
{
    /*
    elemek1, elemek2
    ...

    Ciklus elemek1 mint elem:
        Ha benneVan(elemek2, elem):
            metszet.hozzáfûz(elem)
        Elágazás vége
    Ciklus vége
    */

    //Metszet
    ////Beolvasás
    vector<int> szamok1 = {1,5,87,3,12,56};
    vector<int> szamok2 = {7,6,12,8,10,5};
    vector<int> metszet;

    ////Feladat megoldása
    for(int i = 0; i < szamok1.size(); i++){
        if(benneVan(szamok2, szamok1[i])){
            metszet.push_back(szamok1[i]);
        }
    }

    ////Kiírás
    for(int i = 0; i < metszet.size(); i++){
        cout << metszet[i] << endl;
    }

    //Metszet recordokra
    ////Beolvasás
    vector<Ember> emberek1 = {
        {"Nandor", 21, true},
        {"Istvan", 56, true},
        {"Denes", 7, true},
        {"Dalma", 95, false},
        {"Erik", 157, true},
        {"Laura", 24, false}
    };
    vector<Ember> emberek2 = {
        {"Laszlo", 27, true},
        {"Istvan", 56, true},
        {"Peter", 27, true},
        {"Laszlone", 30, false},
        {"Dalma", 95, false},
        {"Orsolya", 2, false},
        {"Laura", 24, false},
        {"Gergo", 299, true}
    };
    vector<Ember> emberMetszet;

    ////Feladat megoldása
    for(int i = 0; i < emberek1.size(); i++){
        if(benneVanEmber(emberek2, emberek1[i])){
            emberMetszet.push_back(emberek1[i]);
        }
    }

    ////Kiírás
    for(int i = 0; i < emberMetszet.size(); i++){
        cout << emberMetszet[i].nev << endl;
    }

    return 0;
}
