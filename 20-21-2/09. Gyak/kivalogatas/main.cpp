#include <iostream>
#include <vector>

using namespace std;

bool feltetel(int elem){
    return elem > 50;
}

struct Ember{
    string nev;
    int eletkor;
};

bool otvenEvesnelIdosebb(Ember elem){
    return elem.eletkor > 50;
}

int main()
{
    /*
    Ciklus elemek mint elem:
        Ha feltetel(elem):
            kivalogatottElemek.hozzáfûz(elem)
        Elágazás vége
    Ciklus vége
    */

    // Kiválogatás

    ////Beolvasás
    vector<int> elemek = {1,7,3,12,5,7,4,2,53,7,13,56,847,653};
    vector<int> kivalogatottElemek;

    ////Feladatmegoldás
    for(int i = 0; i < elemek.size(); i++){
        if( feltetel(elemek[i]) ){
            kivalogatottElemek.push_back(elemek[i]);
        }
    }

    ////Kiírás
    for(int i = 0; i < kivalogatottElemek.size(); i++){
        cout << kivalogatottElemek[i] << endl;
    }



    // Kiválogatás recorddal

    ////Beolvasás
    vector<Ember> emberek = {
        {"Nandor", 21},
        {"Istvan", 56},
        {"Denes", 7},
        {"Dalma", 95},
        {"Erik", 157},
        {"Laura", 25}
    };
    vector<Ember> kivalogatottEmberek;

    ////Feladatmegoldás
    for(int i = 0; i < emberek.size(); i++){
        if( otvenEvesnelIdosebb(emberek[i]) ){
            kivalogatottEmberek.push_back(emberek[i]);
        }
    }

    ////Kiírás
    for(int i = 0; i < kivalogatottEmberek.size(); i++){
        cout << kivalogatottEmberek[i].nev << endl;
    }

    return 0;
}
