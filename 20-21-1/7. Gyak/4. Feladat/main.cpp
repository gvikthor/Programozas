#include <iostream>
#include <vector>

using namespace std;

vector<int> ciklikusVisszaad(vector<int> tomb){
    int utolso = tomb[0];
    for(int i = 0; i < tomb.size()-1; i++){
        tomb[i] = tomb[i+1];
    }
    tomb[tomb.size()-1] = utolso;

    return tomb;
}

void ciklikusKozvetlenmodosit(vector<int> &tomb){
    int utolso = tomb[0];
    for(int i = 0; i < tomb.size()-1; i++){
        tomb[i] = tomb[i+1];
    }
    tomb[tomb.size()-1] = utolso;
}

int main()
{
    vector<int> szamok = {1,2,3,4,5,6,7};

    vector<int> eredmeny = ciklikusVisszaad(szamok);
    for(int i = 0; i < eredmeny.size(); i++){
        cout << eredmeny[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < szamok.size(); i++){
        cout << szamok[i] << " ";
    }

    cout << endl << endl;

    ciklikusKozvetlenmodosit(szamok);
    for(int i = 0; i < szamok.size(); i++){
        cout << szamok[i] << " ";
    }


    return 0;
}
