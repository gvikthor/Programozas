#include <iostream>

using namespace std;

int main()
{
    int fesztivalnapok = 6;
    int eladottBelepok[fesztivalnapok] = {2500,3400,7500,1200,1600,1230};
    int eddigiMax = 0;

    for(int i = 0; i < fesztivalnapok; i++){
        if(eddigiMax < eladottBelepok[i]){
            eddigiMax = eladottBelepok[i];
        }
    }

    cout << "A legtobb latogato " << eddigiMax << " volt";


    return 0;
}
