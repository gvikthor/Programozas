#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//Típus feltételek
bool egeszE(double a){
    return floor(a) == a;
}

//Érték feltételek
bool parosE(int a){
    return a%2 == 0;
}

bool egyEsSzazKozottE(int a){
    return a >= 1 && a <= 100;
}

bool parosPozitivSzaz(int a){
    return parosE(a) && egyEsSzazKozottE(a);
}

bool pozitivE(int a){
    return a > 0;
}

int main()
{
    int N;
    vector<int> adatok;

    bool joErtek = false;
    do{
        cout << "Add meg a meretet!" << endl;

        double beolvasott;
        cin >> beolvasott;
        if(egeszE(beolvasott)){ //Típus
            N = beolvasott;
            joErtek = pozitivE(N); //Érték
        }
    }while(!joErtek);

    adatok.resize(N);
    for(int i = 0; i < N; i++){
        joErtek = false;
        do{
            cout << "Add meg a(z) " << i << ". paros szamot 2-tol 100-ig!" << endl;

            double beolvasott;
            cin >> beolvasott;
            if(egeszE(beolvasott)){ //Típus
                adatok[i] = beolvasott;
                joErtek = parosPozitivSzaz(adatok[i]); //Érték
            }
        }while(!joErtek);
    }

    return 0;
}
