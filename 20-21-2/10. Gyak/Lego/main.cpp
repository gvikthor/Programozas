#include <iostream>
#include <vector>

using namespace std;

struct Lego{
    int id;
    string nev;
    int minKor;
    bool StarWarsLego;
};

bool benneVan(int id, vector<Lego> legok){
    bool volt = false;
    for(int i = 0; i < legok.size() && !volt; i++){
        volt = (id == legok[i].id);

        /*
        if(id == legok[i].id){
            volt = true;
        }
        */
    }
    return volt;
}

/*
6
123 UCSMilleniumFalcon 13 igen
456 LegoCityRendorseg 5 nem
123 LegoAlmafa 3 nem
789 ValamiDuplo 1 nem
789 ValamiHulyeseg 5 almafa
789 IndianaJonesRepulo 5 nem
159 Halalcsillag 13 igen
753 EwokHazak 5 igen
183 CATMultipurposeExcavator 15 nem

*/

int main()
{
    bool ujra = true;

    while(ujra){
        // Beolvasás
        vector<Lego> legok;
        int N;
        cin >> N;
        while(legok.size() < N){
            Lego beolvasottAdat;
            string igennem;
            bool helyes = false;
            cin >> beolvasottAdat.id >> beolvasottAdat.nev >> beolvasottAdat.minKor >> igennem;
            if(igennem == "igen"){
                beolvasottAdat.StarWarsLego = true;
                helyes = true;
            }else if(igennem == "nem"){
                beolvasottAdat.StarWarsLego = false;
                helyes = true;
            }

            if(helyes && !benneVan(beolvasottAdat.id, legok) && beolvasottAdat.minKor >= 3){
                legok.push_back(beolvasottAdat);
            }
        }

        // Feladatmegoldás
        //// Válogassuk ki a star wars legokat, és írjuk ki a nevüket és idjukat!
        vector<Lego> starwarslegok;
        for(int i = 0; i < legok.size(); i++){
            if(legok[i].StarWarsLego){
                starwarslegok.push_back(legok[i]);
            }
        }

        //// Adjunk meg egy nem star wars legot, aminek az ajánlott minimum életkora legalább 13 év!
        bool volt = false;
        Lego keresettElem;
        for(int i = 0; i < legok.size() && !volt; i++){
            if(!legok[i].StarWarsLego && legok[i].minKor >= 13){
                keresettElem = legok[i];
                volt = true;
            }
        }

        // Kiírás
        cout << endl << "Star wars legok: " << endl;
        for(int i = 0; i < starwarslegok.size(); i++){
            cout << "- " << starwarslegok[i].nev << "(" << starwarslegok[i].id << ")" << endl;
        }
        cout << endl;
        if(volt){
            cout << "Volt ilyen lego: " << keresettElem.nev << "(" << keresettElem.id << ")" << endl;
        }else{
            cout << "Nem volt ilyen lego." << endl;
        }

        /*
        cout << "------" << endl;
        for(Lego akt : legok){
            cout << akt.id << " " << akt.nev << " " << akt.minKor << " " << akt.StarWarsLego << endl;
        }
        */

        cout << "Ujra le akarod futtatni? (i/n)" << endl;
        string valasz;
        cin >> valasz;
        ujra = (valasz != "n");
    }

    return 0;
}
