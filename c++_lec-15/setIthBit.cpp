#include <iostream>
using namespace std;

int setIthBit(int n, int i) {
    int bitmask = 1 << i;
    return (n | bitmask);
}
int clearIthBit(int n, int i) {
    int bitmask = ~(1 << i);
    return n & bitmask;
}

int main() {
    int n = 6; // Binary: 110
    int i = 3;

    cout << setIthBit(n, i) << endl; //output is 14 (Binary: 1110)
    cout << clearIthBit(n, i) << endl; //output is 6 (Binary: 110)

    return 0;
}