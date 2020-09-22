#include <iostream>

using namespace std;

int main()
{
    int hanyadikkentEsettKi[5] = {5,2,4,1,3};
    string nevek[5] = {"Nandor","Aron","Istvan","Laura","Dalma"};

    int i = 0;
    while(hanyadikkentEsettKi[i] != 1){
        cout << hanyadikkentEsettKi[i] << endl;
        i++;
    }
    cout << nevek[i] << " esett ki eloszor." << endl;

    return 0;
}
