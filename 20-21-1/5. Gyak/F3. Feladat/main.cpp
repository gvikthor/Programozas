#include <iostream>

using namespace std;

bool fiuE(string nev){
    string fiuNevek[7] = {"Aron", "Balazs", "Nandor", "Erik", "Gergo", "Peter", "Istvan"};

    bool talalt = false;
    int j = 0;
    while(j < 7 && !talalt){
        talalt = nev == fiuNevek[j];
        j++;
    }

    return talalt;
}

int main()
{
    //beolvasás

    string adatok[10] = {"Aron","Dalma","Laura","Nandor","Orsi","Gergo","Eszter","Peter","Istvan","Erik"};

    //kiválogatás+keresés => metszet
    int db = 0;
    string fiuk[10];
    for(int i = 0; i < 10; i++){
        if(fiuE(adatok[i])){
            fiuk[db] = adatok[i];
            db++;
        }
    }

    //kiiras
    cout << db <<"db fiu volt:" << endl;
    for(int i = 0; i < db; i++){
        cout << "> " << fiuk[i] << endl;
    }


    return 0;
}
