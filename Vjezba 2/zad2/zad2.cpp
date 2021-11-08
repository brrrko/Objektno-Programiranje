#include<iostream>
#include<math.h>
using namespace std;
struct pravokutnik{
    int a;
    int b;
};
struct kruznica{
    int r;
};

void funkcija(int n, pravokutnik p[], kruznica k, int &br){
    int i, c;
    for(i=0;i<n;i++){
        c=sqrt(sqrt(p[i].a*p[i].a)+sqrt(p[i].b*p[i].b));
        if(c>k.r){
            br++;
        }
    }
}

int main(){
    int n, i, br=0;
    cout << "Unesite broj pravokutnika: ";
    cin >> n;
    pravokutnik p[n];
    kruznica k;
    for(i=0; i<n; i++){
        cout << "Unesite dimenzije pravokutnika: ";
        cin >> p[i].a;
        cin >> p[i].b;
    }
    cout << "Unesite radius kruznice: ";
    cin >> k.r;
    funkcija(n, p, k, br);
    cout << "Broj pravokutnika koji sjeku kruznicu: ";
    cout << br;
    return 0;
}
