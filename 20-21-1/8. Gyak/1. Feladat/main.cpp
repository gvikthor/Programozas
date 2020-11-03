#include <iostream>
#include <vector>

using namespace std;

struct Alkalmazott{
    string nev;
    int eletkor;
    string beosztas;
};

/*
Nandor 25 programozo
Aron 20 programozo
Peter 30 vezeto
Istvan 20 programozo
Aron 30 manager
Gergo 50 manager


*/

int main()
{

    vector<Alkalmazott> alk;

    int N;
    cout << "Hany alkalmaztt van?" << endl;
    cin >> N;

    alk.resize(N);
    for(int i = 0; i < N; i++){
        cout << "Add meg a(z) " << i <<". alkalmazott nevet!" << endl;
        cin >> alk[i].nev;
        cout << "Add meg a(z) " << i <<". alkalmazott korat!" << endl;
        cin >> alk[i].eletkor;
        cout << "Add meg a(z) " << i <<". alkalmazott beosztasat!" << endl;
        cin >> alk[i].beosztas;
    }

    int elso = 0;
    bool talalt = false;  //[Nándor, Áron, István, Gergõ, Péter]
    string nev;
    while(elso < N && !talalt){
        int masodik = elso + 1;
        while(masodik < N && !talalt){
            talalt = (alk[elso].nev == alk[masodik].nev);
            nev = alk[elso].nev;
            masodik++;
        }
        elso++;
    }

    if(talalt){
        cout << "Van azonos nevu ember: " << nev << endl;
    }else{
        cout << "Nem voltak azonos nevu emberek." << endl;
    }


    return 0;
}
