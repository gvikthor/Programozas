#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double N = 163;   // 674,56 = 674

    double i = N;
    while( !(  sqrt(i) == floor(sqrt(i))  ) ){
        i++;
    }

    cout << "A(z) " << N << "-hez legkozelebbi negyzetszam: " << i << " (" << sqrt(i) << ")" << endl;

    return 0;
}
