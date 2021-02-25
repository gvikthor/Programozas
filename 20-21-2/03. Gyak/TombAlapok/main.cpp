#include <iostream>

using namespace std;

int main()
{                  //0,1,2,3,4  --> indexek nullától indulnak!
    int szamok[5] = {4,2,8,6,8};

    for(int i = 0; i < 5; i++){
        cout << szamok[i] << " ";
    }


    return 0;
}
