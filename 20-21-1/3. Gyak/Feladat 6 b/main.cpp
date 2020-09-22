#include <iostream>

using namespace std;

int main()
{
    int fesztivalnapok = 6;
    int bevetel[fesztivalnapok] = {-40000,-1300000,-15000,-1500000,-500000,-450000};
    int eddigiMax = bevetel[0];

    for(int i = 1; i < fesztivalnapok; i++){
        if(eddigiMax < bevetel[i]){
            eddigiMax = bevetel[i];
        }
    }

    cout << "A legnagyobb bevetel " << eddigiMax << "Ft volt";


    return 0;
}
