#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // if (age >= 18) {
    //     cout << "You can vote!" << endl;
    // } else {
    //     cout << "You can't vote!" << endl;
    // }

    if (age >=18) {
        cout << "You can vote!" << endl;
    }
    if (age >= 45) {
        cout << "You are eligible for electioms" << endl;
    }
}