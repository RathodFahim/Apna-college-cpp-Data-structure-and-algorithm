#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 2, 6};
    int n = sizeof(arr)/sizeof(int);
    int copyArray[n];

    for(int i=0; i<n; i++) {
        int j = n-i-1;
        copyArray[i] = arr[j];
    }
    for(int i=0; i<n; i++) {
        arr[i] = copyArray[i];
    }
    
    printArray(arr, n);
}