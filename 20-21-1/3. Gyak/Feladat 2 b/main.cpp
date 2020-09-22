#include <iostream>

using namespace std;

int main()
{
    int indulokSzama = 5;
    int ideiEv = 2020;
    int szuletesiEvek[indulokSzama] = {2000,1997,1995,2003,1975};
    bool voltKiskoru = false;

    int i = 0;
    while(i < indulokSzama && !voltKiskoru){
        cout << szuletesiEvek[i] << endl;
        if((2020 - szuletesiEvek[i]) < 18){
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
