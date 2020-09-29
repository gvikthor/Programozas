#include <iostream>

using namespace std;

int main()
{
    const int meret = 5;
    int helyek[meret] = {1,2,4,5,6};

    //0 1 2 3 4
    //1 2 4 5 6

    int i = 0;
    bool talalt = false;
    while(i < meret && !talalt){
        if(i+1 != helyek[i]){
            talalt = true;
        }else{
            i++;
        }
    }

    if(talalt){
        cout << "Van szabad hely." << endl;
    }else{
        cout << "Nincs szabad hely" << endl;
    }

    return 0;
}
