#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> szamok = {5,9,-15,8};

    szamok.push_back(5);
    szamok.push_back(7);
    szamok.push_back(-1);

    for(int i = 0; i < szamok.size(); i++){
        cout << szamok[i] << endl;
    }

    return 0;
}
