#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    bool val = true;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }


}