#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char ch[]) {
  int i = 0;
  int j = strlen(ch) - 1;
  bool isPalindrome = true;

  while (i < j) {
    if (ch[i] != ch[j]) {
      isPalindrome = false;
      break;
    }
    i++, j--;
  }

  return isPalindrome;
}

int main() {
  char ch[100];
  cin.getline(ch, 20);

  if (isPalindrome(ch)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  
  return 0;
}