#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
//0 1 2 3 4 0-4 1-3 2
void funkcija(vector<int> ulaz, int &maks, int &mini, int n){
    vector<int> izlaz;
    int i, m;
    if(n%2==0){
        m=(n/2);
    }
    else{
        m=(n/2)+1;
    }

    for(i=0;i<m;i++){
        cout << i << m;
        izlaz.push_back(ulaz[i] + ulaz[(ulaz.size()-1) - i]);
        m--;
    }

    maks=izlaz.at(0);
    mini=izlaz.at(0);
    for(i=1;i<izlaz.size();i++){
        if(izlaz.at(i)>maks){
            maks=izlaz.at(i);
        }
        if(izlaz.at(i)<mini){
            mini=izlaz.at(i);
        }
    }
}

int main(){
    vector<int> ulaz;
    int a,maks, mini, i, n;
    cout << "Unesite broj clanova vektora";
    cin >> n;
    cout << "Unesite vektore";
    for(i=0;i<n;i++){
        cin >> a;
        ulaz.push_back(a);
    }
    funkcija(ulaz, maks, mini, n);
    cout << "Najveci clan vektora je: " << maks << ", a najmanji: " << mini;
    return 0;
}
