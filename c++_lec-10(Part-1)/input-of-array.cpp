#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the siZe of the array " << "\n";
    cin >> n;

    int arr[n];

    //input 
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    } 

    //output
    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}