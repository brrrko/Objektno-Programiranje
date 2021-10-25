#include <iostream>
using namespace std;

void function(int *arr, int *largest, int *smallest){
    int i;
    for(i=0;i<10;i++){
        if(arr[i] > *largest){
            *largest = arr[i];
        }
        if(arr[i] < *smallest){
            *smallest = arr[i];
        }
    }
}

int main(){
    int arr[32], largest = 0, smallest = 0, i = 0;
    cout << "Input 10 numbers to the array" << endl;
    while(i < 10){
        cin >> arr[i];
        i++;
    }
    largest = arr[0];
    smallest = arr[0];
    function(arr, &largest, &smallest);
    cout << "The largest array element is: " << largest << " and the smallest: " << smallest << "\n";
}