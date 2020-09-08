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

    if(0 < aron && aron < 31 && 0 < viktor && viktor < 31){
        /*int segedvaltozo = aron;
        aron = viktor;
        viktor = segedvaltozo;*/

        aron = aron + viktor;
        viktor = aron - viktor;
        aron = aron - viktor;

        cout << "Aron szama: " << aron << endl;
        cout << "Viktor szama: " << viktor << endl;
    }else{
        cout << "Rossz az intervallum!" << endl;
    }
    // próbáljuk meg: Addig kérjük be a számokat, amíg nem lesz mindkettõ 1-30 közt

    return 0;
}
