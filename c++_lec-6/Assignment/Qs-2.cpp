#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int i=0; i<n; i++) {
        //spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        //stars
        for(int j=0; j<n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}