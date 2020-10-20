#include <iostream>
#include <vector>

using namespace std;

struct SkalarisEredmeny{
    double osszeg;
    bool letezik;
};

SkalarisEredmeny skalaris(vector<double> elso, vector<double> masodik){
    SkalarisEredmeny eredmeny;
    eredmeny.osszeg = 0;
    eredmeny.letezik = false;
    if(elso.size() == masodik.size()){
        for(int i = 0; i < elso.size(); i++){
            eredmeny.osszeg += elso[i]*masodik[i];
        }
        eredmeny.letezik = true;
    }
    return eredmeny;
}

int main()
{
    vector<double> v1 = {2,3,4,5};
    vector<double> v2 = {4,5,6};
    //2*4+3*5+4*6 = 8+15+24 = 47

    SkalarisEredmeny e = skalaris(v1,v2);
    if(e.letezik){
        cout << e.osszeg << endl;
    }else{
        cout << "Nem osszeszorozhatoak skalarisan." << endl;
    }
    return 0;
}
