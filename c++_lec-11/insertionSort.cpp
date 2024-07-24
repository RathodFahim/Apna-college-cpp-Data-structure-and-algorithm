#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionS(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int current = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > current) {
            swap (arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = current;
    }
    printArray(arr, n);
}

int main() {
    int arr[] = {5, 4, 2, 6, 1};
    int n = sizeof(arr) / sizeof(int);
    insertionS(arr, n);
}