// build a simple interest calculator

#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    cout << "Enter the time period: ";
    cin >> time;

    float simple_interest = (principal * rate * time) / 100;

    cout << "Simple interest = " << simple_interest;

    return 0;
}