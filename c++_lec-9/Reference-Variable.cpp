#include <iostream>
using namespace std;

void changeA(int &b) {
    b = 23;
    cout << b << "\n";
}

int main() {
    int a = 37;
    changeA(a);

    cout << a << "\n";
}