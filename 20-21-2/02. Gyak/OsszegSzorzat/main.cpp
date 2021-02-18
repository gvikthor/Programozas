#include <iostream>

using namespace std;

int main()
{
    int szam1 = 5, szam2 = 10;

    cout << "A ket szam osszege: "  << szam1+szam2 << endl
         << "A ket szam szorzata: " << szam1*szam2 << endl;

    int tipp1, tipp2;
    cin >> tipp1 >> tipp2;

    // és   &&   altgr C
    // vagy ||   altgr W

    // ( a tipp1 5 ÉS a tipp2 10 ) VAGY (a tipp1 10 és a tipp2 5)

    if( (tipp1 == szam1 && tipp2 == szam2) || (tipp1 == szam2 && tipp2 == szam1) ){
        cout << "Igen, ez volt a ket szam." << endl;
    }else{
        cout << "Nem, nem ez volt a ket szam, hanem: " << szam1 << " es " << szam2 << endl;
    }

    return 0;
}
