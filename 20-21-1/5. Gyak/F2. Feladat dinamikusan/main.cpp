#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //beolvasás
    cout << "Hany szamot szeretnel megadni?" << endl;
    int meret;
    cin >> meret;

    vector<int> tomb;

    for(int i = 0; i < meret; i++){
        cout << "Add meg a(z) " << i << ". elemet!" << endl;
        tomb.push_back(0);
        cin >> tomb[i];
    }

    //kiválogatás
    vector<int> parosak;
    for(int i = 0; i < meret; i++){ //[1 3 4 5 7 1 2 5 2]
        if(tomb[i] % 2 == 0){       //[4 2 2] 3
            parosak.push_back(tomb[i]);
        }
    }

    //kiírás
    cout << parosak.size() <<"db paros szam volt a bemenetben:" << endl;
    for(int i = 0; i < parosak.size(); i++){
        cout << "> " << parosak[i] << endl;
    }

    return 0;
}
