#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Beolvasás
    vector<int> parosak, paratlanok;
    int meret;
    cout << "Hany szamot fogsz megadni?" << endl;
    cin >> meret;

    while(parosak.size() + paratlanok.size() < meret){
        cout << "Add meg a kovetkezo szamot!" << endl;
        int beolvasottAdat;
        cin >> beolvasottAdat;
        if(beolvasottAdat <= 0){
            cout << "Ez nem egy pozitiv szam, add meg ujra!" << endl;
        }else if(beolvasottAdat % 2 == 0){
            parosak.push_back(beolvasottAdat);
        }else{
            paratlanok.push_back(beolvasottAdat);
        }
    }

    //Logika
    int parosSzumma = 0;
    double paratlanSzumma = 0;
    for(int i = 0; i < parosak.size(); i++){
        parosSzumma += parosak[i];
    }
    for(int i = 0; i < paratlanok.size(); i++){
        paratlanSzumma += paratlanok[i];
    }

    //Eredmény kiírása
    cout << "A paros szamok osszege: " << parosSzumma << endl;
    if(paratlanok.size() == 0){
        cout << "Nem volt paratlan szam.";
    }else{
        cout << "A paratlan szamok atlaga: " << paratlanSzumma/paratlanok.size();
    }

    return 0;
}
