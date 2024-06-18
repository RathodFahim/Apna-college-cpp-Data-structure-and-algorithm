#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number you want to skip: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        if (i == n) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
}