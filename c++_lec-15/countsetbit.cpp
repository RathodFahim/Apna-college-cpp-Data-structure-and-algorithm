#include <iostream>
using namespace std;

void countSetBits(int num) {
    int count = 0;
   while(num > 0) {
    int lastDig = num & 1;
    count += lastDig; // Increment count if last bit is 1
    num = num >> 1; // Right shift to process the next bit
   }
    cout << "Number of set bits: " << count << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    countSetBits(num);

    return 0;
}