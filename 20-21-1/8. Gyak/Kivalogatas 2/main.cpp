#include <iostream>
#include <vector>

using namespace std;

struct Ember{
    string nev;
    string szig; //fixen 8 karakter, és az utolsó kettõ vagy NO, FI
    string lakohely;
};

/*
Aron 123456FI Etyek
Nandor 213456FI Budapest
Istvan 654321FI Debrecen
Dalma 123456NO Erd
Laura 654321NO Budapest
*/

bool videkiFerfi(Ember ember){
    return ember.lakohely != "Budapest" && ember.szig[6] == 'F';
}

int main()
{
    vector<Ember> emberek, videkiFerfiak;

    //Beolvasás
    emberek.resize(5);
    for(int i = 0; i < 5; i++){
        cout << "Add meg a(z)" << i <<". ember nevet!" << endl;
        cin >> emberek[i].nev;
        cout << "Add meg a(z)" << i <<". ember szemelyigazolvanyszamat!" << endl;
        cin >> emberek[i].szig;
        cout << "Add meg a(z)" << i <<". ember lakohelyet!" << endl;
        cin >> emberek[i].lakohely;
    }

    //Feladat
    for(int i = 0; i < 5; i++){
        if( videkiFerfi(emberek[i]) ){
            videkiFerfiak.push_back(emberek[i]);
        }
    }

    //Kiírás
    for(int i = 0; i < videkiFerfiak.size(); i++){
        cout << "A(z) " << i << ". videki ferfi: " << endl
             << "> " << videkiFerfiak[i].nev << endl
             << "> " << videkiFerfiak[i].szig << endl
             << "> " << videkiFerfiak[i].lakohely << endl;
    }

    return 0;
}
