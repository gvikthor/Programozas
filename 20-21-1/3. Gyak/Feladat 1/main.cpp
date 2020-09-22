#include <iostream>

using namespace std;

int main()
{
    int tanulokSzama = 5;
    int hozottPapir[tanulokSzama] = {10,5,7,10,0};
    int osszesenHozottPapir = 0;

    for(int i = 0; i < tanulokSzama; i++){
        cout << hozottPapir[i] << "kg" << endl;
        osszesenHozottPapir = osszesenHozottPapir + hozottPapir[i];
        //osszesenHozottPapir += hozottPapir[i];
    }
    cout << "Osszesen hozott papir: " << osszesenHozottPapir << "kg" << endl;


    return 0;
}
