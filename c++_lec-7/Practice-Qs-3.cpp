#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorial(n);
}