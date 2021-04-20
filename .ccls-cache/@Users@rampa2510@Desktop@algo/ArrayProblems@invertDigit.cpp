#include <iostream>

using namespace std;

int main() {
  string s, t;
  int c = 0, n;
  cin >> s;
  for (char z : s) {
    t = s;
    if (c != 0 || t[0] != '9') {
      n = t[c] - '0';
      if (n >= 5) {
        n = 9 - n;
        t[c] = n + '0';
        if (t < s)
          s = t;
      }
    }
    c++;
  }
  cout << t << "\n";
  return 0;
}
