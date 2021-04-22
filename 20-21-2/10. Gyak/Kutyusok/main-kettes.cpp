#include <iostream>
#include <vector>

using namespace std;

struct Kutyus{
    string nev;
    int eletkor;
};

int main()
{
    vector<Kutyus> kutyusok;
    int N;

    // Beolvas�s
    cin >> N;
    kutyusok.resize(N);
    for(int i = 0; i < N; i++){
        cin >> kutyusok[i].nev >> kutyusok[i].eletkor;
    }

    // Feladatmegold�s
    //// �tlag�letkor
    double osszeg = 0;
    for(int i = 0; i < N; i++){
        osszeg += kutyusok[i].eletkor;
    }
    double atlag = osszeg/(N*12);

    //// Volt 10 �vn�l id�sebb?
    bool volt = false;
    int idosIndex;
    for(int i = 0; i < N && !volt; i++){
        if(kutyusok[i].eletkor >= 120){
            volt = true;
            idosIndex = i;
        }
    }

    // Ki�r�s
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

    return 0;
}
