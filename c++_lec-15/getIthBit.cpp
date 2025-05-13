#include <iostream>
using namespace std;

int getIthvit(int n, int i) {
    int bitmask = 1 << i;

    if(!(n & bitmask)) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int n = 6;
    int i = 2;

    cout << getIthvit(n, i) << endl;
}