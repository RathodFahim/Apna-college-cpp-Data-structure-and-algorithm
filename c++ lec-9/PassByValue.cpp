#include <iostream>
using namespace std;

void changeA(int a) {
    a = 25;
    cout << a << "\n";
}

int main() {
    int a = 10;
    changeA(a);

    cout << a << "\n";
}