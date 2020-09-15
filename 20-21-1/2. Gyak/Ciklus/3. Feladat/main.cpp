#include <iostream>

using namespace std;

int main()
{
    int szam1, szam2, szorzat;
    cout << "Add meg az elso szamot!" << endl;
    cin >> szam1;
    cout << "Add meg a masodik szamot!" << endl;
    cin >> szam2;

    /*
    5 * 3

    összeg:  3 + 3 + 3 + 3 + 3
    i 0-tol: 0   1   2   3   4  <  5
    i 1-tol: 1   2   3   4   5  <= 5
    */

    szorzat = 0;
    for(int i = 0; i < szam1; i++){
        szorzat = szorzat + szam2;
        //szorzat += szam2;
    }

    cout << szam1 << "*" << szam2 << "=" << szorzat << endl;

    return 0;
}
