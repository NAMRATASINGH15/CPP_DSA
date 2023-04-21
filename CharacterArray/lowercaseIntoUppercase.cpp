#include <iostream>
#include <string.h>
using namespace std;

void lowercaseIntoUppercase (char ch[]) {
  int i = 0;
  
  while (ch[i] != '\0') {
    if (ch[i] >= 'a' && ch[i] <= 'z') {
      ch[i] = ch[i] - 'a' + 'A';
    }
    i++;
  }
  cout << ch << endl;
}

int main() {
  char ch[100];
  cin.getline(ch, 50);

 lowercaseIntoUppercase(ch);
 return 0;
}