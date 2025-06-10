// check the num is pow of 2 or not
#include <iostream>
using namespace std;

bool isPowerOf2(int num) {
    if(!(num & (num -1))) {
        return true; // num is a power of 2
    } else {
        return false; // num is not a power of 2
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOf2(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}