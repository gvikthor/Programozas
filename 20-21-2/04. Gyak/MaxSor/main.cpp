#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< vector<int> > szamok = {
        {7,3,8},
        {7,4,5,8},
        {3,7,5,1,7},
        {9,9,5,9,8,9,8,9},
        {8,7,4,3,8},
        {2,7,7,1,3,8},
        {1,1,1,2}
    };

    int maxHely, maxErtek;
    bool volt = false;

    for(int i = 0; i < szamok.size(); i++){
        int sorosszeg = 0;
        for(int j = 0; j < szamok[i].size(); j++){
            sorosszeg += szamok[i][j];
        }
        cout << "A(z) " << i << ". sor osszege: " << sorosszeg << endl;

        if(!volt || sorosszeg > maxErtek){
            maxHely = i;
            maxErtek = sorosszeg;
            volt = true;
        }
    }

    cout << "A maximalis sorosszeg a(z) " << maxHely << ". sor, erteke " << maxErtek << endl;

    return 0;
}
