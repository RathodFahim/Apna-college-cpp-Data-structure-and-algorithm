#include <iostream>
using namespace std;

int LinearSearch(int *arr, int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {32, 6, 4, 23, 56, 7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "Enter the to find in the array. \n" ;
    cin >> key;

    cout << LinearSearch(arr, n, key) << endl;
}