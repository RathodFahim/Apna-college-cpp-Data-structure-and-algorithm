// Check number is prime or not

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    } 

    if(isPrime == true) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }

}