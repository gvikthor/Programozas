#include <iostream>

using namespace std;

void szovegkiir(string szoveg){
    for(int i = 0; i < szoveg.size(); i++){
        cout << szoveg[i] << endl;
    }
}

int main()
{
    string valtozo = "Egy ketto harom negy";
    szovegkiir(valtozo);
    szovegkiir("Almafa kortefa szilvafa");
    return 0;
}
