#include <iostream>

using namespace std;

int main()
{
    string valasz;
    int db, szam;

    cout << "Add meg, mit szeretnel tenni!" << endl
         << "paritas : megadott mennyisegu szamrol kiirom, hogy paros vagy paratlan" << endl
         << "elojel  : megadott mennyisegu szamrol kiirom, hogy pozitiv vagy negativ"  << endl;
    cin >> valasz;

    cout << "Hanyszor fusson le?" << endl;
    cin >> db;


    if(valasz == "paritas"){
        for(int i = 0; i < db; i++){
            cin >> szam;
            if(szam%2 == 0){
                cout << "A szam paros." << endl;
            }else{
                cout << "A szam paratlan." << endl;
            }
        }
    }else if(valasz == "elojel"){
        for(int i = 0; i < db; i++){
            cin >> szam;
            if(szam < 0){
                cout << "A szam negativ." << endl;
            }else if(szam > 0){
                cout << "A szam pozitiv." << endl;
            }else{
                cout << "A szam nulla." << endl;
            }
        }
    }else{
        cout << "Nem ertem, mit szeretnel." << endl;
    }

    /* sokszor írja ki, hogy nem értem, mit szeretnél
    for(int i = 0; i < db; i++){
        cin >> szam;

        if(valasz == "paritas"){
            if(szam%2 == 0){
                cout << "A szam paros." << endl;
            }else{
                cout << "A szam paratlan." << endl;
            }
        }else if(valasz == "elojel"){
            if(szam < 0){
                cout << "A szam negativ." << endl;
            }else if(szam > 0){
                cout << "A szam pozitiv." << endl;
            }else{
                cout << "A szam nulla." << endl;
            }
        }else{
            cout << "Nem ertem, mit szeretnel." << endl;
        }
    }
    */

    return 0;
}
