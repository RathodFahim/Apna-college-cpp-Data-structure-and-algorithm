#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // outer loop for rows
    for(int i=1; i<=n; i++) {
        // inner loop for columns
        for(int j=1; j<=n; j++) {
            // work to be done
            cout << i << " ";
        }
        cout << endl;
    }
}