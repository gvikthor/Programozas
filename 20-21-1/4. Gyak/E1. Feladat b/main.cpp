#include <iostream>

using namespace std;

int main()
{
    //F�rfi, ha p�rosra v�gz�dik, n�, ha p�ratlanra
    const int meret = 5;
    int szemelyek[meret] = {17563,83755,37625,12345,33333};

    int i = 0;
    while(i < meret && (szemelyek[i] % 2 != 0)){
        i++;
    }

    if(i < meret){
        cout << "Dolgozik ferfi a helyen." << endl;
    }else{
        cout << "Nem dolgozik ferfi a helyen." << endl;
    }

    return 0;
}
