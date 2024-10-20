#include <iostream>
using namespace std;

// Function to reverse the character array
void reverceCh(char word[] , int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        swap(word[start], word[end]);
        start++;
        end--;
    }
}

int main() {
    char word[] = "abcdef";
    reverceCh(word, 5);
    cout << word << endl;
}  