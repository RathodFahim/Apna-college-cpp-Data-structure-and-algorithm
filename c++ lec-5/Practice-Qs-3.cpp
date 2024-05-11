#include <iostream>
using namespace std;

int main() {
    int n = 10829;
    int digitSum = 0;

    while(n > 0) {
        digitSum += n % 10;
        n /= 10;
    }

    cout << "The sum of digits of the number is: " << digitSum << "\n";
}