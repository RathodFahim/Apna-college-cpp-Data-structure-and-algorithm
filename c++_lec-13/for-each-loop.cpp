#include <iostream>
#include <string>
using namespace std;

int main() {
   string st = "hello world!";

//    for(int i=0; i<st.length(); i++) {
//     cout << st[i] << "-";
//    }
//    cout << endl;
     
     for(char ch : st) {
        cout << ch << "-";
     }
     cout << endl;
}