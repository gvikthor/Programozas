#include <iostream>
#include <vector>

using namespace std;

struct Allat{
    string nev;
    string faj;
    int kor;
};

int main()
{
    vector<Allat> allatok;
    allatok.resize(5);

    allatok[0].nev = "Nandor";
    allatok[0].faj = "patkany";
    allatok[0].kor = 5;

    allatok[1].nev = "Istvan";
    allatok[1].faj = "tigris";
    allatok[1].kor = 12;

    allatok[2].nev = "Aron";
    allatok[2].faj = "mosomedve";
    allatok[2].kor = 1;

    allatok[3].nev = "Gergo";
    allatok[3].faj = "tigris";
    allatok[3].kor = 10;

    allatok[4].nev = "Peter";
    allatok[4].faj = "sas";
    allatok[4].kor = 3;


    /*
    Írjuk ki, hány tigris lakik itt, majd soroljuk fel a neveiket!
    */

    //int db = 0;
    vector<string> tigrisekNevei;
    for(int i = 0; i < allatok.size(); i++){
        if(allatok[i].faj == "tigris"){
            //db++;
            tigrisekNevei.push_back(allatok[i].nev);
        }
    }

    cout << tigrisekNevei.size() << "db tigris lakik az allatkerben: " << endl;
    for(int i = 0; i < tigrisekNevei.size() /*db*/; i++){
        cout << "- " << tigrisekNevei[i] << endl;
    }
    cout << endl;

    /*
    Ki a legöregebb állat az állatkertben?
    */

    /*int maxErtek = allatok[0].kor;
    string maxNev = allatok[0].nev;
    for(int i = 1; i < allatok.size(); i++){
        if(allatok[i].kor > maxErtek){
            maxErtek = allatok[i].kor;
            maxNev = allatok[i].nev;
        }
    }*/

    int maxIndex = 0;
    for(int i = 1; i < allatok.size(); i++){
        if(allatok[i].kor > allatok[maxIndex].kor){
            maxIndex = i;
        }
    }

    cout << "A legidosebb allat " << allatok[maxIndex].nev << " (" << allatok[maxIndex].kor << " eves)" << endl << endl;


    /*
    Hány évesek összesen azok az állatok, melyek NEM tigrisek?
    */

    int osszeg = 0;
    for(int i = 0; i < allatok.size(); i++){
        if(allatok[i].faj != "tigris"){
            osszeg += allatok[i].kor; // osszeg = osszeg + allatok[i].kor;
        }
    }

    cout << "A nem tigris lakok osszkora: " << osszeg << endl << endl;

    /* Keresés
    Hány éves Áron, ha van ilyen lakó egyáltalán?
    */

    int aronIndex = 0;
    bool aronLetezik = false;
    while(aronIndex < allatok.size() && !aronLetezik){
        //aronLetezik = allatok[aronIndex].nev == "Aron";
        if(allatok[aronIndex].nev == "Aron"){
            aronLetezik = true;
        }else{
            aronIndex++;
        }
    }

    if(aronLetezik){
        cout << "Van Aron nevu allat, " << allatok[aronIndex].kor << " eves." << endl << endl;
    }else{
        cout << "Nincs Aron nevu allat." << endl << endl;
    }

    /* Eldöntés
    Van Áron nevû állat?
    */

    int aronIndex2 = 0;
    bool aronLetezik2 = false;
    while(aronIndex2 < allatok.size() && !aronLetezik2){
        if(allatok[aronIndex2].nev == "Aron"){
            aronLetezik2 = true;
        }else{
            aronIndex2++;
        }
    }

    if(aronLetezik2){
        cout << "Van Aron nevu allat." << endl << endl;
    }else{
        cout << "Nincs Aron nevu allat." << endl << endl;
    }

    /* Kiválasztás
    Hány éves Áron?
    */

    int aronIndex3 = 0;
    bool aronMegvolt = false;
    while(aronIndex3 < allatok.size() && !aronMegvolt){
        if(allatok[aronIndex3].nev == "Aron"){
            aronMegvolt = true;
        }else{
            aronIndex3++;
        }
    }

    cout << "Aron " << allatok[aronIndex3].kor << " eves." << endl << endl;

    return 0;
}
