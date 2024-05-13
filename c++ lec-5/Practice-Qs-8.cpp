#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Enter a number: ";
        cin >> n;
        if(n % 10 == 0){
            continue;
        }
        cout << "You entered: " << n << endl;
    } while (true);

    // This code will run infinitely because the continue statement will skip the cout statement and the loop will run infinitely.
}