#include <cstring>
#include <iostream>
using namespace std;

int main() {

  char c[100];
  int prev = 0, counter;
  cin.getline(c, 100);
  int l = strlen(c);
  for (counter = 1; counter < l; counter++) {
    if (c[prev] != c[counter])
      c[++prev] = c[counter];
  }
  c[++prev] = '\0';
  cout << c;
  return 0;
}
