#include <iostream>
using namespace std;

// Using Kadane's Algorithm

void maxSumSubArray(int *arr, int n) {
    int maxsum = INT32_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++) {
        currSum += arr[i];
        if(currSum < 0) {
            currSum = 0;
        }
        maxsum = max(maxsum, currSum);
    }
    cout << "Max sum subarray is " << maxsum << endl;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSumSubArray(arr, n);
}