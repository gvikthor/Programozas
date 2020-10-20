#include <iostream>

using namespace std;

bool tokeletesSzam(int szam){
    int osszeg = 0;
    for(int i = 1; i < (szam/2)+1; i++){
        if(szam % i == 0){
            osszeg += i;
        }
    }
    return osszeg == szam;
}

bool hianyosSzam(int szam){
    int osszeg = 0;
    for(int i = 1; i < (szam/2)+1; i++){
        if(szam % i == 0){
            osszeg += i;
        }
    }
    return osszeg < szam;
}

bool bovelkedoSzam(int szam){
    int osszeg = 0;
    for(int i = 1; i < (szam/2)+1; i++){
        if(szam % i == 0){
            osszeg += i;
        }
    }
    return osszeg > szam;
}

string milyenSzam(int szam){
    int osszeg = 0;
    for(int i = 1; i < (szam/2)+1; i++){
        if(szam % i == 0){
            osszeg += i;
        }
    }
    if(osszeg > szam){
        return "bovelkedo";
    }else if(osszeg < szam){
        return "hianyos";
    }else{
        return "tokeletes";
    }
}

int main()
{
    /*cout << tokeletesSzam(1) << endl;
    cout << tokeletesSzam(2) << endl;
    cout << tokeletesSzam(3) << endl;
    cout << tokeletesSzam(6) << endl;
    cout << hianyosSzam(1) << endl;
    cout << hianyosSzam(2) << endl;
    cout << hianyosSzam(3) << endl;
    cout << hianyosSzam(6) << endl;
    cout << hianyosSzam(16) << endl;
    cout << bovelkedoSzam(1) << endl;
    cout << bovelkedoSzam(2) << endl;
    cout << bovelkedoSzam(3) << endl;
    cout << bovelkedoSzam(6) << endl;
    cout << bovelkedoSzam(12) << endl;*/

    int N = 8128;

    /*for(int i = 1; i <= N; i++){
        if(tokeletesSzam(i)){
            cout << i << " tokeletes" << endl;
        }else if(hianyosSzam(i)){
            cout << i << " hianyos" << endl;
        }else if(bovelkedoSzam(i)){
            cout << i << " bovelkedo" << endl;
        }else{
            cout << "????wtf" << endl;
        }
    }

    cout << tokeletesSzam(8128);*/

    for(int i = 0; i <= N; i++){
        cout << i << " " << milyenSzam(i) << endl;
    }

    return 0;
}
