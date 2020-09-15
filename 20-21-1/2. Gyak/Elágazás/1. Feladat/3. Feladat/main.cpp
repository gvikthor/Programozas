#include <iostream>

using namespace std;

int main()
{
    //Feladatsor/4
    float a, b, megoldas;
    cout << "Add meg a-t!" << endl;
    cin >> a;
    cout << "Add meg b-t!" << endl;
    cin >> b;

    if(a == 0){
        if(b == 0){
            cout << "Vegtelen sok megoldas." << endl;
        }else{
            cout << "Nincs megoldas." << endl;
        }
    }else{
        megoldas = (-b)/a;
        cout << a << " * " << megoldas << " + " << b << " = 0" << endl;
    }

    return 0;
}
