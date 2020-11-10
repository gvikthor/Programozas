#include <iostream>
#include <vector>

using namespace std;

struct Alkalmazott{
    string nev;
    string beosztas;
    int kor;
    vector<string> hetNapjai;
};

/*
12
Laura   menedzser   21  nem  nem  nem  nem  nem  nem  nem
Aron    programozo  20  igen igen nem  igen nem  nem  nem
Nandor  menedzser   34  igen igen igen igen igen nem  igen
Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem
Dalma   vezeto      40  igen igen nem  igen nem  nem  nem
Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem
Istvan  vezeto      21  igen igen nem  igen nem  nem  igen
Aron    programozo  20  nem  nem  nem  nem  nem  nem  nem
Aron    menedzser   34  igen igen nem  igen nem  nem  nem
Tamas   vezeto      40  igen nem  nem  nem  nem  nem  nem
Gergo   vezeto      98  nem  nem  nem  nem  nem  nem  nem
Istvan  vezeto      21  nem  nem  nem  nem  nem  nem  nem
*/

bool kihagytaAHetet(Alkalmazott alk){
    bool voltIgen = false;
    for(int i = 0; i < alk.hetNapjai.size() && !voltIgen; i++){
        voltIgen = (alk.hetNapjai[i] == "igen");
    }
    return !voltIgen;
}

/*
Laura   menedzser   21  nem  nem  nem  nem  nem  nem  nem


Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem

Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem

Aron    programozo  20  nem  nem  nem  nem  nem  nem  nem


Gergo   vezeto      98  nem  nem  nem  nem  nem  nem  nem
Istvan  vezeto      21  nem  nem  nem  nem  nem  nem  nem
*/

int adottBeosztasbanHanyan(vector<Alkalmazott> alk, string beosztas){
    int db = 0;

    for(int i = 0; i < alk.size(); i++){
        if(alk[i].beosztas == beosztas){
            db++;
        }
    }

    return db;
}

/*



Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem

Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem

Aron    programozo  20  nem  nem  nem  nem  nem  nem  nem




*/

bool vanMasikIlyenNevuEmber(vector<Alkalmazott> alk, int aktualis){
    bool volt = false;
    int j = 0;
    while(j < alk.size() && !volt){
        if(aktualis != j && alk[aktualis].nev == alk[j].nev){
            volt = true;
        }
        j++;
    }

    return volt;
}

/*



Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem

Peter   programozo  50  nem  nem  nem  nem  nem  nem  nem






*/

int main()
{
    vector<Alkalmazott> alkalmazottak;
    int N;

    // Beolvasás
    cin >> N;
    alkalmazottak.resize(N);
    for(int i = 0; i < N; i++){
        cin >> alkalmazottak[i].nev >> alkalmazottak[i].beosztas >> alkalmazottak[i].kor;
        alkalmazottak[i].hetNapjai.resize(7);
        for(int j = 0; j < 7; j++){
            cin >> alkalmazottak[i].hetNapjai[j];
        }
    }

    // Feladat (azok közül, akik kihagyták a hetet, a legnépesebb ilyen munkakörben van-e olyan, akinek nem egyedi a neve)

    vector<Alkalmazott> kihagytakAHetet;
    bool voltAzonosNev, voltAkiKihagyta;
    string nev = "alma";


    for(int i = 0; i < alkalmazottak.size(); i++){
        if(kihagytaAHetet(alkalmazottak[i])){
            kihagytakAHetet.push_back(alkalmazottak[i]);
        }
    }
    voltAkiKihagyta = kihagytakAHetet.size() > 0;

    if(voltAkiKihagyta){
        int M = 3;
        string beosztasok[M] = {"menedzser", "programozo", "vezeto"};
        int maxIndex = 0;
        int maxErtek = adottBeosztasbanHanyan(kihagytakAHetet, beosztasok[maxIndex]);
        for(int i = 1; i < M; i++){
            int beosztasban = adottBeosztasbanHanyan(kihagytakAHetet, beosztasok[i]);
            if(maxErtek < beosztasban){
                maxIndex = i;
                maxErtek = beosztasban;
            }
        }


        vector<Alkalmazott> legnepesebbCsoport;
        for(int i = 0; i < kihagytakAHetet.size(); i++){
            if(kihagytakAHetet[i].beosztas == beosztasok[maxIndex]){
                legnepesebbCsoport.push_back(kihagytakAHetet[i]);
            }
        }

        voltAzonosNev = false;
        for(int i = 0; i < legnepesebbCsoport.size() && !voltAzonosNev; i++){
            voltAzonosNev = vanMasikIlyenNevuEmber(legnepesebbCsoport, i);
            if(voltAzonosNev){
                nev = legnepesebbCsoport[i].nev;
            }
        }
    }


    // Kiírás
    if(voltAkiKihagyta){
        if(voltAzonosNev){
            cout << nev;
        }else{
            cout << "Nem volt azonos nev.";
        }
    }else{
        cout << "Nem volt, aki kihagyta a hetet.";
    }

    return 0;
}
