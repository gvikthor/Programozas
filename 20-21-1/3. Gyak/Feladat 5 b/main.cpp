#include <iostream>

using namespace std;

int main()
{
    int napokSzama = 5;
    double baratokSzama = 4;
    double napiKoltesek[napokSzama] = {250,401,500,180,650};
    int szazEuroFelettiNap = 0;

    for(int i = 0; i < napokSzama; i++){
        if((napiKoltesek[i] / baratokSzama) > 100){
            szazEuroFelettiNap++;
        }
    }

    cout << szazEuroFelettiNap << " napon kolttottek tobbet, mint 100 Euro fejenkent." << endl;


    return 0;
}
