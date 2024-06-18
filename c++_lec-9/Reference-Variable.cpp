#include <iostream>
using namespace std;

void changeA(int &a) {
    a = 23;
    cout << a << "\n";
}

int main() {
    int a = 37;
    changeA(a);

    cout << a << "\n";
}