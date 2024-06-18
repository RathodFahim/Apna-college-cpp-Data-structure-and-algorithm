#include <iostream>
using namespace std;

int main() {
    int a = 57;
    int *ptr = &a; // stores the address of a
    int **pptr = &ptr; // stores the address of ptr. It is a pointer to a pointer

    cout << ptr << endl; // prints the address of a
    cout << pptr << endl; // prints the address of ptr

    cout << &ptr << " = " << pptr << endl; 

}