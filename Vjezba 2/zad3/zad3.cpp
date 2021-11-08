#include <iostream>
#include <iomanip>
using namespace std;
int &funkcija(int n, int a[]){
    int i;
    cout << "Unesite redni broj elementa: ";
    cin >> i;
    a[i]=a[i]+1;
    return (a[i]);
}
int main(){
    cout << "Unesite velicinu niza:";
    int i, n, p;
    cin >> n;
    int *a;
    a=new int[n];
    for(i=0; i<n;i++){
        cin >> a[i];
    }
    for(i=0; i<n;i++){
        cout << &a[i];
    }
    p = funkcija(n, a);
    cout << "Povratni element: ";
    cout << p;
    return 0;
}