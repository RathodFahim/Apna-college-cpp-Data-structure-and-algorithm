#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while(i <= 10) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
        i++;
    }
    cout << endl;
    cout << "out of Loop because of use of break statement";
}