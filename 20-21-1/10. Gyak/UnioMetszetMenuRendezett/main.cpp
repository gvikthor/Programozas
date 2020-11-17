#include <iostream>
#include <vector>

using namespace std;
//elem:    -7
//halmaz:   -7  0  1  2  3  4  5  6  7  9 15
//indexek:  0   1  2  3  4  5  6  7  8  9 10
void beszur(int elem, vector<int>& halmaz){
    int index = halmaz.size();
    halmaz.push_back(elem);

    while(index > 0 && halmaz[index-1] > elem){
        halmaz[index] = halmaz[index-1];
        halmaz[index-1] = elem;
        index--;
    }
}

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
    vector<int> u = a; // feltételezzük, hogy az *a* redeneztt
    for(int i = 0; i < b.size(); i++){
        if(!benneVan(b[i],u)){
            beszur(b[i],u);
        }
    }
    return u;
}

vector<int> Metszet(vector<int> a, vector<int> b){
    vector<int> m;
    for(int i = 0; i < a.size(); i++){
        if(benneVan(a[i],b)){
            beszur(a[i],m);
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

        if(bemenet == 0){
            cout << "A program kilep" << endl;
            kilep = true;


        }else if(bemenet == 1){
            cout << "Add meg az uj V1 elemet: ";
            cin >> bemenet;
            if(benneVan(bemenet, v1)){
                cout << "Az elem mar benne volt V1-ben." << endl;
            }else{
                beszur(bemenet, v1);
                cout << "Sikeresen hozzaadva" << endl;
            }


        }else if(bemenet == 2){
            cout << "Add meg az uj V2 elemet: ";
            cin >> bemenet;
            if(benneVan(bemenet, v2)){
                cout << "Az elem mar benne volt V2-ben." << endl;
            }else{
                beszur(bemenet, v2);
                cout << "Sikeresen hozzaadva" << endl;
            }


        }else if(bemenet == 3){
            cout << "V1: ";
            vektorKiir(v1);
            cout << endl;


        }else if(bemenet == 4){
            cout << "V2: ";
            vektorKiir(v2);
            cout << endl;


        }else if(bemenet == 5){
            unio = Unio(v1,v2);
            cout << "Unio: ";
            vektorKiir(unio);
            cout << endl;


        }else if(bemenet == 6){
            metszet = Metszet(v1,v2);
            cout << "Metszet: ";
            vektorKiir(metszet);
            cout << endl;


        }else{
            cout << "Rossz bemenet." << endl;
        }

        cout << endl << endl;
    }


    return 0;
}
