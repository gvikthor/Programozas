#include <iostream>

using namespace std;

int main()
{
    int napokSzama = 5;
    int napiKoltesek[napokSzama] = {90,120,85,105,130};
    int szazEuroFelettiNap = 0;

    for(int i = 0; i < napokSzama; i++){
        if(napiKoltesek[i] > 100){
            szazEuroFelettiNap++;
        }
    }

    cout << szazEuroFelettiNap << " napon kolttott tobbet, mint 100 Euro." << endl;


    return 0;
}
