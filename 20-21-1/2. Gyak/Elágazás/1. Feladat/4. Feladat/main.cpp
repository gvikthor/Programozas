#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Feladatsor/5
    float a, b, c, megoldas, determinans;
    cout << "Add meg a-t!" << endl;
    cin >> a;
    cout << "Add meg b-t!" << endl;
    cin >> b;
    cout << "Add meg c-t!" << endl;
    cin >> c;

    // (-b +- gyök(b^2 - 4ac))/2a

    if(a == 0){
        if(b == 0){
            if(c == 0){
                cout << "Vegtelen sok megoldas." << endl;
            }else{
                cout << "Nincs megoldas." << endl;
            }
        }else{
            megoldas = (-c)/b;
            cout << a << " * " << megoldas << " + " << c << " = 0" << endl;
        }
    }else{
        determinans = b*b - 4*a*c;
        if(determinans > 0){

            megoldas = ( (-b) + sqrt(determinans) )/(2*a);
            cout << "Megoldas 1: " << megoldas << endl;

            megoldas = ( (-b) - sqrt(determinans) )/(2*a);
            cout << "Megoldas 2: " << megoldas << endl;

        }else if(determinans == 0){
            megoldas = (-b)/(2*a);
            cout << "Megoldas: " << megoldas << endl;
        }else{
            cout << "Nincs valos megoldas!" << endl;
        }
    }

    return 0;
}
