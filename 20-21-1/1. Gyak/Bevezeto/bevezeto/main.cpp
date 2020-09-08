#include <iostream>

using namespace std;

int main()
{
    cout << "Hello" << endl << "world!";
    cout << "Hello" << " " << "world!";
    cout << "Hello" << " world!";
    cout << "Hello " << " world!";

    cout << endl << "------" << endl;

    int alma = 5; ///integer - egész
    cout << alma << endl << alma+1 << endl << alma << endl;
    alma = 6;
    cout << alma << endl;
    alma = ((7*2)-2)/4; //12/4 = 3
    cout << alma << endl;
    alma = ((7*2))/4;   //14/4 = 3.66666
    cout << alma << endl;

    cout << endl << "------" << endl;

    string szilva = "Szilvafa"; ///string - szöveg
    cout << szilva << endl;

    cout << endl << "------" << endl;

    int a = 5;
    int b = 7;
    cout << a+b << endl;
    int c = a+b+3;
    cout << c << endl;

    int nagyszam1 = 2147483647;
    int nagyszam2 = 2147483648;
    cout << nagyszam2;

    cout << endl << "------" << endl;

    int felhasznalo = 0;
    cin >> felhasznalo;
    cout << felhasznalo+1 << endl;

    cout << endl << "------" << endl;

    float tizedes = (7.0*2.0)/4.0;
    cout << tizedes;

    cout << endl << "------" << endl;

    int szam = 0;
    while(szam <= 0){ // < <= > >= == !=
        cout << szam << endl;
        szam = szam + 1;
    }

    cout << endl << "------" << endl;

    if(5 == 5){
        cout << "5 = 5" << endl;
    }

    if(6 == 5){
        cout << "6 = 5" << endl;
    }else{
        cout << "6 nem= 5" << endl;
    }

    cout << endl << "------" << endl;

    if(5 == 5 && 6 == 6){ ///és
        cout << "igen" << endl;
    }

    if(5 == 5 && 7 == 6){ ///és
        cout << "igen" << endl;
    }else{
        cout << "nem" << endl;
    }

    if(5 == 5 || 7 == 6){ ///vagy
        cout << "igen" << endl;
    }else{
        cout << "nem" << endl;
    }

    if(!(5 == 6)){ ///tagadás --> !(igaz) -> hamis , !(hamis) -> igaz
        cout << "nem igaz" << endl;
    }

    return 0;
}
