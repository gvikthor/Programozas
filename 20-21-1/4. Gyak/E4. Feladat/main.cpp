#include <iostream>

using namespace std;

int main()
{

    const int meret = 5;
    int helyek[meret] = {1,2,3,4,5}; //feltételezzük, hogy az 1-es és a legnmagyobb sorszámú hely, le van foglalva

    int i = 1;
    bool talalt = false;
    while(i < meret && !talalt){
        if(helyek[i-1] + 1 != helyek[i]){
            talalt = true;
        }else{
            i++;
        }
    }

    if(talalt){
        cout << "Van ures hely" << endl;
    }else{
        cout << "Nincs ures hely" << endl;
    }

    return 0;
}
