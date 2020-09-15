#include <iostream>

using namespace std;

int main()
{
    float ar, szazalek, ujar;
    cout << "Add meg az eredeti arat!" << endl;
    cin >> ar;
    cout << "Add meg a learazas merteket szazalekban!" << endl;
    cin >> szazalek;

    /*if(ar <= 0 || szazalek < 0 || szazalek > 100){
        cout << "Hibas adatok!" << endl;
    }else{
        ujar = ar * (szazalek / 100.0);

        cout << "Az uj ar: " << ujar << endl;
        //cout << "Az uj ar: " << ar * (szazalek / 100.0) << endl;

        if(szazalek >= 50){
            cout << "Megeri megvenni!" << endl;
        }else{
            cout << "Nem eri meg megvenni!" << endl;
        }
    }*/

    while(ar <= 0 || szazalek < 0 || szazalek > 100){
        cout << "Hibas adatok!" << endl;
        cout << "Add meg az eredeti arat!" << endl;
        cin >> ar;
        cout << "Add meg a learazas merteket szazalekban!" << endl;
        cin >> szazalek;
    }

    ujar = ar * ((100-szazalek) / 100.0);

    cout << "Az uj ar: " << ujar << endl;
    //cout << "Az uj ar: " << ar * (szazalek / 100.0) << endl;

    if(szazalek >= 50){
        cout << "Megeri megvenni!" << endl;
    }else{
        cout << "Nem eri meg megvenni!" << endl;
    }


    return 0;
}
