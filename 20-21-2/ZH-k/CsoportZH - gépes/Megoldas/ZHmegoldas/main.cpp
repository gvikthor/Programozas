#include <iostream>
#include <vector>

using namespace std;

struct Kepviselo{
    string nev;
    string csoport;
    float kor;
};

bool voltIlyen(vector<Kepviselo> vektor, Kepviselo elem){
    bool volt = false;
    for(int i = 0; i < vektor.size() && !volt; i++){
        volt = (elem.nev == vektor[i].nev);
    }
    return volt;
}

int main()
{
    bool ujra = true;

    while(ujra){
        int N;
        vector<Kepviselo> kepv;

        // Beolvasás
        cin >> N;
        while(kepv.size() < N){
            Kepviselo beolvasott;
            cin >> beolvasott.nev >> beolvasott.csoport >> beolvasott.kor;

            if(!voltIlyen(kepv, beolvasott) && beolvasott.kor > 0){
                kepv.push_back(beolvasott);
            }
        }

        // Feladat megoldása
        /// Megszámlálás
        int db = 0;
        for(int i = 0; i < kepv.size(); i++){
            if(kepv[i].csoport == "Kifutominoseg-biztositasi_Bizottsag"){
                db++;
            }
        }

        /// Feltételes maximumkeresés
        bool volt = false;
        int m;
        for(int i = 0; i < kepv.size(); i++){
            if(kepv[i].csoport == "Latogatoszorakoztatasi_Bizottsag"){
                if(volt){
                    if(kepv[i].kor > kepv[m].kor){
                        m = i;
                    }
                }else{
                    m = i;
                    volt = true;
                }
            }
        }

        // Kiírás
        cout << "db: " << db << endl;
        if(volt){
            cout << "max: " << kepv[m].nev << endl;
        }else{
            cout << "Nem volt." << endl;
        }

        cout << "-------------" << endl;
        cout << "Ujra? i/n" << endl;
        string valasz;
        cin >> valasz;
        if(valasz == "n"){
            ujra = false;
        }
    }

    return 0;
}
