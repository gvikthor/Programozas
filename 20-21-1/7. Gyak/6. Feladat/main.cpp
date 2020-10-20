#include <iostream>
#include <vector>

using namespace std;

vector<int> megfordit(vector<int> eredeti){
    vector<int> forditott;
    for(int i = eredeti.size()-1; i >= 0; i--){
        forditott.push_back(eredeti[i]);
    }
    return forditott;
}

vector<int> megfordit2(vector<int> eredeti){
    int M = eredeti.size();
    vector<int> forditott;

    forditott.resize(M);
    for(int i = 0; i < eredeti.size(); i++){
        forditott[M-i-1] = eredeti[i];
    }
    return forditott;
}

void megforditHelyben(vector<int> &eredeti){
    int M = eredeti.size();
    for(int i = 0; i < M/2; i++){
        int ideiglenes = eredeti[i];
        eredeti[i] = eredeti[M-1-i];
        eredeti[M-1-i] = ideiglenes;
    }
}

int main()
{
    vector<int> tomb1 = {1,2,3,4,5,6,7};
    vector<int> tomb2 = megfordit2(tomb1);
    megforditHelyben(tomb2);

    for(int i = 0; i < tomb1.size(); i++){
        cout << tomb1[i] << " " << tomb2[i] << endl;
    }
    return 0;
}
