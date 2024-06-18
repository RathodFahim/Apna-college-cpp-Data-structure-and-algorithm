#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    char op;
    cout << "Enter an operator: ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "a + b = " << a + b << endl;
            break;
        case '-':
            cout << "a - b = " << a - b << endl;
            break;
        case '*': 
            cout << "a * b = " << a * b << endl;
            break;
        case '/':
            cout << "a / b = " << a / b << endl;
            break;
        default:
            cout << "Invalid operator " << endl; 
    }
}