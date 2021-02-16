#include <iostream>

using namespace std;

int main() {
  char a;
  cin >> a;
  if ('z' - a <= 25)
    cout << "lowercase";
  else if ('Z' - a<=25)
    cout << "UPPERCASE";
  else
    cout << "Invalid";
  return 0;
}
