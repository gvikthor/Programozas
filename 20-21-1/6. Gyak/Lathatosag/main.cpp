#include <iostream>

using namespace std;

void kiir(int i){
    cout << i;
}

int main()
{
    int i = 9;

    for(int i = 0; i < 5; i++){
        cout << i;
        kiir(6);
    }

    kiir(7);
    cout << i;

    return 0;
}
