#include <iostream>
#include <string.h>
using namespace std;

void uppercaseIntoLowercase (char ch[]) {
  int i = 0;
  
  while (ch[i] != '\0') {
    if (ch[i] >= 'A' && ch[i] <= 'Z') {
      ch[i] = ch[i] - 'A' + 'a';
    }
    i++;
  }
  cout << ch << endl;
}

int main() {
  char ch[100];
  cin.getline(ch, 50);

  uppercaseIntoLowercase(ch);
  return 0;
}