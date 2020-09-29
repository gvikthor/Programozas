#include <iostream>

using namespace std;

int main()
{
    const int meret = 7;
    int homersekletek[meret] = {1,2,3,4,5,6,7};

    int i = 1; //nem 0-ról indul!!!!
    bool talalt = false;
    while(i < meret && !talalt){
        if(homersekletek[i-1] >= homersekletek[i]){
            talalt = true;
        }else{
            i++;
        }
    }

    if(talalt){
        cout << "Nem szigmonnov." << endl;
    }else{
        cout << "Igen, szigmonnov." << endl;
    }

    return 0;
}
