#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 43, 65, 7, 87};
    int n = sizeof(arr) / sizeof(int);

    // output of array
    for(int i=0; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}