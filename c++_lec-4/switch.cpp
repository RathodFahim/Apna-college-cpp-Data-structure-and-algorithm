#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch (age) {
        case 18:
            cout << "You are 18 years old" << endl;
            break;
        case 20:
            cout << "You are 20 years old" << endl;
            break;
        case 30:
            cout << "You are 30 years old" << endl;
            break;
        default:
            cout << "You are neither 18, 20 nor 30 years old" << endl;
    }
}