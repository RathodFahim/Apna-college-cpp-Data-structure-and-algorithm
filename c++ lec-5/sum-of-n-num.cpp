#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // our logic

    for(int i=1; i<=n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
}