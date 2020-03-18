#include<iostream>
#include<new>
using namespace std;

void funkcija(int a[], int &i, int n){
    cout << "Upisite elemente niza: ";
    cin >> a[0];
    while(a[i]!=0){
        if(i>n){
            n=n*2;
            a=new int[n];
        }
        cin >> a[i+1];
        i++;
    }
}

int main(){
    int i, n, j;
    n=10;
    i=0;
    int *a;
    a=new int[n];
    funkcija(a, i, n);
    cout << "Dobiveni niz: ";
    for(j=0; j<i; j++){
        cout << a[j];
        cout << " ";
    }
    delete[] a;
    return 0;
}

