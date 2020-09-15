#include <iostream>

using namespace std;

int main()
{
    int szam, faktorialis;
    cout << "Adj meg egy egesz szamot!" << endl;
    cin >> szam;

    faktorialis = 1;
    /*int i = 1;
    while(i <= szam){
        faktorialis = faktorialis * i;
        i = i + 1;
        //i++;
        //i += 5; ->ötösével növeli
    }*/
    for(int i = 1; i <= szam; i = i + 1){
        faktorialis = faktorialis * i;
    }

    cout << szam << "! = " << faktorialis << endl;


    //for(; 1 == 1; cout << "almafa"){}

    return 0;
}
