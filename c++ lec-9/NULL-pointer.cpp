#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL; // if we don't want to assign any address to a pointer, we can assign NULL to it

    cout << ptr << endl;

    // Do not dereference a NULL pointer as it will give a runtime error (segmentation fault)
}