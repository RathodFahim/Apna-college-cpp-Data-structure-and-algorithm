#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)\n";
}

void assistant() {
    sayHello(); // function call
    cout << "Work Done \n";
}

int main() {
    sayHello(); // function call
    assistant(); // function call
}