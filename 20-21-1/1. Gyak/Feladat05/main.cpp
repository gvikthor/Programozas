#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/7

    int pont1, pont2, pont3, nyelvvizsga;


    cout << "Add meg az elso szazalekot!" << endl;
    cin >> pont1;

    if(pont1 < 0 || pont1 > 100){
        cout << "Ez nem lehet eredmeny!" << endl;
    }else{
        cout << "Add meg a masodik szazalekot!" << endl;
        cin >> pont2;
        if(pont2 < 0 || pont2 > 100){
            cout << "Ez nem lehet eredmeny!" << endl;
        }else{
            cout << "Add meg, milyen nyelvvizsgad van!" << endl
                 << "0: Nincs nyelvvizsgad" << endl
                 << "1: Felsofoku" << endl
                 << "2: Egy kozepfoku" << endl
                 << "3: Ket kozepfoku" << endl;

            cin >> nyelvvizsga;
            if(nyelvvizsga == 0){
                pont3 = 0;
            }else if(nyelvvizsga == 1){ //if(nyelvvizsga == 1 || nyelvvizsga == 3)
                pont3 = 48;
            }else if(nyelvvizsga == 2){
                pont3 = 24;
            }else{
                pont3 = 48;
            }

            cout << "A duplazott pontok nyelvvizsgaval: " << (pont1+pont2)*2 + pont3 << endl;
        }
    }
    // próbáljuk meg: pluszpont nyelvvizsgáért

    /*
    cout << "Add meg az elso szazalekot!" << endl;
    cin >> pont1;
    if(pont1 < 0 || pont1 > 100){
        cout << "Ez nem lehet eredmeny!" << endl;
        return 0;
    }

    cout << "Add meg az elso szazalekot!" << endl;
    cin >> pont2;
    if(pont2 < 0 || pont2 > 100){
        cout << "Ez nem lehet eredmeny!" << endl;
        return 0;
    }

    cout << "A duplazott pontok: " << (pont1+pont2)*2 << endl;
    */

    return 0;
}
