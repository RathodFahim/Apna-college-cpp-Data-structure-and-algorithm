#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    for(int i=2; i<=n; i++) {
        if (n % i == 0) {
            return false;
        }

        return true;
    }
    return 0;
}

bool isPrime2(int n) {
    if (n == 1) {
        return false;
    }
    for(int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }

        return true;
    }
    return 0;
}

int main() {
    cout << isPrime(22) << endl;
    cout << isPrime2(22) << endl;
}