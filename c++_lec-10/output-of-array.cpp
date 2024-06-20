#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 43, 65, 7, 87};
    int len = sizeof(arr) / sizeof(int);

    // output of array
    for(int i=0; i<=len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}