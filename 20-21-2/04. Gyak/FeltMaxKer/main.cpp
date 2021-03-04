#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> szamok = {3,1,1,1,1,5,9,1,1,1,1};

    int maxHely, maxErtek;
    bool volt = false;

    for(int i = 1; i < szamok.size(); i++){
        if(
           (szamok[i] % 2 == 0) &&
           (!volt || szamok[i] > maxErtek)
        ){
            maxErtek = szamok[i];
            maxHely = i;
            volt = true;
        }
    }

    //cout << "A maximum a(z) " << maxHely << ". helyen van, ereteke " << maxErtek << endl;
    if(volt){
        cout << "A legnagyobb paros szam: " << maxErtek;
    }else{
        cout << "Nem volt paros szam az adatok kozt.";
    }

    return 0;
}
