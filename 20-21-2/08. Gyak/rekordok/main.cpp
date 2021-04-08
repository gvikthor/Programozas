#include <iostream>
#include <vector>

using namespace std;

struct Ember{
    string vezeteknev;
    string keresztnev;
    int eletkor;
    bool elo;
    vector<int> diplomaszerzesek;
};

int main()
{
    Ember ember1;
    ember1.vezeteknev = "Kovacs";
    ember1.keresztnev = "Peter";
    ember1.eletkor    = 24;
    ember1.elo        = true;
    ember1.diplomaszerzesek = {2020,2022,2026};

    cout << ember1.vezeteknev << " " << ember1.keresztnev << " " << ember1.eletkor << endl;
    for(int i = 0; i < ember1.diplomaszerzesek.size(); i++){
        cout << ember1.diplomaszerzesek[i] << " ";
    }

    return 0;
}
