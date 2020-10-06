#include <iostream>

using namespace std;

// F: A->B

// mit ad vissza? mi a neve? mi(ke)t vár el? {mit csinál?}

// osszeadas: IN -> IN
int osszeadas(int elsoSzam, int masodikSzam){
    int osszeg = elsoSzam + masodikSzam;

    return osszeg;
}

int bonyolultEgyenlet(int elsoSzam, int masodikSzam){
    int eredmeny = (elsoSzam*32 + (masodikSzam-16)*2) - ((elsoSzam+masodikSzam)*7);

    return eredmeny;
}

int hozzaadKivon(int szam, bool hozzad){
    int eredmeny;

    if(hozzad){
        eredmeny = szam+1;
    }else{
        eredmeny = szam-1;
    }

    return eredmeny;
}

string szamjegySzovegge(int szamjegy){
    string eredmeny;

    if(szamjegy == 1){
        eredmeny = "Egy";
    }else if(szamjegy == 2){
        eredmeny = "Ketto";
    }else if(szamjegy == 9){
        eredmeny = "Kilenc";
    }else{
        eredmeny = "Nulla";
    }

    return eredmeny;
}

double pi(){
    return 3.141579;
}

void felhasznaloKoszontese(int homerseklet){
    cout << "Szia felhasznalo, szep napunk van, a homerseklet " << homerseklet << "C" << endl;
}

int main()
{
    cout << bonyolultEgyenlet(150,980) << endl;


    int a = 5, b = 16, c = 19, d = 1, e = 0, eredmeny;

    /*eredmeny = (a*32 + (b-16)*2) - ((a+b)*7);
    cout << eredmeny << endl;

    eredmeny = (b*32 + (c-16)*2) - ((b+c)*7);
    cout << eredmeny << endl;

    eredmeny = (d*32 + (e-16)*2) - ((d+e)*7);
    cout << eredmeny << endl;*/

    cout << bonyolultEgyenlet(a,b) << endl;
    cout << bonyolultEgyenlet(b,c) << endl;
    cout << bonyolultEgyenlet(d,e) << endl;
    cout << bonyolultEgyenlet(7,9) + bonyolultEgyenlet(15,2) << endl;

    cout << hozzaadKivon(1,true) << endl;
    cout << hozzaadKivon(5,false) << endl;

    cout << szamjegySzovegge(1) << endl;
    cout << szamjegySzovegge(9) << endl;
    cout << szamjegySzovegge(0) << endl;

    cout << pi() << endl;

    felhasznaloKoszontese(25);

    felhasznaloKoszontese(hozzaadKivon(bonyolultEgyenlet(15,30),true));

    return 0;
}
