#include <iostream>

using namespace std;

int main()
{
    int hanyadikkentEsettKi[5] = {1,2,4,5,3};
    string nevek[5] = {"Nandor","Aron","Istvan","Laura","Dalma"};
    int eloszorKiesett = -1;


    for(int i = 0; hanyadikkentEsettKi[i] != 1; i++){
        cout << hanyadikkentEsettKi[i] << endl;
        eloszorKiesett = i;
    }
    cout << nevek[eloszorKiesett+1] << " esett ki eloszor." << endl;

    return 0;
}
