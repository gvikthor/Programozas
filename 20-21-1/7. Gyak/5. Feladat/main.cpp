#include <iostream>
#include <vector>

using namespace std;

void fibonacciKiir(int N){
    cout << "1" << endl;
    cout << "1" << endl;
    int elozo = 1;
    int elozoElotti = 1;
    for(int i = 3; i <= N; i++){
        int osszeg = elozo + elozoElotti;
        cout << osszeg << endl;
        elozoElotti = elozo;
        elozo = osszeg;
    }
}

vector<int> fibonacciVectorba(int N){
    vector<int> eredmeny;
    if(N > 0){
        eredmeny.push_back(1);
        if(N > 1){
            eredmeny.push_back(1);
            if(N > 2){
                for(int i = 2; i < N; i++){
                    int osszeg = eredmeny[i-1] + eredmeny[i-2];
                    eredmeny.push_back(osszeg);
                }
            }
        }
    }
    return eredmeny;
}

void rekurzio(int N){
    cout << N << endl;
    if(N > 0){
        rekurzio(N-1);
    }
}

int rekurzio2(int N){
    int osszeg = N;
    if(N > 0){
        osszeg += rekurzio2(N-1);
    }
    return osszeg;
}

void fibonacciRekurzivan(int elozo, int elozoElotti, int N){
    if(N > 0){
        int osszeg = elozo+elozoElotti;
        cout << osszeg << endl;
        fibonacciRekurzivan(osszeg, elozo, N-1);
    }
}

void fibonacci(int N){
    if(N > 0){
        cout << 1 << endl;
        if(N > 1){
            cout << 1 << endl;
            if(N > 2){
                fibonacciRekurzivan(1,1,N-2);
            }
        }
    }
}

int main()
{
    //fibonacciKiir(15);

    /*vector<int> fib1 = fibonacciVectorba(20);
    for(int i = 0; i < fib1.size(); i++){
        cout << fib1[i] << endl;
    }*/

    //rekurzio(5);

    //cout << rekurzio2(5);

    //fibonacciRekurzivan(1,1,10);

    fibonacci(10);

    return 0;
}
