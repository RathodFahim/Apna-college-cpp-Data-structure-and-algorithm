#include <iostream>
#include <vector>
using namespace std;

void clearBitsInRange(int num, int i, int j) {
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
    cout << num << endl;
}

int main() {
    int num, i, j;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the starting index (i): ";
    cin >> i;
    cout << "Enter the ending index (j): ";
    cin >> j;

    clearBitsInRange(num, i, j);

    return 0;
}
