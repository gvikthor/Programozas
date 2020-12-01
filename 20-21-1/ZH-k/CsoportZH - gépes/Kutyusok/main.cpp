#include <iostream>
#include <vector>

using namespace std;

struct Kutya{
    string nev;
    int kor;
};

bool voltIlyenNev(string nev, vector<Kutya> kutyak){
    bool van = false;
    for(int i = 0; i < kutyak.size() && !van; i++){
        van = kutyak[i].nev == nev;
    }
    return van;
}

int main()
{
    bool kilep = false;
    while(!kilep){
        //Beolvasás
        /*
        vector<Kutya> kutyusok = {
            {nev: "Aron", kor: 25},
            {nev: "Nandor", kor: 56},
            {nev: "Istvan", kor: 17},
            {nev: "Gergo", kor: 48},
            {nev: "Peter", kor: 70},
        };
        */
        vector<Kutya> kutyusok;
        int N;
        cin >> N;

        /*
        kutyusok.resize(N);
        for(int i = 0; i < N; i++){
            Kutya beolvasott;
            cin >> beolvasott.nev >> beolvasott.kor;
            if(!voltIlyenNev(beolvasott.nev, kutyusok)){
                kutyusok[i] = beolvasott;
            }else{
                i--;
            }
        }
        */

        while(kutyusok.size() < N){
            Kutya beolvasott;
            cin >> beolvasott.nev >> beolvasott.kor;

            if(!voltIlyenNev(beolvasott.nev, kutyusok) && beolvasott.kor >= 10){
                kutyusok.push_back(beolvasott);
            }
        }


        //Feladat
        double osszeg = 0;
        for(int i = 0; i < kutyusok.size(); i++){
            osszeg += kutyusok[i].kor;
        }
        cout << "Atlag eletkor: " << osszeg/(kutyusok.size()*12) << endl;

        /*bool van = false;
        Kutya idos;
        int j = 0;
        while(j < kutyusok.size() && !van){
            van = kutyusok[j].kor >= 120;
            if(van){
                idos = kutyusok[j];
            }
            j++;
        }*/

        bool van = false;
        Kutya idos;
        for(int j = 0; j < kutyusok.size() && !van; j++){
            if(kutyusok[j].kor >= 120){
                van = true;
                idos = kutyusok[j];
            }
        }

        //Kiírás
        if(van){
            cout << idos.nev << " (" << idos.kor << ")";
        }else{
            cout << "Nem volt 10 eves vagy idosebb kutyus.";
        }

        cout << endl << endl << "Szeretnel kilepni? i = igen, n = nem" << endl;
        string bemenet;
        cin >> bemenet;
        if(bemenet == "i"){
            kilep = true;
        }
    }

    return 0;
}
