#include <iostream>
#include <vector>

using namespace std;

//{4,6,8,9,11,14}
// 0 1 2 3  4  5
//          |ide szurom be a 10-et

vector<int> vektorRendez(vector<int> rendezetlen){
    vector<int> joSorrend;

    for(int i = 0; i < rendezetlen.size(); i++){
        int ideSzuromBe = 0;
        while(ideSzuromBe < joSorrend.size() && joSorrend[ideSzuromBe] <= rendezetlen[i]){
            ideSzuromBe++;
        }

        int mentocsonak = rendezetlen[i];
        while(ideSzuromBe < joSorrend.size()){
            int ideiglenes = joSorrend[ideSzuromBe];
            joSorrend[ideSzuromBe] = mentocsonak;
            mentocsonak = ideiglenes;
            ideSzuromBe++;
        }
        joSorrend.push_back(mentocsonak);
    }

    return joSorrend;
}

// {3,4,7,8,10,15}
// {1,3,4,6,7,8,10,15}

vector<int> vektorRendezLesullyeszt(vector<int> rendezetlen){
    vector<int> joSorrend;

    for(int i = 0; i < rendezetlen.size(); i++){
        joSorrend.push_back(rendezetlen[i]);
        int aktHely = i;
        while(aktHely > 0 && joSorrend[aktHely-1] > joSorrend[aktHely]){
            int ideiglenes = joSorrend[aktHely-1];
            joSorrend[aktHely-1] = joSorrend[aktHely];
            joSorrend[aktHely] = ideiglenes;
            aktHely--;
        }
    }

    return joSorrend;
}

//{7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456}
//{7|4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456}
//{4,7|6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456}
//{4,6,7|78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456}
//{4,6,7,78|4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456}
//{4,4,6,7,78|3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456}

void vektorRendezLesullyesztHelyben(vector<int>& tomb){
    for(int i = 0; i < tomb.size(); i++){
        int aktHely = i;
        while(aktHely > 0 && tomb[aktHely-1] > tomb[aktHely]){
            int ideiglenes = tomb[aktHely-1];
            tomb[aktHely-1] = tomb[aktHely];
            tomb[aktHely] = ideiglenes;
            aktHely--;
        }
    }
}

vector<int> vektorRendezLesullyesztHelybenMasol(vector<int> tomb){
    for(int i = 0; i < tomb.size(); i++){
        int aktHely = i;
        while(aktHely > 0 && tomb[aktHely-1] > tomb[aktHely]){
            int ideiglenes = tomb[aktHely-1];
            tomb[aktHely-1] = tomb[aktHely];
            tomb[aktHely] = ideiglenes;
            aktHely--;
        }
    }
    return tomb;
}

int main()
{
    vector<int> adatok = {7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456,7,4,6,78,4,3,2,4,6,73,342,21,4,6,5,2,31,0,5,-1,4,7,-456};

    if(false){
        vektorRendezLesullyesztHelyben(adatok);
        for(int i = 0; i < adatok.size(); i++){
            cout << adatok[i] << " ";
        }
    }else{
        vector<int> kimenet = vektorRendezLesullyesztHelybenMasol(adatok);
        for(int i = 0; i < adatok.size(); i++){
            cout << adatok[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < kimenet.size(); i++){
            cout << kimenet[i] << " ";
        }
    }

    return 0;
}
