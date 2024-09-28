#include <iostream>
using namespace std;

int findseven(int arr[][5], int n, int m) {
    int count = 0;  // Initialize count inside the function
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 2) {  // Correct array indexing
                count++;  
            }
        }
    }
    return count;
}

int main() {
    int arr[4][5] = {{1,2,3,4,5}, {2,3,5,6,8}, {2,4,1,6,9}, {5,6,43,21,2}};
    int n = 4;
    int m = 5;
    
    cout << "The number 2 appears " << findseven(arr, n, m) << " times.";
}
