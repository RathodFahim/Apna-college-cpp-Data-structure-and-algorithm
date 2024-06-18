#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool isAdult = (age >= 18) ? true : false;

    //2nd example

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int largest = a >= b ? a : b;

    //3rd example
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isEven = (num % 2 == 0) ? true : false;

    cout << "Is Adult: " << isAdult << endl;
    cout << "Largest: " << largest << endl;
    cout << "Is Even: " << isEven << endl;
    
}