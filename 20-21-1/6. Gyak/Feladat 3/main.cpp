#include <iostream>
#include <vector>

using namespace std;

struct Szoba{
    string nev;
    int meret;
};

struct Lakas{
    string cim;
    vector<Szoba> szobak;
};

int main()
{
    Lakas lak;
    lak.cim = "Szerb utca V.ker";
    lak.szobak.resize(4);

    lak.szobak[0].nev = "eloszoba";
    lak.szobak[0].meret = 10;

    lak.szobak[1].nev = "konyha";
    lak.szobak[1].meret = 12;

    lak.szobak[2].nev = "haloszoba";
    lak.szobak[2].meret = 8;

    lak.szobak[3].nev = "nappali";
    lak.szobak[3].meret = 20;

    //Hány négyzetméteres a lakás?
    int osszeg = 0;
    for(int i = 0; i < lak.szobak.size(); i++){
        osszeg += lak.szobak[i].meret;
    }

    cout << "A lakas " << osszeg << "m2";

    return 0;
}
