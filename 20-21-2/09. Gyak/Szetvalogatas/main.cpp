#include <iostream>
#include <vector>

using namespace std;

// Egymást kizárják
bool negativ(int elem){
    return elem < 0;
}
bool nulla(int elem){
    return elem == 0;
}
bool pozKicsi(int elem){
    return 0 < elem && elem < 50;
}
bool pozNagy(int elem){
    return 50 < elem;
}

struct Ember{
    string nev;
    int eletkor;
    bool ferfi;
};

bool fiatalFerfi(Ember ember){
    return ember.ferfi && ember.eletkor < 25;
}
bool idosFerfi(Ember ember){
    return ember.ferfi && ember.eletkor >= 25;
}
bool fiatalNo(Ember ember){
    return !ember.ferfi && ember.eletkor < 25;
}
bool idosNo(Ember ember){
    return !ember.ferfi && ember.eletkor >= 25;
}

int main()
{
    /*
    Ciklus elemek mint elem
        Ha feltetel1(elem):
            kategoria1.hozzáfûz(elem)
        Egyébként ha feltetel2(elem):
            kategoria2.hozzáfûz(elem)
        Egyébként ha feltetel3(elem):
            kategoria3.hozzáfûz(elem)
        Egyébként ha feltetel4(elem):
            kategoria4.hozzáfûz(elem)
        ...
        Egyébként ha feltetelN(elem):
            kategoriaN.hozzáfûz(elem)
    Ciklus vege
    */

    //Beolvasás
    vector<int> szamok = {6,-6,783,32,76,-976,0,-3,56,87,12,8,0,56,76,0,-5,4,0,65,7};
    vector<int> negativSzamok, nullaSzamok, pozKicsiSzamok, pozNagySzamok;

    //Feladat megoldása
    for(int i = 0; i < szamok.size(); i++){
        if(negativ(szamok[i])){
            negativSzamok.push_back(szamok[i]);

        }else if(nulla(szamok[i])){
            nullaSzamok.push_back(szamok[i]);

        }else if(pozKicsi(szamok[i])){
            pozKicsiSzamok.push_back(szamok[i]);

        }else if(pozNagy(szamok[i])){
            pozNagySzamok.push_back(szamok[i]);
        }
    }

    //Kiírás
    cout << "Negativ szamok: " << endl;
    for(int i = 0; i < negativSzamok.size(); i++){
        cout << negativSzamok[i] << endl;
    }

    cout << "Nulla szamok: " << endl;
    for(int i = 0; i < nullaSzamok.size(); i++){
        cout << nullaSzamok[i] << endl;
    }

    cout << "Pozitiv kicsi szamok: " << endl;
    for(int i = 0; i < pozKicsiSzamok.size(); i++){
        cout << pozKicsiSzamok[i] << endl;
    }

    cout << "Pozitiv nagy szamok: " << endl;
    for(int i = 0; i < pozNagySzamok.size(); i++){
        cout << pozNagySzamok[i] << endl;
    }

    //Kiválogatás recordokkal
    vector<Ember> emberek = {
        {"Nandor", 21, true},
        {"Istvan", 56, true},
        {"Denes", 7, true},
        {"Dalma", 95, false},
        {"Erik", 157, true},
        {"Laura", 24, false}
    };
    vector<Ember> fiatalNok, idosNok, fiatalFerfiak, idosFerfiak;

    //Feladat megoldása
    for(int i = 0; i < emberek.size(); i++){
        if(fiatalFerfi(emberek[i])){
            fiatalFerfiak.push_back(emberek[i]);

        }else if(idosFerfi(emberek[i])){
            idosFerfiak.push_back(emberek[i]);

        }else if(fiatalNo(emberek[i])){
            fiatalNok.push_back(emberek[i]);

        }else if(idosNo(emberek[i])){
            idosNok.push_back(emberek[i]);
        }
    }

    //Kiírás
    cout << "Fiatal ferfiak: " << endl;
    for(int i = 0; i < fiatalFerfiak.size(); i++){
        cout << fiatalFerfiak[i].nev << endl;
    }

    cout << "Idos ferfiak: " << endl;
    for(int i = 0; i < idosFerfiak.size(); i++){
        cout << idosFerfiak[i].nev << endl;
    }

    cout << "Fiatal nok: " << endl;
    for(int i = 0; i < fiatalNok.size(); i++){
        cout << fiatalNok[i].nev << endl;
    }

    cout << "Idos nok: " << endl;
    for(int i = 0; i < idosNok.size(); i++){
        cout << idosNok[i].nev << endl;
    }


    return 0;
}
