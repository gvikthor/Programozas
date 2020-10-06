#include <iostream>

using namespace std;

int main()
{
    //v�logassuk ki a p�ros sz�mokat, olyan form�tumban, hogy
    // 13db
    // > 2
    // > 7
    // > stb


    //beolvas�s
    cout << "Hany szamot szeretnel megadni?" << endl;
    int N;
    cin >> N;

    const int meret = N;
    int tomb[meret];

    for(int i = 0; i < meret; i++){
        cout << "Add meg a(z) " << i << ". elemet!" << endl;
        cin >> tomb[i];
    }

    //kiv�logat�s
    int parosak[meret];
    int db = 0;
    for(int i = 0; i < meret; i++){ //[1 3 4 5 7 1 2 5 2]
        if(tomb[i] % 2 == 0){       //[4 2 2 0 0 0 0 0 0] 3
            parosak[db] = tomb[i];
            db++;
        }
    }

    //ki�r�s
    cout << db <<"db paros szam volt a bemenetben:" << endl;
    for(int i = 0; i < db; i++){
        cout << "> " << parosak[i] << endl;
    }


    return 0;
}
