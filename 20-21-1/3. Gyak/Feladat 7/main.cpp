#include <iostream>

using namespace std;

int main()
{
    int osszesNap = 7;
    int vasarlokSzama[osszesNap] = {151,218,321,177,0,0,781};
    int munkanapokSzama = 0;
    double osszesVasarlo = 0;

    for(int i = 0; i < osszesNap; i++){
        if(vasarlokSzama[i] != 0){
            munkanapokSzama++;
            osszesVasarlo = osszesVasarlo + vasarlokSzama[i];
        }
    }

    cout << "Munkanapok szama: " << munkanapokSzama << endl;
    cout << "Atlagosan " << osszesVasarlo/munkanapokSzama << " vasaroltak egy munkanapon." << endl;

    return 0;
}
