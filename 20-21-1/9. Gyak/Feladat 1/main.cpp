#include <iostream>
#include <vector>

using namespace std;

struct Alkalmazott{
    string nev;
    string beosztas;
    int kor;
    vector<string> hetNapjai;
};

int munkaora(string dolgozik){
    if(dolgozik == "igen"){
        return 8;
    }else{
        return 0;
    }
}

int egyEmberMunkaja(Alkalmazott alk){
    int szum = 0;
    for(int i = 0; i < alk.hetNapjai.size(); i++){
        szum += munkaora(alk.hetNapjai[i]);
    }
    return szum;
}
/*
10
Aron    programozo  20  igen igen nem  igen nem  nem  nem
Nandor  menedzser   34  igen igen igen igen igen nem  igen
Dalma   vezeto      40  igen igen nem  igen nem  nem  nem
Peter   vezeto      19  igen igen nem  igen nem  nem  nem
Istvan  vezeto      21  igen igen nem  igen nem  nem  igen
Aron    vezeto      20  nem  nem  nem  igen nem  nem  nem
Aron    menedzser   34  igen igen nem  igen nem  nem  nem
Tamas   vezeto      40  igen nem  nem  nem  nem  nem  nem
Gergo   vezeto      19  igen igen nem  igen nem  nem  nem
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
    int szum = 0;
    for(int i = 0; i < alkalmazottak.size(); i++){
        szum += egyEmberMunkaja(alkalmazottak[i]);
    }

    // Kiírás
    cout << "Az alkalmazottak osszesen " << szum << " orat dolgoztak.";

    return 0;
}
