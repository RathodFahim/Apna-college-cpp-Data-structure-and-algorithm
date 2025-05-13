#include <iostream>
using namespace std;

void oddEven(int n) {
if(!(n & 1)) {
    cout << n << " is even" << endl;
} else {
    cout << n << " is odd" << endl;
}
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    oddEven(n);

    return 0;
}