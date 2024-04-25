#include <iostream>
using namespace std;

int main()
{
    int maths, english, sci;

    cout << "Enter the marks of maths: ";
    cin >> maths;

    cout << "Enter the marks of english: ";
    cin >> english;

    cout << "Enter the marks of sci: ";
    cin >> sci;

    int avg = (maths + english + sci) / 3;

    cout << "Average marks of maths, english and sci = " << avg;

    return 0;
}