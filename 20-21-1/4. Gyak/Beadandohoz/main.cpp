#include <iostream>

using namespace std;

int main()
{
    int meretBeolvas;
    cout << "Add meg az adatok mennyiseget!" << endl;
    cin >> meretBeolvas;
    const int meret = meretBeolvas;

    int homersekletek[meret][2];

    for(int i = 0; i < meret; i++){
        cout << "Add meg a(z) " << i << ". napi legmagasabb homersekletet!" << endl;
        cin >> homersekletek[i][0];

        cout << "Add meg a(z) " << i << ". napi legalacsonyabb homersekletet!" << endl;
        cin >> homersekletek[i][1];
    }

    for(int i = 0; i < meret; i++){
        cout << i << ". nap legmagasabb: " << homersekletek[i][0] << ", legalacsonyabb: " << homersekletek[i][1] << endl;
    }

    /*
    int legmagasabb[meret];
    int legalacsonyabb[meret];

    for(int i = 0; i < meret; i++){
        cout << "Add meg a(z) " << i << ". napi legmagasabb homersekletet!" << endl;
        cin >> legmagasabb[i];

        cout << "Add meg a(z) " << i << ". napi legalacsonyabb homersekletet!" << endl;
        cin >> legalacsonyabb[i];
    }

    for(int i = 0; i < meret; i++){
        cout << i << ". nap legmagasabb: " << legmagasabb[i] << ", legalacsonyabb: " << legalacsonyabb[i] << endl;
    }
    */

    return 0;
}
