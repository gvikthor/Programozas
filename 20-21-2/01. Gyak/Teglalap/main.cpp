#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Add meg a teglalap a oldalat!" << endl;
    cin >> a;
    cout << "Add meg a teglalap b oldalat!" << endl;
    cin >> b;

    int terulet = a*b;
    int kerulet = 2*(a+b);

    cout << "A teglalap terulete: " << terulet << endl
         << "A teglalap kerulete: " << kerulet << endl;

    return 0;
}
