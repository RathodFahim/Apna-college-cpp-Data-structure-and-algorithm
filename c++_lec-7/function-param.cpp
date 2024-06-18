#include <iostream>
using namespace std;

int sum(int a, int b= 1) {  // Here a and b are called parameters and 1 is default argument. If we don't pass the value of b then it will take the default value of b.
    int sum = a + b;
    return sum;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;   // Here a and b are called arguments
    cout << "The sum of two number is " << sum(a, b) << endl;
    return 0;
}


// we can also write the above code as:

// int main() {
//     int s = sum(2, 3);
//     cout << "The sum of two number is " << s << endl;
// }