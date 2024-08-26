#include <iostream>
using namespace std;

int diagonalSum(int arr[][4], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
        if(i != n - i -1) {
            sum += arr[i][n-i-1];
        }
    }

    cout << sum << endl;
    return sum;
}

int main() {
    int n = 4, m = 4;
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8} ,{9,10,11,12}, {13,14,15,16}};
    diagonalSum(arr, n);
}