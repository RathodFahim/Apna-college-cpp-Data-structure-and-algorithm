#include <iostream>
using namespace std;

void clearIBit(int num, int i) {
    int bitmask = (~0) << i;
    num = num & bitmask; // Clear the ith bit
    cout << num << endl;
}

int main() {
   clearIBit(15, 2);
   return 0;
}
