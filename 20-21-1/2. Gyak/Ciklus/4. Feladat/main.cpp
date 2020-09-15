#include <iostream>

using namespace std;

int main()
{
    //Feladatsor/5
    float alap, eredmeny;
    int kitevo;

    cout << "Add meg az alapot!" << endl;
    cin >> alap;
    cout << "Add meg akitevot!" << endl;
    cin >> kitevo;

    eredmeny = 1;
    for(int i = 0; i < kitevo; i++){
        eredmeny = eredmeny * alap;
    }

    cout << alap << "^" << kitevo << "=" << eredmeny << endl;


    return 0;
}
