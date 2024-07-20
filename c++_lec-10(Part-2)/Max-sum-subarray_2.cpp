#include <iostream>
using namespace std;

void maxSumSubArray(int *arr, int n) {
    int maxsum = INT32_MIN;
    for(int start=0; start<n; start++) {
        int currSum = 0;
        for(int end=start; end<n; end++) {
            currSum += arr[end];
            maxsum = max(maxsum, currSum);
        }
    }
    cout << "Max sum subarray is " << maxsum << endl;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSumSubArray(arr, n);
}