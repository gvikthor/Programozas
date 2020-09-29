#include <iostream>

using namespace std;

int main()
{
    const int meret = 7;
    int pontok[meret] = {65,38,82,83,27,91,100};
    string nevek[meret] = {"Peti", "Aron", "Tomi", "Laura", "Dalma", "Nandor", "Gergo"};

    int i = 1;
    bool talalt = false;
    while(i < meret && !talalt){
        if(pontok[i-1] == pontok[i]){
            talalt = true;
        }else{
            i++;
        }
    }

    if(talalt){
        cout << "Voltak ilyenek, pl.: " << nevek[i-1] << " es " << nevek[i] << " diak." << endl;
    }else{
        cout << "Nem volt ilyen ember." << endl;
    }

    return 0;
}
