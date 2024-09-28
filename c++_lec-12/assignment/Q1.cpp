#include <iostream>
using namespace std;

int findtwo(int arr[][5], int n, int m, int count) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] == 2) {
              count++;  
            }
        }
    }
    
    return count;
}

int main()
{
    int arr[4][5] = {{1,2,3,4,5}, {2,3,5,6,8}, {2,4,1,6,9}, {5,6,43,21,2}};
    int n = 4;
    int m = 5;
    int count = 0;
    
    cout << "the 2 is appear in " << findtwo(arr, n, m, count) << " times " ;
}