#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
        #include <vector>

        vector<tipus> nev;
        tipus valami;
        nev.push_back(valami);
        int meret = nev.size();
    */


    vector<int> dinamikusTomb;

    cout << "Hany szamot akarsz megadni?" << endl;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Add meg a(z) " << i << ". elemet!" << endl;
        int ideiglenesSzam;
        cin >> ideiglenesSzam;
        dinamikusTomb.push_back(ideiglenesSzam);

        /*dinamikusTomb.push_back(0);
        cin >> dinamikusTomb[i];*/
    }

    cout << "A tomb elemei:" << endl;
    for(int i = 0; i < N; i++){
        cout << "> " << dinamikusTomb[i] << endl;
    }



    /*
    cout << "Hany szamot akarsz megadni?" << endl;
    int N;
    cin >> N;

    const int meret = N;
    int tomb[meret];

    for(int i = 0; i < meret; i++){
        cout << "Add meg a(z) " << i << ". elemet!" << endl;
        cin >> tomb[i];
    }

    cout << "A tomb elemei: " << endl;
    for(int i = 0; i < meret; i++){
        cout << "> " << tomb[i] << endl;
    }
    */

    return 0;
}
