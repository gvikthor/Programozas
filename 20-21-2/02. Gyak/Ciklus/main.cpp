#include <iostream>

using namespace std;

int main()
{
    int szam = 0;
    while(szam < 5){
        cout << "A szam erteke " << szam << endl;
        //szam = szam + 1;
        //szam += 1;
        szam++;
    }

    cout << "Elertuk a limitet, megallt a ciklus" << endl;

    //until
    szam = 0;
    while( !(szam == 5) ){
        cout << "A szam erteke " << szam << endl;
        szam++;
    }

    while( szam != 5 ){
        cout << "A szam erteke " << szam << endl;
        szam++;
    }


    //számlálós ciklus

    /*
    kezdeti lépés
    amíg(feltétel){
        csinál valamit

        befejezõ lépés
    }
    */

    for(int i = 0; i < 5; i++){
        cout << "i erteke: " << i << endl;
    }
    //cout << i << endl;



    string b;
    for(string a = "alma"; a != "almafafa"; b = a){ a += "fa"; }
    cout << b;


    return 0;
}
