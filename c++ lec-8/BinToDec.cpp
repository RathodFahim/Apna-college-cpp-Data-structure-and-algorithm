#include <iostream>
using namespace std;

void BinToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while(n > 0) {
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow *= 2;
        n /= 10;
    }

    cout << decNum << endl;
}

int main() {
    int binNum;
    cin >> binNum;

    BinToDec(binNum);

    return 0;
}