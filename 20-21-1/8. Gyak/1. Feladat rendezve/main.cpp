#include <iostream>
#include <vector>

using namespace std;

/*enum Beosztas{
    vezeto, manager, programozo
};*/

struct Alkalmazott{
    string nev;
    int eletkor;
    string beosztas;
    //Beosztas beosztas2;
};

/*
Nandor 25 programozo
Aron 20 programozo
Peter 30 vezeto
Istvan 20 programozo
Istvan 30 manager
Gergo 50 manager


*/

int main()
{

    vector<Alkalmazott> alk;

    int N;
    cout << "Hany alkalmaztt van?" << endl;
    cin >> N;

    //Aron ,Istvan , Nandor, GergoPeter,

    alk.resize(N);
    //alk[0].beosztas2 = vezeto;
    for(int i = 0; i < N; i++){
        cout << "Add meg a(z) " << i <<". alkalmazott nevet!" << endl;
        cin >> alk[i].nev;
        cout << "Add meg a(z) " << i <<". alkalmazott korat!" << endl;
        cin >> alk[i].eletkor;
        cout << "Add meg a(z) " << i <<". alkalmazott beosztasat!" << endl;
        cin >> alk[i].beosztas;

        int aktHely = i;
        bool kellCsere = aktHely > 0 && alk[aktHely].nev < alk[aktHely-1].nev;
        while(kellCsere){
            Alkalmazott ideiglenes = alk[aktHely-1];
            alk[aktHely-1] = alk[aktHely];
            alk[aktHely] = ideiglenes;
            aktHely--;
            kellCsere = aktHely > 0 && alk[aktHely].nev < alk[aktHely-1].nev;
        }
    }

    /*for(int i = 0; i < N; i++){
        cout << alk[i].nev << endl;
    }*/

    int akt = 0;
    bool talalt = false;  //[Nándor, Áron, István, Gergõ, Péter]
    string nev;
    while(akt < N-1 && !talalt){
        talalt = alk[akt].nev == alk[akt+1].nev;
        nev = alk[akt].nev;
        akt++;
    }

    if(talalt){
        cout << "Van azonos nevu ember: " << nev << endl;
    }else{
        cout << "Nem voltak azonos nevu emberek." << endl;
    }


    return 0;
}
