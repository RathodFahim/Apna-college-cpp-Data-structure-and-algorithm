#include <iostream>
using namespace std;

void updateith(int num, int i, int val) {
    num = num & ~(1 << i); // Clear the ith bit
    num = num | (val << i); // Set the ith bit to val
    cout << "Updated number: " << num << endl;
}

int main() {
    updateith(7, 2 , 0);
}