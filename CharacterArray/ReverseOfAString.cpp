#include <iostream>
#include <string.h>
using namespace std;

void reverseOfString(char ch[]) {
  int i = 0;
  int j = strlen(ch) - 1;

  cout << j << endl;

  while (i < j) {
    swap(ch[i], ch[j]);
    i++;
    j--;
  }

  int k = 0;
  while(ch[k] != '\0') {
    cout << ch[k];
    k++;
  }
}

int main() {
  char ch[100];
  cin >> ch;
  reverseOfString(ch);
  return 0;
}