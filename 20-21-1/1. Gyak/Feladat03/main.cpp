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

    /*if(teteje < alja){
        cout << "Nem lehet a teteje kisebb, mint az alja!";
    }else{
        cout << "Intervallum: [" << alja << ";" << teteje << "]" << endl;
    }*/
    // pr�b�ljuk meg: addig olvasunk, am�g nem lesz j� az intervallum

    while(teteje < alja){ // while(!(teteje >= alja))
        cout << "Nem lehet a teteje kisebb, mint az alja!" << endl;
        cout << "Add meg az intervallum aljat!" << endl;
        cin >> alja;
        cout << "Add meg az intervallum tetejet!" << endl;
        cin >> teteje;
    }

    cout << "Intervallum: [" << alja << ";" << teteje << "]" << endl;


    return 0;
}
