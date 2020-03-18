#include<iostream>
using namespace std;

void funkcija(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        a[i]=a[i]+1;
    }
}

int main(){
    int i, n;
    cout << "Upisite velicinu niza: ";
    cin >> n;
    int a[n];
    cout << "Upisite elemente niza: ";
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    funkcija(a, n);
    cout << "Novi niz: ";
    for(i=0; i<n; i++){
        cout << a[i];
        cout << " ";
    }
    return 0;
}
