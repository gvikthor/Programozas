#include <iostream>
#include <vector>

using namespace std;

/// 1. feladathoz
int allatkert_ossz(vector<int> allatok){
    int szum = 0;
    for(int i = 1; i < allatok.size(); i++){
        szum += allatok[i];
    }
    return szum;
}

/// 2. feladathoz
int allat_elofordulas(vector< vector<int> > allatkertek, int faj){
    int db = 0;
    for(int kert = 1; kert < allatkertek.size(); kert++){
        if(allatkertek[kert][faj] > 0){
            db++;
        }
    }
    return db;
}

/// 3. feladathoz
bool mindegyik_par(vector<int> allatok){
    bool mind = true;
    for(int allat = 1; allat < allatok.size() && mind; allat++){
        mind = allatok[allat] == 0 || allatok[allat] > 1;
    }
    return mind;
}

/// 4. feladathoz
bool nincs_ugyanolyan_allat(vector<int> allatok_1, vector<int> allatok_2){
    bool mind_kulonbozik = true;
    for(int allat = 1; allat < allatok_1.size() && mind_kulonbozik; allat++){
        mind_kulonbozik = allatok_1[allat] == 0 || allatok_2[allat] == 0;
    }
    return mind_kulonbozik;
}

/// 5. feladathoz
bool mindbol_legtobb(vector< vector<int> > allatkertek, int kert){
    bool mind_legtobb = true;
    for(int allat = 1; allat < allatkertek[kert].size() && mind_legtobb; allat++){
        if(allatkertek[kert][allat] > 0){
            bool legtobb = true;
            for(int masik_kert = 1; masik_kert < allatkertek.size() && legtobb; masik_kert++){
                if(masik_kert != kert){
                    legtobb = allatkertek[kert][allat] > allatkertek[masik_kert][allat];
                }
            }
            mind_legtobb = legtobb;
        }
    }
    return mind_legtobb;
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
    2   8 0 0 0 0
    3   0 0 0 0 0
    4   7 0 0 0 0
    |
    |
    |
    allatkertek
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

    ///3. feladat - kiválogatás és keresés
    int mindbol_legalabb_par = 0;
    for(int kert = 1; kert <= allatkertek_szama; kert++){
        if(mindegyik_par(allatok[kert])){
            mindbol_legalabb_par++;
        }
    }

    ///4. feladat - keresés, csak szépen összefésüljük az állatkerteket
    bool van_diszjunkt = false;
    int f4_kert1, f4_kert2;
    for(int kert_1 = 1; kert_1 <= allatkertek_szama && !van_diszjunkt; kert_1++){
        for(int kert_2 = kert_1+1; kert_2 <= allatkertek_szama && !van_diszjunkt; kert_2++){
            if(nincs_ugyanolyan_allat(allatok[kert_1], allatok[kert_2])){
                van_diszjunkt = true;
                f4_kert1 = kert_1;
                f4_kert2 = kert_2;
            }
        }
    }

    ///5. feladat - keresésekre hasonlít, de nemtom, fáradt vagyok, sorry
    //Ez most 3 for loop egymásban a függvény miatt.
    //Lehetne egyszerűbben, ha nem számítana a sorrend, de a feladat növekvő sorrendben kérni, szóval ez így hatékonyabb, mint rendezgetni utólag.
    vector<int> f5_allatkertek;
    for(int kert = 1; kert <= allatkertek_szama; kert++){
        if(mindbol_legtobb(allatok, kert)){
            f5_allatkertek.push_back(kert);
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
    cout << mindbol_legalabb_par << endl;

    cout << "#" << endl; //4. feladat
    if(van_diszjunkt){
        cout << f4_kert1 << " " << f4_kert2 << endl;
    }else{
        cout << -1 << endl;
    }

    cout << "#" << endl; //5. feladat
    cout << f5_allatkertek.size() << endl;
    if(f5_allatkertek.size() > 0){
        for(int kert: f5_allatkertek){
            cout << kert << " ";
        }
    }

    return 0;
}
