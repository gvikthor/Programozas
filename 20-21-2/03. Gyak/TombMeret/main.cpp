#include <iostream>

using namespace std;

int main()
{
    //Bekérés
    int N;
    cout << "Add meg a tomb meretet!" << endl;
    cin >> N;

    int szamok[N];
    for(int i = 0; i < N; i++){
        cout << "Add meg a tomb " << i << ". elemet!" << endl;
        cin >> szamok[i];
    }

    //Logika
    int szum = 0;
    for(int i = 0; i < N; i++){
        //szum = szum + szamok[i];
        szum += szamok[i];
    }


    //Eredmény kiírás
    cout << "A tombelemek osszege: " << endl;

    cout << szamok[0];
    for(int i = 1; i < N; i++){
        cout << "+" << szamok[i];
    }
    cout << "=" << szum;

    return 0;
}
