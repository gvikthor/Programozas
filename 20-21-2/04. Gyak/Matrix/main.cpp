#include <iostream>
#include <vector>

using namespace std;

/*

5 3
1 4 8
7 2 4
9 7 4
2 4 7
2 0 3

*/

int main()
{

    vector< vector<int> > matrix;
    int magassag, szelesseg;
    cout << "Milyen magas legyen a matrix?" << endl;
    cin >> magassag;
    cout << "Milyen szeles legyen a matrix?" << endl;
    cin >> szelesseg;

    /*
    for(int m = 0; m < magassag; m++){
        vector<int> beolvasottSor;
        for(int sz = 0; sz < szelesseg; sz++){
            int beolvasottErtek;
            cout << "Add meg a matrix kovetkezo elemet: " << m << ", " << sz << endl;
            cin >> beolvasottErtek;
            beolvasottSor.push_back(beolvasottErtek);
        }
        matrix.push_back(beolvasottSor);
    }
    */

    /*
    ciklus
        változó létrehozása
        változó feltöltése
        változó hozzáfûzése
    */

    matrix.resize(magassag);
    for(int m = 0; m < magassag; m++){
        matrix[m].resize(szelesseg);
        for(int sz = 0; sz < szelesseg; sz++){
            cout << "Add meg a matrix kovetkezo elemet: " << m << ", " << sz << endl;
            cin >> matrix[m][sz];
        }
    }


    cout << "A matrix:" << endl;
    for(int m = 0; m < magassag; m++){
        for(int sz = 0; sz < szelesseg; sz++){
            cout << matrix[m][sz] << "  ";
        }
        cout << endl;
    }

    return 0;
}
