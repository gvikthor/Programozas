#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //1. módszer
    vector<int> tomb1;
    int N;
    cout << "Add meg a tomb meretet!" << endl;
    cin >> N;
    tomb1.resize(N);

    for(int i = 0; i < N; i++){
        cout << "Add meg a(z)" << i << ". elemet!" << endl;
        cin >> tomb1[i];
    }

    for(int i = 0; i < tomb1.size(); i++){
        cout << tomb1[i] << " ";
    }

    //2. módszer
    vector<int> tomb2;
    int M;
    cout << "Add meg a tomb meretet!" << endl;
    cin >> M;

    for(int i = 0; i < M; i++){
        cout << "Add meg a(z)" << i << ". elemet!" << endl;
        tomb2.push_back(0);
        cin >> tomb2[i];
    }

    for(int i = 0; i < tomb2.size(); i++){
        cout << tomb2[i] << " ";
    }

    //3. módszer
    vector<int> tomb3;
    int K;
    cout << "Add meg a tomb meretet!" << endl;
    cin >> K;

    for(int i = 0; i < K; i++){
        cout << "Add meg a(z)" << i << ". elemet!" << endl;
        int beolvasottAdat;
        cin >> beolvasottAdat;
        tomb3.push_back(beolvasottAdat);
    }

    for(int i = 0; i < tomb3.size(); i++){
        cout << tomb3[i] << " ";
    }

    return 0;
}
