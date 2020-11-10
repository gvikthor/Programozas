#include <iostream>
#include <vector>

using namespace std;

struct Alkalmazott{
    string nev;
    string beosztas;
    int kor;
};

/*

5
Aron programozo 20
Nandor menedzser 34
Dalma vezeto 40
Peter programozo 19
Istvan programozo 21

*/

bool programozoE(Alkalmazott alk){
    return alk.beosztas == "programozo";
}

int main()
{
    vector<Alkalmazott> alkalmazottak;
    int N;

    // Beolvasás
    cin >> N;
    alkalmazottak.resize(N);
    for(int i = 0; i < N; i++){
        cin >> alkalmazottak[i].nev >> alkalmazottak[i].beosztas >> alkalmazottak[i].kor;
    }


    // Ösztett tétel (legfiatalabb programozó)
    int minIndex;
    bool volt = false;
    for(int i = 0; i < N; i++){
        if(programozoE(alkalmazottak[i])){
            if(!volt){
                minIndex = i;
                volt = true;
            }else{
                if(alkalmazottak[minIndex].kor > alkalmazottak[i].kor){
                    minIndex = i;
                }
            }
        }
    }

    // Kiírás
    if(volt){
        cout << "A legfiatalabb programozo " << alkalmazottak[minIndex].nev;
    }else{
        cout << "Nem volt programozo.";
    }


    return 0;
}
