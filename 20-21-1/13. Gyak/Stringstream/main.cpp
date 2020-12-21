#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/*

     --------------------------
be-->  ghdf félk léfk          -->ki
     --------------------------
*/


int main()
{
    /*stringstream ss;
    string s;

    cin >> s;
    ss << s;

    string s2;
    int i;
    ss >> i;
    if(ss.fail()){
        cout << "Hiba";
    }else{
        cout << i;
    }*/

    vector<int> szamok;
    while(szamok.size() < 5){
        cout << "Add meg a(z) " << szamok.size() << ". szamot!" << endl;
        string s;
        cin >> s;
        stringstream ss;
        ss << s;
        int szam;
        ss >> szam;
        if(ss.fail()){
            cout << "Hibas bemenet" << endl;
        }else{
            szamok.push_back(szam);
        }
    }

    cout << "------" << endl;
    for(int i = 0; i < szamok.size(); i++){
        cout << szamok[i] << " ";
    }

    return 0;
}
