#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/1

    int felhasznalo = 0;
    cout << "Adj meg egy pozitiv egesz szamot!" << endl;
    cin >> felhasznalo;

    if(felhasznalo > 0){ ///el�gaz�s
        ///ha teljes�l
        cout << felhasznalo << endl;
    }else{
        ///ha nem teljes�l
        cout << "Ez nem egy pozitiv egesz." << endl;
    }

    return 0;
}
