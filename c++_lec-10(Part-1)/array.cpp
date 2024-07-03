#include <iostream>
using namespace std;

int main()
{
    int arr[50]; // initialied the array without element.

    int marks[50] = {1, 2, 3}; // Array with element

    int age[] = {12, 34, 54}; // siZe not defined but siZe is equal to elements. so 0 to 2 = 3 siZe

    // Calculating the length of array

    cout << sizeof(marks) << endl;               // output will be 20 because total memory siZe = 200 bytes. 4bytes * 50 = 200.
    cout << sizeof(marks) / sizeof(int) << endl; // it will produce actual siZe that is 50.
    cout << age[2] << endl;
}