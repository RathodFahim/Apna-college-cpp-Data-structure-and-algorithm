// Income Tax Calculator

#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;

    cout << "Enter your income: (in Lakhs) ";
    cin >> income;

    if (income <= 5) {
        tax = 0;
    } else if (income <= 10) {
        tax = 0.2 * income;
    } else {
        tax = 0.3 * income;
    }

    cout << "Your tax is: " << tax * 100000 << endl;
}