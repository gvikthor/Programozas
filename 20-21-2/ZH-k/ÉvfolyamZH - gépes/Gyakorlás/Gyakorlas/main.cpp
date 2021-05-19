#include <iostream>
#include <vector>

using namespace std;

int allatkert_ossz(vector<int> allatok){
    int szum = 0;
    for(int i = 1; i < allatok.size(); i++){
        szum += allatok[i];
    }
    return szum;
}

int allat_elofordulas(vector< vector<int> > allatkertek, int faj){
    int db = 0;
    for(int kert = 1; kert < allatkertek.size(); kert++){
        if(allatkertek[kert][faj] > 0){
            db++;
        }
    }
    return db;
}

int main()
{
    /*
    A standard bemenetelső sorában az állatkertek száma(1≤N≤100),
    az állatfajták száma(1≤M≤100) és a róluk szóló információk száma(1≤K≤10000) van.
    A következő Ksorban so-ronként szerepelegy állatkert sorszáma(1≤Kerti≤N),
    az ott levő állatfajta sorszáma (1≤Ai≤M) és a darabszáma (1≤Di≤100)
    */

    /*
    4 5 9 2 1 8 4 1 7 1 2 3 3 2 1 4 2 2 1 4 6 3 4 1 1 5 4 3 5 1
    */

    int allatkertek_szama, allatfajtak_szama, sorok_szama;
    int akt_kert, akt_faj, akt_adat;
    cin >> allatkertek_szama >> allatfajtak_szama >> sorok_szama;

    /*
    \ 0 1 2 3 4 5 ---allatok
    0
    1   0 0 0 0 0
    2   0 8 0 0 0
    3   0 0 0 0 0
    4   7 0 0 0 0
    5   0 0 0 0 0
    |
    |
    |
    a
    k
    */

    vector< vector<int> > allatok; // allatok[5][7] megadja az 5-ös állatkertben élő 7-es fajú állatok darabszámát
    allatok.resize(allatkertek_szama+1);
    for(int kert = 1; kert <= allatkertek_szama; kert++){
        allatok[kert].resize(allatfajtak_szama+1);

        for(int faj = 1; faj <= allatfajtak_szama; faj++){
            allatok[kert][faj] = 0;
        }
    }

    for(int i = 0; i < sorok_szama; i++){
        cin >> akt_kert >> akt_faj >> akt_adat;
        allatok[akt_kert][akt_faj] = akt_adat;
    }


    /*cout << endl << endl;

    for(int kert = 1; kert <= allatkertek_szama; kert++){
        for(int faj = 1; faj <= allatfajtak_szama; faj++){
            cout << allatok[kert][faj] << " ";
        }
        cout << allatkert_ossz(allatok[kert]) << endl;
    }

    cout << endl << endl;*/


    ///1. feladat - maximumkiválasztás és összegzés
    int max_index, max_ertek;
    max_index = 1;
    max_ertek = allatkert_ossz(allatok[max_index]);
    for(int kert = 2; kert <= allatkertek_szama; kert++){
        int akt_osszeg = allatkert_ossz(allatok[kert]);
        if(akt_osszeg > max_ertek){
            max_index = kert;
            max_ertek = akt_osszeg;
        }
    }

    ///2. feladat - (felt minimumkeresés és megszámlálás) és kiválogatás
    int min_index, min_ertek;
    bool volt = false;
    for(int faj = 1; faj <= allatfajtak_szama; faj++){ //felt min
        int akt_db = allat_elofordulas(allatok, faj); //megsz
        if(akt_db > 0){
            if(!volt || akt_db < min_ertek){
                min_index = faj;
                min_ertek = akt_db;
                volt = true;
            }
            /*
            if(volt){
                if(akt_db < min_ertek){
                    min_index = faj;
                    min_ertek = akt_db;
                }
            }else{
                volt = true;
                min_index = faj;
                min_ertek = akt_db;
            }
            */
        }
    }

    vector<int> minimalis_allatok;
    for(int faj = 1; faj <= allatfajtak_szama; faj++){ //kivalogatas
        int akt_db = allat_elofordulas(allatok, faj);
        if(akt_db == min_ertek){
            minimalis_allatok.push_back(faj);
        }
    }

    cout << "#" << endl; //1. feladat
    cout << max_index << endl;

    cout << "#" << endl; //2. feladat
    cout << min_ertek << endl;
    for(int allat : minimalis_allatok){
        cout << allat << " ";
    }
    cout << endl;

    cout << "#" << endl; //3. feladat
    cout << "0" << endl;

    cout << "#" << endl; //4. feladat
    cout << "0" << endl;

    cout << "#" << endl; //5. feladat
    cout << "0" << endl;
    cout << "0" << endl;

    return 0;
}
