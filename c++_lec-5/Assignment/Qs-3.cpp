#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = n;
    int cubeSum = 0;

    while(n > 0) {
        int rem = n % 10;
        cubeSum += rem * rem * rem;
        n /= 10;
    }
    if(num == cubeSum) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
}