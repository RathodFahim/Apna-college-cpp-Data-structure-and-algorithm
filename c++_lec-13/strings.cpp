#include <iostream>
#include <string>
using namespace std;

int main() {

  string st = "Hello World";
  cout << st << endl;

  string st2;
  // cin >> st2; X-------X
  getline (cin, st2);
  cout << st2 << endl;
  cout << st2[0] << endl;
  cout << st2[4] << endl;
}