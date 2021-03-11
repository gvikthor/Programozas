#include <iostream>
#include <vector>

using namespace std;

//Z -> IR
//ertekkeszlet FuggvenyNeve(ertelmezesiTartomany valtozoNev1, ertelmezesiTartomany valtozoNev2)

double FurcsaOsztosFuggveny(int x){
    return ((x*x)/3.897)+x;
}


int main()
{
    vector<int> szamok = {1,6,-5,4,-7,-9,15,-78,45,1,987,1,-7,-21,0,12};
    vector<string> szovegek = {"alma","korte","szilvaaaa"};

    //Összegzés
    cout << "##Osszegzes##" << endl;

    ///Számoljuk ki a számok összegét!
    int osszeg = 0;

    for(int i = 0; i < szamok.size(); i++){
        osszeg = osszeg + szamok[i];
    }

    cout << "A szamok osszege: " << osszeg << endl;

    ///Számoljuk ki a számok szorzatát!
    int szorzat = 1;

    for(int i = 0; i < szamok.size(); i++){
        szorzat = szorzat * szamok[i];
    }

    cout << "A szamok szorzata: " << szorzat << endl; //könnyen túlcsordul

    ///Számoljuk ki a szövegek "összegét"!
    string osszoveg = "";

    for(int i = 0; i < szovegek.size(); i++){
        osszoveg = osszoveg + szovegek[i];
    }

    cout << "A szovegek \"osszege\": " << osszoveg << endl;

    //Megszámlálás
    cout << "##Megszamlalas##" << endl;

    ///Számoljuk meg a negatív számokat!
    int dbNegativ = 0;

    for(int i = 0; i < szamok.size(); i++){
        if(szamok[i] < 0){
            dbNegativ++;
        }
    }

    cout << "A negativ szamok mennyisege: " << dbNegativ << endl;

    ///Számoljuk meg a magánhangzókat az osszovegben!
    int dbMgh = 0;

    for(int i = 0; i < osszoveg.size(); i++){
        char c = osszoveg[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            dbMgh++;
        }
    }

    cout << "A maganhangzok mennyisege: " << dbMgh << endl;

    //Maximum kiválasztás
    cout << "##Maximum kivalasztas##" << endl;
    ///Adjuk meg a legnagyobb szamot!
    int maxSzam = szamok[0], maxHely = 0;

    for(int i = 1; i < szamok.size(); i++){
        if(maxSzam < szamok[i]){
            maxSzam = szamok[i];
            maxHely = i;
        }
    }

    cout << "A legnagyobb szam erteke: " << maxSzam << ", helye: " << maxHely << endl;

    ///Adjuk meg a legkisebb szamot!
    int minSzam = szamok[0], minHely = 0;

    for(int i = 1; i < szamok.size(); i++){
        if(minSzam > szamok[i]){
            minSzam = szamok[i];
            minHely = i;
        }
    }

    cout << "A legkisebb szam erteke: " << minSzam << ", helye: " << minHely << endl;

    ///Adjuk meg a legkisebb pozitiv szamot! (feltételes maximum keresés)
    int pozMin, pozHely;
    bool volt = false;

    for(int i = 0; i < szamok.size(); i++){
        if(szamok[i] > 0){ //feltétel
            if(!volt || pozMin > szamok[i]){ //maxkeresés
                pozMin = szamok[i];
                pozHely = i;
                volt = true;
            }
        }
    }

    cout << "A legkisebb pozitiv szam erteke: " << pozMin << ", helye: " << pozHely << endl;

    //Eldöntés
    cout << "##Eldontes##" << endl;
    ///Van a számok közt nulla?
    bool vanNulla = false;
    int nullaHely = 0;

    while(nullaHely < szamok.size() && !vanNulla){
        vanNulla = szamok[nullaHely] == 0;
        nullaHely++;
    }

    /*
    int nullaHely;
    for(nullaHely = 0; nullaHely < szamok.size() && !vanNulla; nullaHely++){
        vanNulla = (szamok[nullaHely] == 0);
    }
    */

    /*for(int i = 0; i < szamok.size() && !vanNulla; i++){
        vanNulla = (szamok[i] == 0);
    }*/

    if(vanNulla){
        cout << "Volt 0." << endl;
    }else{
        cout << "Nem volt 0." << endl;
    }

    ///Van a számok közt nulla? (vanNulla nélkül)
    int nullaHely2 = 0;

    while(nullaHely2 < szamok.size() && szamok[nullaHely2] != 0){
        nullaHely2++;
    }


    //for(nullaHely2 = 0; nullaHely2 < szamok.size() && szamok[nullaHely2] != 0; nullaHely2++){}

    if(nullaHely2 < szamok.size()){
        cout << "Volt 0." << endl;
    }else{
        cout << "Nem volt 0." << endl;
    }

    //Kiválasztás
    cout << "##Kivalasztas##" << endl;
    ///Adjuk meg, hogy hol található a 987! BIZTOSAN VAN ILYEN SZÁM
    int knyhHely = 0; //kilencszázNyolcvanHét
    while(szamok[knyhHely] != 987){ //BIZTOSAN VAN ILYEN SZÁM AZ EF MIATT
        knyhHely++;
    }

    cout << "A 987 helye: " << knyhHely << endl; //BIZTOSAN VAN ILYEN SZÁM AZ EF MIATT

    //Keresés
    cout << "##Kereses##" << endl;
    ///Van nulla? Hol?
    bool vanNullaKereses = false;
    int nullaHelyKereses = 0;

    while(nullaHelyKereses < szamok.size() && !vanNullaKereses){
        vanNullaKereses = szamok[nullaHelyKereses] == 0;
        nullaHelyKereses++;
    }
    if(vanNullaKereses){
        cout << "Volt 0, helye: " << nullaHelyKereses << endl;
    }else{
        cout << "Nem volt 0." << endl;
    }

    //////////////////////////////////////////////////////////////////////////////////////////
    //Másolás
    cout << "##Masolas (fuggvenyszamitas)##" << endl;

    ///Másoljuk át az elemeket egy másik vektorba.
    vector<int> ujSzamok;
    ujSzamok.resize(szamok.size());

    for(int i = 0; i < szamok.size(); i++){
        //ujSzamok.push_back(szamok[i]);
        ujSzamok[i] = szamok[i];
    }

    cout << "UjSzamok: ";
    for(int i = 0; i < ujSzamok.size(); i++){
        cout << ujSzamok[i] << " ";
    }
    cout << endl;

    ///Adjuk meg minden elem ketszereset!
    vector<int> ketszeres;
    ketszeres.resize(szamok.size());

    for(int i = 0; i < szamok.size(); i++){
        //ketszeres.push_back(2*szamok[i]);
        ketszeres[i] = 2*szamok[i];
    }

    cout << "Ketszeres: ";
    for(int i = 0; i < ketszeres.size(); i++){
        cout << ketszeres[i] << " ";
    }
    cout << endl;

    ///Adjuk meg ezt a weird számolást ((szamok[i]*szamok[i])/2)+szamok[i]
    vector<double> fuggvenyEredmeny;
    fuggvenyEredmeny.resize(szamok.size());

    for(int i = 0; i < fuggvenyEredmeny.size(); i++){
        //ketszeres.push_back(2*szamok[i]);
        //fuggvenyEredmeny[i] = ((szamok[i]*szamok[i])/3.897)+szamok[i];
        fuggvenyEredmeny[i] = FurcsaOsztosFuggveny(szamok[i]);
    }

    cout << "Fuggveny eredmeny: ";
    for(int i = 0; i < fuggvenyEredmeny.size(); i++){
        cout << fuggvenyEredmeny[i] << " ";
    }
    cout << endl;

    return 0;
}
