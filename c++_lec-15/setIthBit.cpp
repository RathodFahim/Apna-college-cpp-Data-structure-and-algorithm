#include <iostream>
using namespace std;

int setIthBit(int n, int i) {
    int bitmask = 1 << i;
    return (n | bitmask);
}

int main() {
    int n = 6; // Binary: 110
    int i = 3;

    cout << setIthBit(n, i) << endl; // Output: 6 (Binary: 110)
    return 0;
}