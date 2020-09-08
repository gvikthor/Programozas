#include <iostream>

using namespace std;

int main()
{
    // Feladatsor/9

    int osztalyzat = 0;
    cout << "Add meg az osztalyzatot!" << endl;
    cin >> osztalyzat;

    //if(osztalyzat < 1 || osztalyzat > 20){
    if(1 <= osztalyzat && osztalyzat <= 20){
        if(osztalyzat <= 10){
            cout << "Bukott." << endl;
        }else{
            cout << "Nem bukott." << endl;
        }
    }else{
        cout << "Nem megfelelo osztalyzat." << endl;
    }

    return 0;
}
