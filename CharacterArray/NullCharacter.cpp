#include <iostream>
using namespace std;

int main() {
  char name[100];
  cin >> name;

  for (int i = 0; i < 8; i++) {
    cout << "index : " << i << " value : " << name[i] << endl;
  }

  //value of string terminator
  cout << "Null character : " << (int)name[7] << endl;

  return 0;
}