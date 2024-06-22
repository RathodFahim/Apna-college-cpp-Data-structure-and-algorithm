#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the siZe of the array " << endl;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Largest = " << max << endl;
    cout << "smallest = " << min << endl;

}