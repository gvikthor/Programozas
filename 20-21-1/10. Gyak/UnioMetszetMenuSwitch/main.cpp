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
    vector<int> v1;
    vector<int> v2;

    vector<int> unio;
    vector<int> metszet;

    int bemenet;

    bool kilep = false;
    while(!kilep){
        cout << "-----MENU-----" << endl
             << "0: Kilep" << endl
             << "1: V1 uj elem" << endl
             << "2: V2 uj elem" << endl
             << "3: V1 kiir" << endl
             << "4: V2 kiir" << endl
             << "5: Unio" << endl
             << "6: Metszet" << endl
             << "Bemenet: ";
        cin >> bemenet;

        switch(bemenet){
        case 0:
            cout << "A program kilep" << endl;
            kilep = true;
            break;


        case 1:
            cout << "Add meg az uj V1 elemet: ";
            cin >> bemenet;
            if(benneVan(bemenet, v1)){
                cout << "Az elem mar benne volt V1-ben." << endl;
            }else{
                v1.push_back(bemenet);
                cout << "Sikeresen hozzaadva" << endl;
            }
            break;


        case 2:
            cout << "Add meg az uj V2 elemet: ";
            cin >> bemenet;
            if(benneVan(bemenet, v2)){
                cout << "Az elem mar benne volt V2-ben." << endl;
            }else{
                v2.push_back(bemenet);
                cout << "Sikeresen hozzaadva" << endl;
            }
            break;


        case 3:
            cout << "V1: ";
            vektorKiir(v1);
            cout << endl;
            break;


        case 4:
            cout << "V2: ";
            vektorKiir(v2);
            cout << endl;
            break;


        case 5:
            unio = Unio(v1,v2);
            cout << "Unio: ";
            vektorKiir(unio);
            cout << endl;
            break;


        case 6:
            metszet = Metszet(v1,v2);
            cout << "Metszet: ";
            vektorKiir(metszet);
            cout << endl;
            break;


        default:
            cout << "Rossz bemenet." << endl;
        }

        cout << endl << endl;
    }


    return 0;
}
