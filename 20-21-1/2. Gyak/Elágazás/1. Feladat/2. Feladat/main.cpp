#include <iostream>

using namespace std;

int main()
{
    float szam;
    cout << "Adj meg egy valos szamot!" << endl;
    cin >> szam;

    if(szam > 0){
        cout << "Pozitiv" << endl;
    }else if(szam < 0){
        cout << "Negativ" << endl;
    }else{
        cout << "Nulla" << endl;
    }


    if(szam == 1){
        cout << "Egy" << endl;
    }else if(szam == 2){
        cout << "Ketto" << endl;
    }else if(szam == 3){
        cout << "Harom" << endl;
    }else if(szam == 4){
        cout << "Negy" << endl;
    }

    return 0;
}
