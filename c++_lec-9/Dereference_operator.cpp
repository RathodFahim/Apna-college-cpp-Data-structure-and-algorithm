#include <iostream>
using namespace std;

int main() {
    int a = 57;
    int *ptr = &a; 
    int **pptr = &ptr;

    cout << *ptr << endl; // prints the value of a
    cout << **pptr << endl; // prints the value of a

    *ptr = 10; // changes the value of a
    cout << a << endl; // prints the value of a

}