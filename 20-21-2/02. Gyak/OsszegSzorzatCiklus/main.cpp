#include <iostream>

using namespace std;

int main()
{
    int szam1 = 5, szam2 = 10, tipp1, tipp2;

    cout << "Az osszeg: " << szam1+szam2 << endl
         << "A szorzat: " << szam1*szam2 << endl;

    cin >> tipp1 >> tipp2;

    while( !((tipp1 == szam1 && tipp2 == szam2) || (tipp1 == szam2 && tipp2 == szam1)) ){
        cout << "Rossz tippek, add meg ujra!" << endl;
        cin >> tipp1 >> tipp2;
    }


    //deMorgan

    /*
    while( !(tipp1 == szam1 && tipp2 == szam2) && !(tipp1 == szam2 && tipp2 == szam1) ){
        cout << "Rossz tippek, add meg ujra!" << endl;
        cin >> tipp1 >> tipp2;
    }
    */

    /*
    while( (tipp1 != szam1 || tipp2 != szam2) && (tipp1 != szam2 || tipp2 != szam1) ){
        cout << "Rossz tippek, add meg ujra!" << endl;
        cin >> tipp1 >> tipp2;
    }
    */

    cout << "Eltalatad a ket szamot!" << endl;

    return 0;
}
