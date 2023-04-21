#include <iostream>
#include <string.h>
using namespace std;

void replaceSpaces(char ch[]) {
  int size = strlen(ch);
  int i = 0;
  while (i < size) {
    if (ch[i] == ' ') {
      ch[i] = '@';
    }
    i++;
  }
}

int main() {
  char ch[100];
  cin.getline(ch, 50);
  replaceSpaces(ch);

  cout << ch << endl;
  return 0;
}