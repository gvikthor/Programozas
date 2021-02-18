#include <iostream>

using namespace std;

int main()
{
    int szam, db;

    cout << "Hany db szamot szeretnel tesztelni?" << endl;
    cin >> db;

    for(int i = 0; i < db; i++){
        cout << "Add meg a(z) " << i << ". szamot!" << endl;
        cin >> szam;

        //% modulo
        if(szam%2 == 0){
            cout << "A szam paros." << endl;
        }else{
            cout << "A szam paratlan." << endl;
        }
    }

    cout << "Az osszes lepes lefutott." << endl;

    return 0;
}
