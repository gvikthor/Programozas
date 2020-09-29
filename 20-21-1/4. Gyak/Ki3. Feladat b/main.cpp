#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double N = 17;   // 674,56 = 674

    double i = 0;
    bool novel = true;

    // (novel => N+i) és (nem novel => N-i)
    // (novel && N+i) || (!novel && N-i)

    while(!(  (novel && sqrt(N+i) == floor(sqrt(N+i))) || (!novel && sqrt(N-i) == floor(sqrt(N-i)))  )){
        if(novel){
            novel = false;
        }else{
            novel = true;
            i++;
        }
    }

    if(novel){
        cout << "A(z) " << N << "-hez legkozelebbi negyzetszam: " << N+i << " (" << sqrt(N+i) << ")" << endl;
    }else{
        cout << "A(z) " << N << "-hez legkozelebbi negyzetszam: " << N-i << " (" << sqrt(N-i) << ")" << endl;
    }

    return 0;
}
