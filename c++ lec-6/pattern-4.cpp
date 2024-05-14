#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number of rows: ";
    cin >> n;
    int ch = 'A';

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << char(ch) << " ";
            ch++;
            if (ch > 'Z') {
                ch = 'A';
            }
        }

        cout << endl;
    }
}