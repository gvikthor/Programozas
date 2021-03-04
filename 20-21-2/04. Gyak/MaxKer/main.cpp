#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> szamok = {3,8,4,2,1,5,7,9,4,2,0};

    int maxHely = 0;
    int maxErtek = szamok[maxHely];
    for(int i = 1; i < szamok.size(); i++){
        if(szamok[i] > maxErtek){
            maxErtek = szamok[i];
            maxHely = i;
        }
    }

    cout << "A maximum a(z) " << maxHely << ". helyen van, ereteke " << maxErtek << endl;


    return 0;
}
