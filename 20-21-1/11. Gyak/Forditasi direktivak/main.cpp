#include <iostream>

//#define kiskutya

#ifdef kiskutya
using namespace std;

int main()
{
    cout << "Minden teszteset sikeres :)" << endl;
    return 0;
}

#else
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
#endif
