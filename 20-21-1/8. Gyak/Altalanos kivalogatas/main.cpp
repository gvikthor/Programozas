#include <iostream>
#include <vector>

using namespace std;

struct BeolvasottTipus{
    int tulajdonsag1;
    string tulajdonsag2;
};

bool feltetel(BeolvasottTipus aktualis){
    return aktualis.tulajdonsag1 == 0;
}

int main()
{
    vector<BeolvasottTipus> adatok, kivalogatott;
    int meret;

    //Beolvas�s
    cin >> meret;
    adatok.resize(meret);
    for(int i = 0; i < meret; i++){
        cin >> adatok[i].tulajdonsag1;
        cin >> adatok[i].tulajdonsag2;
    }

    //Feladat - �LTAL�NOS KIV�LOGAT�S
    for(int i = 0; i < meret; i++){
        if( feltetel(adatok[i]) ){
            kivalogatott.push_back(adatok[i]);
        }
    }

    //Ki�r�s
    /*
    ...
    */

    return 0;
}
