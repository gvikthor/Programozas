#include <iostream>
#include <vector>

using namespace std;

//1,5,87,3,12,56
//7,6,12,8,10,5
//1,5,87,3,12,56,7,6,8,10

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

    unio = elemek1
    Ciklus elemek2 mint elem:
        Ha nem benneVan(unio, elem):
            unio.hozzáfûz(elem)
        Elágazás vége
    Ciklus vége
    */

    //Unio
    ////Beolvasás
    vector<int> szamok1 = {1,5,87,3,12,56};
    vector<int> szamok2 = {7,6,12,8,10,5};
    vector<int> unio;

    ////Feladat megoldása
    unio = szamok1;
    for(int i = 0; i < szamok2.size(); i++){
        if(!benneVan(unio, szamok2[i])){
            unio.push_back(szamok2[i]);
        }
    }

    ////Kiírás
    for(int i = 0; i < unio.size(); i++){
        cout << unio[i] << endl;
    }

    //Unio recordokra
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
        {"Peter", 27, true},
        {"Laszlone", 30, false},
        {"Dalma", 95, false},
        {"Orsolya", 2, false},
        {"Laura", 24, false},
        {"Gergo", 299, true}
    };
    vector<Ember> emberUnio;

    ////Feladat megoldása
    emberUnio = emberek1;
    for(int i = 0; i < emberek2.size(); i++){
        if(!benneVanEmber(emberUnio, emberek2[i])){
            emberUnio.push_back(emberek2[i]);
        }
    }

    ////Kiírás
    for(int i = 0; i < emberUnio.size(); i++){
        cout << emberUnio[i].nev << endl;
    }

    return 0;
}
