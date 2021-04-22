#include <iostream>
#include <vector>

using namespace std;

struct Kutyus{
    string nev;
    int eletkor;
};

bool kutyusNevLetezik(string nev, vector<Kutyus> ebbenKeresunk){
    bool volt = false;
    for(int i = 0; i < ebbenKeresunk.size() && !volt; i++){
        if(ebbenKeresunk[i].nev == nev){
            volt = true;
        }
    }
    return volt;
}

int main()
{
    bool ujra = true;

    while(ujra){
        vector<Kutyus> kutyusok;
        int N;

        // Beolvasás
        cin >> N;
        while(kutyusok.size() < N){
            Kutyus beolvasottKutyus;
            cin >> beolvasottKutyus.nev >> beolvasottKutyus.eletkor;

            if( !kutyusNevLetezik(beolvasottKutyus.nev, kutyusok) && beolvasottKutyus.eletkor >= 10 ){
                kutyusok.push_back(beolvasottKutyus);
            }
        }

        // Feladatmegoldás
        //// Átlagéletkor
        double osszeg = 0;
        for(int i = 0; i < kutyusok.size(); i++){
            osszeg += kutyusok[i].eletkor;
        }
        double atlag = osszeg/(kutyusok.size()*12);

        //// Volt 10 évnél idõsebb?
        bool volt = false;
        int idosIndex;
        for(int i = 0; i < kutyusok.size() && !volt; i++){
            if(kutyusok[i].eletkor >= 120){
                volt = true;
                idosIndex = i;
            }
        }

        // Kiírás
        cout << "Atlageletkor: " << atlag << endl;
        if(volt){
            cout << "Volt ilyen kutyus, pl.: " << kutyusok[idosIndex].nev << endl;
        }else{
            cout << "Nem volt ilyen kutyus" << endl;
        }


        /*
        cout << "--------" << endl;
        for(Kutyus adottKutyus : kutyusok){
            cout << adottKutyus.nev << " " << adottKutyus.eletkor << endl;
        }
        */

        // Menü
        cout << "Ujra le szeretned futtatni? (i/n)" << endl;
        string valasz;
        cin >> valasz;

        ujra = (valasz != "n");

        /*
        if(valasz == "n"){
            ujra = false;
        }
        */

        /*
        if(valasz == "i"){
            ujra = true;
        }else if(valasz == "n"){
            ujra = false;
        }
        */
    }

    return 0;
}
