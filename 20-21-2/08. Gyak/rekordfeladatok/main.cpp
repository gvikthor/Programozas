#include <iostream>
#include <vector>

using namespace std;

struct Ember{
    string vezeteknev;
    string keresztnev;
    int eletkor;
    vector<int> diplomaszerzesek;
};

Ember emberbeolvas(int sorszam){
    Ember beolvasott;
    cout << "Add meg a(z) " << sorszam << ". ember vezeteknevet!" << endl;
    cin >> beolvasott.vezeteknev;
    cout << "Add meg a(z) " << sorszam << ". ember keresztnevet!" << endl;
    cin >> beolvasott.keresztnev;
    cout << "Add meg a(z) " << sorszam << ". ember eletkorat!" << endl;
    cin >> beolvasott.eletkor;

    return beolvasott;
}

vector<Ember> beolvasasok(int N){
    vector<Ember> emberek;

    for(int i = 0; i < N; i++){
        emberek.push_back(emberbeolvas(i));
    }

    return emberek;
}

Ember legidosebb(vector<Ember> emberek){
    Ember maxelem = emberek[0];
    for(int i = 1; i < emberek.size(); i++){
        if(emberek[i].eletkor > maxelem.eletkor){
            maxelem = emberek[i];
        }
    }
    return maxelem;
}

int main()
{
    vector<Ember> emberek = beolvasasok(3);


    /*
    emberek.resize(N);
    for(int i = 0; i < emberek.size(); i++){
        cout << "Add meg a(z) " << i << ". ember vezeteknevet!" << endl;
        cin >> emberek[i].vezeteknev;
        cout << "Add meg a(z) " << i << ". ember keresztnevet!" << endl;
        cin >> emberek[i].keresztnev;
        cout << "Add meg a(z) " << i << ". ember eletkorat!" << endl;
        cin >> emberek[i].eletkor;
    }
    */

    cout << "---LISTA---" << endl;
    for(int i = 0; i < emberek.size(); i++){
        cout << emberek[i].vezeteknev << " " << emberek[i].keresztnev << " (" << emberek[i].eletkor << ")" << endl;
    }

    //Adjuk meg a legidõsebb ember nevét!
    Ember legidosebbEmber = legidosebb(emberek);
    cout << "A legidosebb ember: " << legidosebbEmber.vezeteknev << " " << legidosebbEmber.keresztnev << endl;

    //Adjuk meg a legidõsebb embert azok közül, akik szereztek diplomát 2020-ban, vagy az után!

    cout << emberek[0].eletkorharomszorosa();

    return 0;
}
