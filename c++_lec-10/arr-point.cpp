#include <iostream>
using namespace std;

void fun(int arr[]) {
   arr[0] = 5;
   arr[1] = 12;
}

int main() {
    int arr[5] = {12, 45, 3, 6, 7};
    fun(arr);
    cout << arr[0] << endl;
    cout << arr[1] << endl;

}