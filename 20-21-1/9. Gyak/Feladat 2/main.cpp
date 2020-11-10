#include <iostream>
#include <vector>

using namespace std;

struct Alkalmazott{
    string nev;
    string beosztas;
    int kor;
    vector<string> hetNapjai;
};

bool kihagytaAHetet(Alkalmazott alk){
    bool voltIgen = false;
    for(int i = 0; i < alk.hetNapjai.size() && !voltIgen; i++){
        voltIgen = (alk.hetNapjai[i] == "igen");
    }
    return !voltIgen;
}

/*
10
Aron    programozo  20  igen igen nem  igen nem  nem  nem
Nandor  menedzser   34  igen igen igen igen igen nem  igen
Dalma   vezeto      40  igen igen nem  igen nem  nem  nem
Peter   vezeto      50  nem  nem  nem  nem  nem  nem  nem
Istvan  vezeto      21  igen igen nem  igen nem  nem  igen
Aron    vezeto      20  nem  nem  nem  nem  nem  nem  nem
Aron    menedzser   34  igen igen nem  igen nem  nem  nem
Tamas   vezeto      40  igen nem  nem  nem  nem  nem  nem
Gergo   vezeto      98  nem  nem  nem  nem  nem  nem  nem
Istvan  vezeto      21  igen igen nem  nem  nem  nem  igen
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

    // Feladat (összesen hány munkaórát dolgoztak?)
    double osszEletkor = 0;
    double db = 0;
    for(int i = 0; i < alkalmazottak.size(); i++){
        if(kihagytaAHetet(alkalmazottak[i])){    //keresés
            osszEletkor += alkalmazottak[i].kor; //összegzés
            db++;                                //megszámlálás
        }
    }

    // Kiírás
    cout << "A hetet kihagyok atlageletkora: " << osszEletkor/db;

    return 0;
}
