#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/4

    int alja, teteje;
    cout << "Add meg az intervallum aljat!" << endl;
    cin >> alja;
    cout << "Add meg az intervallum tetejet!" << endl;
    cin >> teteje;

    if(teteje < alja){
        cout << "Nem lehet a teteje kisebb, mint az alja!";
    }else{
        cout << "Intervallum: [" << alja << ";" << teteje << "]" << endl;
    }
    // próbáljuk meg: addig olvasunk, amíg nem lesz jó az intervallum

    return 0;
}
