#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/5

    int aron, viktor;
    cout << "Add meg Aron szamat!" << endl;
    cin >> aron;
    cout << "Add meg Viktor szamat!" << endl;
    cin >> viktor;

    /*
    if(0 < aron && aron < 31 && 0 < viktor && viktor < 31){
        /*int segedvaltozo = aron;
        aron = viktor;
        viktor = segedvaltozo;*/
    /*
        aron = aron + viktor;
        viktor = aron - viktor;
        aron = aron - viktor;

        cout << "Aron szama: " << aron << endl;
        cout << "Viktor szama: " << viktor << endl;
    }else{
        cout << "Rossz az intervallum!" << endl;
    }
    */

    while(!(0 < aron && aron < 31 && 0 < viktor && viktor < 31)){ //(0 > aron || aron > 31 || 0 > viktor || viktor > 31)
        cout << "Rossz az intervallum!" << endl;
        cout << "Add meg Aron szamat!" << endl;
        cin >> aron;
        cout << "Add meg Viktor szamat!" << endl;
        cin >> viktor;
    }

    int segedvaltozo = aron;
    aron = viktor;
    viktor = segedvaltozo;

    cout << "Aron szama: " << aron << endl;
    cout << "Viktor szama: " << viktor << endl;

    return 0;
}
