#include <iostream>

using namespace std;

int main()
{
    int gondoltSzam = 10;
    int tipp = 0;
    int lehetosegek = 10;

    //while(gondoltSzam != tipp && lehetosegek > 0){ ///AM�G nem egyenl� a tipp �s a gondolt �S t�bb mint 0 lehet�s�g�nk van (while, solange)
    while(!(gondoltSzam == tipp || lehetosegek == 0)){ ///AM�G nem egyenl� a tipp �s a gondolt �S t�bb mint 0 lehet�s�g�nk van (until, bis)
        cout << "Tippelj egy szamot! A hatralevo lehetosegeid szama: " << lehetosegek << endl;
        cin >> tipp;

        if(tipp < gondoltSzam){
            cout << "Nagyobbra gondoltam." << endl;
        }else if(tipp > gondoltSzam){
            cout << "Kisebbre gondoltam" << endl;
        }else{
            cout << "Nyertel!";
        }

        lehetosegek = lehetosegek - 1;
    }

    /// gondoltSzam = tipp   =>  gondoltSzam == tipp
    /// gondoltSzam =/= tipp =>  gondoltSzam != tipp


    return 0;
}
