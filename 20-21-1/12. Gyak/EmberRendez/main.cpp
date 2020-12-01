#include <iostream>
#include <vector>

using namespace std;

struct Ember{
    string nev;
    int kor;
    bool fiu;
};

vector<Ember> emberRendezKorSzerint(vector<Ember> tomb){
    for(int i = 0; i < tomb.size(); i++){
        int aktHely = i;
        while(aktHely > 0 && tomb[aktHely-1].kor > tomb[aktHely].kor){
            Ember ideiglenes = tomb[aktHely-1];
            tomb[aktHely-1] = tomb[aktHely];
            tomb[aktHely] = ideiglenes;
            aktHely--;
        }
    }
    return tomb;
}

bool operator>(Ember bal, Ember jobb){
    return bal.kor > jobb.kor;
}
vector<Ember> emberRendezOperatorral(vector<Ember> tomb){
    for(int i = 0; i < tomb.size(); i++){
        int aktHely = i;
        while(aktHely > 0 && tomb[aktHely-1] > tomb[aktHely]){
            Ember ideiglenes = tomb[aktHely-1];
            tomb[aktHely-1] = tomb[aktHely];
            tomb[aktHely] = ideiglenes;
            aktHely--;
        }
    }
    return tomb;
}

int main()
{
    vector<Ember> emberek = {
        { nev: "Tamas", kor: 23, fiu: true },
        { nev: "Dalma", kor: 21, fiu: false },
        { nev: "Aron",  kor: 22, fiu: true },
        { nev: "Laura", kor: 25, fiu: false },
        { nev: "Nandor",kor: 20, fiu: true },
        { nev: "Akos",  kor: 15, fiu: true }
    };

    vector<Ember> rendezett = emberRendezOperatorral(emberek);
    for(int i = 0; i < rendezett.size(); i++){
        cout << rendezett[i].nev << endl;
    }

    return 0;
}
