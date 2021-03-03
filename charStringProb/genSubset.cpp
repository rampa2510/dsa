#include <iostream>

using namespace std;

int main() {
  string inp;
  cin >> inp;
  int l = inp.length();
  for (int i = 0; i < l; i++) {
    for (int j = i; j < l; j++) {
      for (int k = i; k <= j; k++) {
        cout << inp[k];
      }
      cout << "\n";
    }
  }
  return 0;
}
