#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/7

    int pont1, pont2;


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
            cout << "A duplazott pontok: " << (pont1+pont2)*2 << endl;
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
