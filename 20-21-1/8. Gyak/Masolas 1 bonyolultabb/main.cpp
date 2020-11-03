#include <iostream>
#include <vector>

using namespace std;

struct Ido{
    int ora;
    int perc;
    string ampm;
};

int napElejeOtaEltelt(Ido idopont){
    int visszateresiErtek = idopont.ora*60 + idopont.perc;

    if(idopont.ampm == "pm"){
        visszateresiErtek += 720;
    }

    return visszateresiErtek;
}

int main()
{
    vector<Ido> idopontok;
    vector<int> elteltPercek;

    //Beolvasás
    idopontok.resize(5);
    for(int i = 0; i < 5; i++){
        cout << "Add meg a(z) " << i << ". ora!" << endl;
        cin >> idopontok[i].ora;
        cout << "Add meg a(z) " << i << ". percet!" << endl;
        cin >> idopontok[i].perc;
        cout << "Add meg a(z) " << i << ". ampm-et!" << endl;
        cin >> idopontok[i].ampm;
    }

    //Feladat
    elteltPercek.resize(5);
    for(int i = 0; i < 5; i++){
        elteltPercek[i] = napElejeOtaEltelt(idopontok[i]);
    }

    //Kiírás
    for(int i = 0; i < 5; i++){
        cout << idopontok[i].ora << ":" << idopontok[i].perc << " = " << elteltPercek[i] << endl;
    }


    return 0;
}
