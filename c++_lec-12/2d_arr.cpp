#include <iostream>
using namespace std;

int main() {
    int arr[3][4];

    int n = 3, m = 4;

    // Input
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}