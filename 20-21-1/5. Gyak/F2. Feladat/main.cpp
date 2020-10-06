#include <iostream>

using namespace std;

int main()
{
    //válogassuk ki a páros számokat, olyan formátumban, hogy
    // 13db
    // > 2
    // > 7
    // > stb


    //beolvasás
    cout << "Hany szamot szeretnel megadni?" << endl;
    int N;
    cin >> N;

    const int meret = N;
    int tomb[meret];

    for(int i = 0; i < meret; i++){
        cout << "Add meg a(z) " << i << ". elemet!" << endl;
        cin >> tomb[i];
    }

    //kiválogatás
    int parosak[meret];
    int db = 0;
    for(int i = 0; i < meret; i++){ //[1 3 4 5 7 1 2 5 2]
        if(tomb[i] % 2 == 0){       //[4 2 2 0 0 0 0 0 0] 3
            parosak[db] = tomb[i];
            db++;
        }
    }

    //kiírás
    cout << db <<"db paros szam volt a bemenetben:" << endl;
    for(int i = 0; i < db; i++){
        cout << "> " << parosak[i] << endl;
    }


    return 0;
}
