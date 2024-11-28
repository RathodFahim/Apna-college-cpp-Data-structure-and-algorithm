#include <iostream>
#include <string.h>
using namespace std;

// palindrome is a word that reads the same backward as forward
bool isPalindrome(char word[], int n) {
   int st = 0, end = n-1;
   while(st < end) {
       if(word[st] != word[end]) {
           cout << "Not a palindrome" << endl;
           return false;
       }
       st++;
       end--;
   }

   cout << "Palindrome" << endl;
   return true;
}

int main() {
    char word[] = "apple";
    isPalindrome(word, strlen(word));
}