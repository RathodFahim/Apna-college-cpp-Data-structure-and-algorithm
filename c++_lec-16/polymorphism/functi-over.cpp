//compile time polumorphism --> 1. function overloading
#include <iostream>
using namespace std;

void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

void print(string s) {
    cout << "String: " << s << endl;
}

int main() {
    print(5);
    print(5.5);
    print("Hello");
    return 0;
}