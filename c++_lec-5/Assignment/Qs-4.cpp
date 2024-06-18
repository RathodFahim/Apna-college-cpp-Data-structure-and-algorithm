#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i<=n; i++) {
        int curr = i;
        bool isPrime = true;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
            }
        }
        if(isPrime) {
        cout << curr << " ";
    }
   }
   cout << endl;
}
    