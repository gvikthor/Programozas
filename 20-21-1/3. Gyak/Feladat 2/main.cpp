#include <iostream>

using namespace std;

int main()
{
    int indulokSzama = 5;
    int eletkorok[indulokSzama] = {18,21,30,15,24};
    bool voltKiskoru = false;

    /*for(int i = 0; i < indulokSzama && !voltKiskoru; i++){
        cout << eletkorok[i] << endl;
        if(eletkorok[i] < 18){
            voltKiskoru = true;
        }
    }*/
    int i = 0;
    while(i < indulokSzama && !voltKiskoru){
        cout << eletkorok[i] << endl;
        if(eletkorok[i] < 18){
            voltKiskoru = true;
        }
        i++;
    }


    if(voltKiskoru){
        cout << "Volt kiskoru versenyzo." << endl;
    }else{
        cout << "Nem volt kiskoru versenyzo." << endl;
    }

    return 0;
}
