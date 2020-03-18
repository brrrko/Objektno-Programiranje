#include<iostream>
#include<new>
using namespace std;

void funkcija(int a[], int b[], int n){
    int i, j;
    b[0]=a[0];
    b[1]=a[1];
    for(i=2; i<n; i++){
        for(j=2; j<n; j++){
            b[j]=a[i-1]+a[i-2];
        }
    }
}

int main(){
    int i, n;
    cout << "Prva dva elementa su jedinice, unesite ostale: ";
    cin >> n;
    int *a;
    int *b;
    a=new int[n];
    b=new int[n];
    cout << "Upisite elemente niza: ";
    a[0]=1;
    a[1]=1;
    for(i=2; i<n; i++){
        cin >> a[i];
    }
    funkcija(a, b, n);
    cout << "Novi niz: ";
    for(i=0; i<n; i++){
        cout << b[i];
        cout << " ";
    }
    delete[] a;
    delete[] b;
    return 0;
}

