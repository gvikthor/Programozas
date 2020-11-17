#include <iostream>
#include <vector>

using namespace std;

struct Ember{
    string nev;
    int kor;
};

int main()
{
    // elsõ példa
    vector<int> t = {1,3,7,13,17,21};

    bool van;
    int a;

    for(int i = 0; i < t.size() && !van; i++){
        if(t[i] % 2 == 0){
            van = true;
            a = t[i];
        }
    }

    if(van){
        cout << a;
    }else{
        cout << "nem volt ilyen";
    }

    cout << endl << endl;

    // második példa
    vector<Ember> emberek = {
        {nev: "Aron", kor: 6},
        {nev: "Nandor", kor: 7},
        {nev: "Istvan", kor: 12}
    };

    Ember legidosebb = emberek[0];

    for(int i = 0; i < emberek.size(); i++){
        if(legidosebb.kor < emberek[i].kor){
            legidosebb = emberek[i];
        }
    }

    cout << legidosebb.nev << " (" << legidosebb.kor << ")";

    return 0;
}
