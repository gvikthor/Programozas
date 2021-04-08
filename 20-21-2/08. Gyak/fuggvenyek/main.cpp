#include <iostream>
#include <vector>

using namespace std;

int ketszeres(int x){
    int y = x*2;

    return y;
}

int mszeres(int x, int M){
    int y = x*M;

    return y;
}

void osztokiiras(int szam){
    for(int i = 1; i <= szam/2; i++){
        if(szam%i == 0){
            cout << i << " osztja " << szam << "-t." << endl;
        }
    }
    cout << szam << endl;
}

vector<int> osztokiszamol(int szam){
    vector<int> osztok;
    for(int i = 1; i <= (szam/2); i++){
        if(szam%i == 0){
            osztok.push_back(i);
        }
    }
    osztok.push_back(szam);

    return osztok;
}

int vektorosszeg(vector<int> ertekek){
    int szum = 0;
    for(int i = 0; i < ertekek.size(); i++){
        szum += ertekek[i];
    }

    return szum;
}

int osztoosszeg(vector<int> ertekek){
    int szum = 0;
    for(int i = 0; i < ertekek.size(); i++){
        //vector<int> osztok = osztokiszamol(ertekek[i]);
        //szum += vektorosszeg(osztok);

        szum += vektorosszeg( osztokiszamol(ertekek[i]) );
    }

    return szum;
}


int main()
{
    vector<int> szamok = {1,6,3,5,87,4,2,1,4,67,8,4,21,4,56,524,45,6,7};
    int N = 5;

    //Adjuk meg minden szám kétszeresét!
    cout << "Ketszeres:" << endl;
    for(int i = 0; i < szamok.size(); i++){
        //cout << szamok[i] << " -> " << szamok[i]*2 << endl;
        cout << szamok[i] << " -> " << ketszeres(szamok[i]) << endl;
    }

    cout << "------------------" << endl;

    //Ajuk meg minden szám N-szeresét!
    cout << N << "-szeres:" << endl;
    for(int i = 0; i < szamok.size(); i++){
        //cout << szamok[i] << " -> " << szamok[i]*N << endl;
        cout << szamok[i] << " -> " << mszeres(szamok[i],N) << endl;
    }

    cout << "------------------" << endl;

    //Soroljuk fel minden számnak az osztóit!
    /*
    int szam = 252;
    for(int i = 1; i < 252/2; i++){
        if(szam%i == 0){
            cout << i << " osztja " << szam << "-t." << endl;
        }
    }
    */

    cout << "Osztok:" << endl;
    for(int i = 0; i < szamok.size(); i++){
        osztokiiras(szamok[i]);
    }

    cout << "------------------" << endl;
    cout << "Osztok maskepp:" << endl;
    for(int i = 0; i < szamok.size(); i++){
        vector<int> aktosztok = osztokiszamol(szamok[i]);
        cout << szamok[i] << " osztoi:" << endl;
        for(int j = 0; j < aktosztok.size(); j++){
            cout << "> " << aktosztok[j] << endl;
        }
    }

    //Adjuk meg a számok összegét!
    cout << "------------------" << endl;
    cout << "Osszeg: " << vektorosszeg(szamok) << endl;

    //Adjuk meg minden szám minden osztójának az összegét!
    cout << "------------------" << endl;
    cout << "Osztoosszeg: " << osztoosszeg(szamok) << endl;


    return 0;
}
