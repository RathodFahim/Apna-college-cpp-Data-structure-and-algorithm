#include <iostream>
using namespace std;

int main() {
    int n = 10829;
    int digitSum = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        if(lastDigit % 2 != 0) {
            digitSum += lastDigit;
        }
        n /= 10;
    }

    cout << "The sum of odd digits of the number is: " << digitSum << "\n";
}