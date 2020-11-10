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
Peter programozo 19
Istvan programozo 21
Aron programozo 20
Aron menedzser 34
Tamas vezeto 40
Gergo programozo 19
Istvan programozo 21

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
    /*for(int j = 0; j < alk.size() && !volt; j++){
        if(aktualis != j && alk[aktualis].nev == alk[j].nev){
            volt = true;
        }
    }*/

    return volt;
}

int main()
{
    vector<Alkalmazott> alkalmazottak;
    int N;

    // Beolvasás
    cin >> N;
    alkalmazottak.resize(N);
    for(int i = 0; i < N; i++){
        cin >> alkalmazottak[i].nev >> alkalmazottak[i].beosztas >> alkalmazottak[i].kor;
    }

    // Feladat (hány olyan ember van, akinek nem egyedi a neve?)
    int db = 0;
    for(int i = 0; i < N; i++){
        if(vanMasikIlyenNevuEmber(alkalmazottak, i)){
            db++;
        }
    }

    // Kiírás

    cout << db;

    return 0;
}
