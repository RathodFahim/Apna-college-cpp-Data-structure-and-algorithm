#include <iostream>
using namespace std;

void fastExpo(int x, int n) {
    int ans = 1;
    while(n > 0) {
        int lastBit = n & 1; // Get the last bit of n
        if(lastBit) {
            ans = ans * x; // If last bit is 1, multiply ans by x
        }

        x = x * x; // Square x for the next iteration
        n = n >> 1; // Right shift n to process the next bit
    }
    cout << "Result: " << ans << endl;
}

int main() {
    int x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    fastExpo(x, n);

    return 0;
}