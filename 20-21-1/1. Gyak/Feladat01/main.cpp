#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/1

    int felhasznalo = 0;
    cout << "Adj meg egy pozitiv egesz szamot!" << endl;
    cin >> felhasznalo;

    if(felhasznalo > 0){ ///elágazás
        ///ha teljesül
        cout << felhasznalo << endl;
    }else{
        ///ha nem teljesül
        cout << "Ez nem egy pozitiv egesz." << endl;
    }

    return 0;
}
