#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Páros számok összegét, páratlan számok átlagát számoljuk ki!
    //most feltételezem, hogy egészet ad meg a felhasználó,
    //de azt nem, hogy pozitívat

    //Beolvasás
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
    // egész/egész = egész visazont tizedes/tizedes = tizedes   5/2 = 2  5.0/2.0 = 2.5

    for(int i = 0; i < szamok.size(); i++){
        if(szamok[i] % 2 == 0){
            szumma += szamok[i];
        }else{
            atlagSzumma += szamok[i];
            atlagDb++;
        }
    }

    //Eredmény kiírása
    cout << "A paros szamok osszege: " << szumma << endl;

    if(atlagDb == 0){
        cout << "Nem volt paratlan szam." << endl;
    }else{
        cout << "A paratlan szamok atlaga: " << atlagSzumma/atlagDb << endl;
    }

    return 0;
}
