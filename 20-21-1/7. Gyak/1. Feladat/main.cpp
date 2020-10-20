#include <iostream>
#include <vector>

using namespace std;

//�rjon programot, amely egy eg�sz sz�mokb�l �ll� t�mb minden elem�t megn�veli egy sz�mmal!

void novel1(vector<int> tomb, int szam){
    for(int i = 0; i < tomb.size(); i++){
        tomb[i] += szam;
    }
}

vector<int> novel2(vector<int> tomb, int szam){
    for(int i = 0; i < tomb.size(); i++){
        tomb[i] += szam;
    }
    return tomb;
}

void novel3(vector<int> &tomb, int szam){
    for(int i = 0; i < tomb.size(); i++){
        tomb[i] += szam;
    }
}


/// visszateresitipus fuggvenynev(parametertipus parameter) --> a param�tert nem k�zvetlen m�dos�tjuk, hanem lem�soljuk
/// visszateresitipus fuggvenynev(parametertipus &parameter) -> a param�tert k�zvetlen m�dos�tjuk, teh�t az eredeti �rt�k v�ltozik

int main()
{
    vector<int> szamok = {5,7,9,4,15,2,7,0,-5,9};
    int N = 5;

    //novel1(szamok, N);

    /*vector<int> eredmeny = novel2(szamok, N);

    for(int i = 0; i < eredmeny.size(); i++){
        cout << i << ".: " << eredmeny[i] << endl;
    }*/

    novel3(szamok, N);
    for(int i = 0; i < szamok.size(); i++){
        cout << i << ".: " << szamok[i] << endl;
    }

    return 0;
}
