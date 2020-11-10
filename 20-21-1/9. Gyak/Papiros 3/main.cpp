#include <iostream>
#include <vector>

using namespace std;

struct Alkalmazott{
    string nev;
    string beosztas;
    int kor;
};

/*
10
Aron programozo 20
Nandor menedzser 34
Dalma vezeto 40
Peter vezeto 19
Istvan vezeto 21
Aron vezeto 20
Aron menedzser 34
Tamas vezeto 40
Gergo vezeto 19
Istvan vezeto 21

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

int main()
{
    int M = 3;
    string beosztasok[M] = {"menedzser", "programozo", "vezeto"};

    vector<Alkalmazott> alkalmazottak;
    int N;

    // Beolvasás
    cin >> N;
    alkalmazottak.resize(N);
    for(int i = 0; i < N; i++){
        cin >> alkalmazottak[i].nev >> alkalmazottak[i].beosztas >> alkalmazottak[i].kor;
    }

    // Feladat (melyik beosztásból van a legtöbb?)
    int maxIndex = 0;
    int maxErtek = adottBeosztasbanHanyan(alkalmazottak, beosztasok[maxIndex]);
    for(int i = 1; i < M; i++){
        int beosztasban = adottBeosztasbanHanyan(alkalmazottak, beosztasok[i]);
        if(maxErtek < beosztasban){
            maxIndex = i;
            maxErtek = beosztasban;
        }
    }

    // Kiírás
    cout << "A legtobben a(z) " << beosztasok[maxIndex] << " tipusu emberek vannak, itt " << maxErtek << " szamu embert alkalmazunk.";


    return 0;
}
