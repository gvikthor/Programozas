#include <iostream>

using namespace std;

int main()
{
    const int meret = 5;
    int szamok[meret] = {456,21,10,901,57};
    int szam = 100;
    int j;

    int i = 0;
    bool talaltKulso = false;
    while(i < meret && !talaltKulso){

        /*int*/ j = i;
        bool talaltBelso = false;
        while(j < meret && !talaltBelso){
            if(szamok[i]*szamok[j] == szam){
                talaltBelso = true;
            }else{
                j++;
            }
        }

        if(talaltBelso){
            talaltKulso = true;
        }else{
            i++;
        }
    }

    if(talaltKulso){
        cout << szam << "=" << szamok[i] << "x" << szamok[j] << endl;
    }else{
        cout << "Nem volt ilyen par" << endl;
    }


    return 0;
}
