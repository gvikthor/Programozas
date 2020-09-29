#include <iostream>

using namespace std;

int main()
{
    const int meret = 5;
    bool helyek[meret] = {true,true,true,false,true}; //le van foglalva?

    int i = 0;
    bool talalt = false;
    while(i < meret && !talalt){
        if(!helyek[i]){ // helyek[i] == false
            talalt = true;
        }else{
            i++;
        }
    }

    if(talalt){
        cout << "Van szabad hely." << endl;
    }else{
        cout << "Nincs szabad hely." << endl;
    }

    return 0;
}
