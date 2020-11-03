#include <iostream>
#include <vector>

using namespace std;

struct Konyv{
    int kiadasEve;
    string szerzo;
    string cim;
};

int konyvTipus(Konyv konyv){
    int visszateresiErtek = 0;
    if(konyv.kiadasEve < 2000){
        if(konyv.kiadasEve >= 1980){
            visszateresiErtek = 1;
        }else{
            visszateresiErtek = 2;
        }
    }
    return visszateresiErtek;
}

/*
    2005 Ember1 Konyv1
    1995 Ember1 Konyv2
    2010 Ember2 Konyv3
    1970 Ember3 Konyv4
    1800 Ember4 Konyv5
*/

int main()
{
    vector<Konyv> konyvtar, kolcsonozheto, olvashato, regiseg;

    //Beolvasás
    konyvtar.resize(5);
    for(int i = 0; i < 5; i++){
        cout << "Add meg a(z) " << i << ". konyv kiadsi evet!" << endl;
        cin >> konyvtar[i].kiadasEve;
        cout << "Add meg a(z) " << i << ". konyv szerzojet!" << endl;
        cin >> konyvtar[i].szerzo;
        cout << "Add meg a(z) " << i << ". konyv cimet!" << endl;
        cin >> konyvtar[i].cim;
    }

    //Feladat
    for(int i = 0; i < 5; i++){

        switch(konyvTipus(konyvtar[i])){
        case 0:
            kolcsonozheto.push_back(konyvtar[i]);
            break;
        case 1:
            olvashato.push_back(konyvtar[i]);
            break;
        default:
            regiseg.push_back(konyvtar[i]);
            break;
        }

        /*
        switch(valami){
        case 1235:
            slkfgklsjfg;
            jksfghlksjd;
            ksfjglksdjf;
            break;
        case 976:
            kfsjhglks;
            sfhglksjh;
            break;
        default:
            kljsfglkjhsd;
            sdfjglkdg;
            break;
        }
        */
    }

    //Kiírás
    cout << "---Kolcsonozheto konyvek---" << endl;
    for(int i = 0; i < kolcsonozheto.size(); i++){
        cout << kolcsonozheto[i].cim << endl;
    }
    cout << "-----Olvashato konyvek-----" << endl;
    for(int i = 0; i < olvashato.size(); i++){
        cout << olvashato[i].cim << endl;
    }
    cout << "---------Regisegek---------" << endl;
    for(int i = 0; i < regiseg.size(); i++){
        cout << regiseg[i].cim << endl;
    }


    return 0;
}
