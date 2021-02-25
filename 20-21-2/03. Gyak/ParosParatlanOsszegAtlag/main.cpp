#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //P�ros sz�mok �sszeg�t, p�ratlan sz�mok �tlag�t sz�moljuk ki!
    //most felt�telezem, hogy eg�szet ad meg a felhaszn�l�,
    //de azt nem, hogy pozit�vat

    //Beolvas�s
    vector<int> szamok;
    int meret;

    cout << "Hany szamot fogsz megadni?" << endl;
    cin >> meret;

    while(szamok.size() < meret){
        cout << "Add meg a kovetkezo szamot!" << endl;
        int beolvasottAdat;
        cin >> beolvasottAdat;
        if(beolvasottAdat > 0){
            szamok.push_back(beolvasottAdat);
        }else{
            cout << "Ez nem egy pozitiv szam, add meg ujra!" << endl;
        }
    }

    //Logika
    int szumma = 0;

    double atlagSzumma = 0, atlagDb = 0;
    // eg�sz/eg�sz = eg�sz visazont tizedes/tizedes = tizedes   5/2 = 2  5.0/2.0 = 2.5

    for(int i = 0; i < szamok.size(); i++){
        if(szamok[i] % 2 == 0){
            szumma += szamok[i];
        }else{
            atlagSzumma += szamok[i];
            atlagDb++;
        }
    }

    //Eredm�ny ki�r�sa
    cout << "A paros szamok osszege: " << szumma << endl;

    if(atlagDb == 0){
        cout << "Nem volt paratlan szam." << endl;
    }else{
        cout << "A paratlan szamok atlaga: " << atlagSzumma/atlagDb << endl;
    }

    return 0;
}
