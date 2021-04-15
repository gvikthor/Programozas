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
            kivalogatottElemek.hozz�f�z(elem)
        El�gaz�s v�ge
    Ciklus v�ge
    */

    // Kiv�logat�s

    ////Beolvas�s
    vector<int> elemek = {1,7,3,12,5,7,4,2,53,7,13,56,847,653};
    vector<int> kivalogatottElemek;

    ////Feladatmegold�s
    for(int i = 0; i < elemek.size(); i++){
        if( feltetel(elemek[i]) ){
            kivalogatottElemek.push_back(elemek[i]);
        }
    }

    ////Ki�r�s
    for(int i = 0; i < kivalogatottElemek.size(); i++){
        cout << kivalogatottElemek[i] << endl;
    }



    // Kiv�logat�s recorddal

    ////Beolvas�s
    vector<Ember> emberek = {
        {"Nandor", 21},
        {"Istvan", 56},
        {"Denes", 7},
        {"Dalma", 95},
        {"Erik", 157},
        {"Laura", 25}
    };
    vector<Ember> kivalogatottEmberek;

    ////Feladatmegold�s
    for(int i = 0; i < emberek.size(); i++){
        if( otvenEvesnelIdosebb(emberek[i]) ){
            kivalogatottEmberek.push_back(emberek[i]);
        }
    }

    ////Ki�r�s
    for(int i = 0; i < kivalogatottEmberek.size(); i++){
        cout << kivalogatottEmberek[i].nev << endl;
    }

    return 0;
}
