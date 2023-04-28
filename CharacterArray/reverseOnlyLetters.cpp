#include <iostream>
#include <cctype>
using namespace std;

string reverseOnlyLetters(string s) {
  int i = 0;
  int j = s.length() - 1;
  
  while (i <= j) {
    if (isalpha(s[i]) == 0) {
      i++;
    } else if (isalpha(s[j]) == 0){
      j--;
    } else {
      char temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      i++;
      j--;
    }
  }
  return s;
}

int main() {
  string s = "ab-cd";
  string str = reverseOnlyLetters(s);
  cout << str << endl;
}