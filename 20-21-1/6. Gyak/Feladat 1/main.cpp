#include <iostream>
#include <vector>

using namespace std;

/*
Kérjük be egy ember adatait, majd írjuk ki szépen!
*/

struct Ember{
    string vezeteknev;
    string keresztnev;
    int kor;
    int gyerekekSzama;
    vector<string> gyerekek;
};

int main()
{
    Ember e1;
    cout << "Add meg az ember vezeteknevet!" << endl;
    cin >> e1.vezeteknev;

    cout << "Add meg az ember keresztnevet!" << endl;
    cin >> e1.keresztnev;

    cout << "Add meg " << e1.keresztnev << " korat!" << endl;
    cin >> e1.kor;

    cout << "Hany gyereke van " << e1.keresztnev << "-nek?" << endl;
    cin >> e1.gyerekekSzama;

    e1.gyerekek.resize(e1.gyerekekSzama);
    for(int i = 0; i < e1.gyerekekSzama; i++){
        cout << "Add meg a(z) " << i+1 << ". gyerek nevet!" << endl;
        cin >> e1.gyerekek[i];
    }

    ////////////////////////////////////
    cout << endl << endl;

    cout << e1.vezeteknev << " " << e1.keresztnev << " (" << e1.kor << ") gyerekei:" << endl;
    for(int i = 0; i < e1.gyerekekSzama; i++){
        cout << "- " << e1.gyerekek[i] << endl;
    }


    /*
    cout << "Add meg az ember vezeteknevet!" << endl;
    string vezeteknev;
    cin >> vezeteknev;

    cout << "Add meg az ember keresztnevet!" << endl;
    string keresztnev;
    cin >> keresztnev;

    cout << "Add meg " << keresztnev << " korat!" << endl;
    int kor;
    cin >> kor;

    cout << "Hany gyereke van " << keresztnev << "-nek?" << endl;
    int gyerekekSzama;
    cin >> gyerekekSzama;

    //string gyerekek[gyerekekSzama];
    //for(int i = 0; i < gyerekekSzama; i++){
    //    cout << "Add meg a(z) " << i << ". gyerek nevet!" << endl;
    //    cin >> gyerekek[i];
    //}

    vector<string> gyerekek;
    gyerekek.resize(gyerekekSzama);
    for(int i = 0; i < gyerekekSzama; i++){
        cout << "Add meg a(z) " << i << ". gyerek nevet!" << endl;
        cin >> gyerekek[i];
        //string temp;
        //cin >> temp;
        //gyerekek.push_back(temp);
    }

    //////////////////////////

    cout << vezeteknev << " " << keresztnev << " (" << kor << ") gyerekei:" << endl;
    for(int i = 0; i < gyerekekSzama; i++){
        cout << "- " << gyerekek[i] << endl;
    }
    */

    return 0;
}
