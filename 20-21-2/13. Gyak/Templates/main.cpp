#include <iostream>
#include <vector>

using namespace std;

struct Ruhak{
    string szin;
    string anyag;
};

struct Lego{
    string nev;
    int sorszam;
};

template<class Tipus>
struct Ember{
    string nev;
    int eletkor;
    vector<Tipus> cuccok;
};

int main()
{
    Ember<Lego> legosember;
    Ember<Ruhak> ruhasember;

    vector<int> szamok;
    vector<string> szovegek;
    vector< Ember<Lego> > emberek;
    vector< vector<int> > matrix;

    return 0;
}
