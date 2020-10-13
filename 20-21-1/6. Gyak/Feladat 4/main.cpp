#include <iostream>
#include <vector>

using namespace std;

struct Szoba{
    string nev;
    int meret;
};

struct Lakas{
    string cim;
    vector<Szoba> szobak;
};

int lakasMerete(Lakas l){
    int osszmeret = 0;
    for(int i = 0; i < l.szobak.size(); i++){
        osszmeret += l.szobak[i].meret;
    }
    return osszmeret;
}

/*
4
Szerb
5
nappali
20
konyha
10
eloszoba
5
haloszoba
10
halaszoba
10
Harmadikker
5
nappali
20
haloszoba
15
haloszoba
10
konyha
10
furdoszoba
10
Lagymanyos
2
nappali
15
konyha
10
Kek
4
nappali
20
konyha
15
haloszoba
15
furdoszoba
7
*/

int main()
{

    int lakasokSzama;
    vector<Lakas> lakasok;

    cin >> lakasokSzama;
    lakasok.resize(lakasokSzama);

    for(int i = 0; i < lakasokSzama; i++){
        cin >> lakasok[i].cim;
        int szobakSzama;
        cin >> szobakSzama;
        lakasok[i].szobak.resize(szobakSzama);
        for(int j = 0; j < szobakSzama; j++){
            cin >> lakasok[i].szobak[j].nev;
            cin >> lakasok[i].szobak[j].meret;
        }
    }

    /////////////////////
    // Mekkora a legnagyobb lakás?

    /*int maxErtek = 0;
    for(int i = 0; i < lakasokSzama; i++){
        int osszeg = 0;
        for(int j = 0; j < lakasok[i].szobak.size(); j++){
            osszeg += lakasok[i].szobak[j].meret;
        }
        if(osszeg > maxErtek){
            maxErtek = osszeg;
        }
    }*/

    int maxErtek = 0;
    for(int i = 0; i < lakasokSzama; i++){
        int osszeg = lakasMerete(lakasok[i]);
        if(osszeg > maxErtek){
            maxErtek = osszeg;
        }
    }

    cout << "A legnagyobb lakas " << maxErtek << "m2";


    return 0;
}
