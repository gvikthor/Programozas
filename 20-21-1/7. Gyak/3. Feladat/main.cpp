#include <iostream>
#include <vector>

using namespace std;

vector<int> shiftelVisszaad(vector<int> tomb){
    for(int i = 0; i < tomb.size()-1; i++){
        tomb[i] = tomb[i+1];
    }
    tomb[tomb.size()-1] = 0;

    return tomb;
}

void shiftelKozvetlenmodosit(vector<int> &tomb){
    for(int i = 0; i < tomb.size()-1; i++){
        tomb[i] = tomb[i+1];
    }
    tomb[tomb.size()-1] = 0;
}

int main()
{
    vector<int> szamok = {1,2,3,4,5,6,7};

    vector<int> eredmeny = shiftelVisszaad(szamok);
    for(int i = 0; i < eredmeny.size(); i++){
        cout << eredmeny[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < szamok.size(); i++){
        cout << szamok[i] << " ";
    }

    cout << endl << endl;

    shiftelKozvetlenmodosit(szamok);
    for(int i = 0; i < szamok.size(); i++){
        cout << szamok[i] << " ";
    }

    return 0;
}
