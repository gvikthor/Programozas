#include <iostream>

using namespace std;

int main()
{
    //F�rfi, ha p�rosra v�gz�dik, n�, ha p�ratlanra
    const int meret = 5;
    int szemelyek[meret] = {17563,83755,37628,12346,33333};

    int i = 0;
    bool talalt = false;
    while(i < meret && !talalt){
        if(szemelyek[i] % 2 == 0){
            talalt = true;
        }else{
            i++;
        }
    }
    if(talalt){
        cout << "Dolgozik ferfi a helyen." << endl;
    }else{
        cout << "Nem dolgozik ferfi a helyen." << endl;
    }

    return 0;
}
