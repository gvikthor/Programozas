#include <iostream>
#include <vector>

using namespace std;

bool benneVan(int elem, vector<int> halmaz){
    bool talalt = false;
    for(int i = 0; i < halmaz.size() && !talalt; i++){
        if(elem == halmaz[i]){
            talalt = true;
        }
    }
    return talalt;
}

vector<int> Unio(vector<int> a, vector<int> b){
    vector<int> u = a;
    for(int i = 0; i < b.size(); i++){
        if(!benneVan(b[i],u)){
            u.push_back(b[i]);
        }
    }
    return u;
}

vector<int> Metszet(vector<int> a, vector<int> b){
    vector<int> m;
    for(int i = 0; i < a.size(); i++){
        if(benneVan(a[i],b)){
            m.push_back(a[i]);
        }
    }
    return m;
}

void vektorKiir(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v1 = {1,3,5,7,9};
    vector<int> v2 = {3,4,6,9,10};

    vector<int> unio = Unio(v1,v2);
    vector<int> metszet = Metszet(v1,v2);

    vektorKiir(unio);
    cout << endl;
    vektorKiir(metszet);


    return 0;
}
