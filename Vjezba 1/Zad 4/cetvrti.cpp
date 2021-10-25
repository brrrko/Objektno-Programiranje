#include <iostream>
using namespace std;

int function(int *arr, int *largest, int *smallest, int i){
    if(i <= 0){
        return 0;
    }
    if(arr[i] > *largest){
        *largest = arr[i];
    }
    if(arr[i] < *smallest){
        *smallest = arr[i];
    }
    return function(arr, largest, smallest, i - 1);
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
    function(arr, &largest, &smallest, i - 1);
    cout << "The largest array element is: " << largest << " and the smallest: " << smallest << "\n";
}