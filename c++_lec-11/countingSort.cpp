#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void countSort(int arr[], int n) {
    int freq[100000] = {0};
    int minVal = INT32_MAX, maxVal = INT32_MIN;
    for(int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for(int i = minVal, j = 0; i <= maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArray(arr, n);
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n);
}