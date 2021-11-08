#include <iostream>
#include <iomanip>
using namespace std;
void funkcija(int n, int a[], int &minimum, int &maksimum){
    int i;
    maksimum=a[0];
    minimum=a[0];
    for(i=1; i<n; i++){
        if (a[i]>maksimum){
            maksimum=a[i];
        }
        if (a[i]<minimum){
            minimum=a[i];
        }
    }
}
int main(){
    cout << "Unesite velicinu niza:";
    int i, n, minimum, maksimum;
    cin >> n;
    int *a;
    a=new int[n];
    for(i=0; i<n;i++){
        cin >> a[i];
    }
    funkcija(n, a, minimum, maksimum);
    cout << "Minimum i maksimum su: ";
    cout << minimum;
    cout << " ";
    cout << maksimum;
    cin >> n;
    return 0;
}
