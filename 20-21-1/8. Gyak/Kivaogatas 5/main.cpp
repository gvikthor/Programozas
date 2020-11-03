#include <iostream>
#include <vector>

using namespace std;

struct Busz{
    int szam;
    float ferohely;
    float utasszam;
};

bool zsufoltE(Busz aktualis){
    return aktualis.utasszam/aktualis.ferohely > 0.8;
}

bool uresE(Busz aktualis){
    return aktualis.utasszam/aktualis.ferohely < 0.2;
}

/*
5
34 50 25
160 130 125
7 150 160
960 60 5
9 150 60
*/

int main()
{
    vector<Busz> adatok, zsufolt, ures;
    int meret;

    //Beolvasás
    cin >> meret;
    adatok.resize(meret);
    for(int i = 0; i < meret; i++){
        cin >> adatok[i].szam;
        cin >> adatok[i].ferohely;
        cin >> adatok[i].utasszam;
    }

    //Feladat
    for(int i = 0; i < meret; i++){
        if( zsufoltE(adatok[i]) ){
            zsufolt.push_back(adatok[i]);
        }
        if( uresE(adatok[i]) ){
            ures.push_back(adatok[i]);
        }
    }

    //Kiírás
    cout << "Zsufolt buszok" << endl;
    for(int i = 0; i < zsufolt.size(); i++){
        cout <<"> " << zsufolt[i].szam << endl;
    }
    cout << "Ures buszok" << endl;
    for(int i = 0; i < ures.size(); i++){
        cout <<"> " << ures[i].szam << endl;
    }

    return 0;
}
