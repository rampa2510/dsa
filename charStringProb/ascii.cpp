#include <iostream>

using namespace std;

void computeInPlace(string s) {
  string a;
  int l = s.length(), d;
  for (int i = 0; i < l - 1; i++) {
    d = (int)s[i + 1] - (int)s[i];
    cout << s[i] << d;
  }
  cout << s[l - 1];
}

int main() {
  string s;
  cin >> s;
  computeInPlace(s);
  return 0;
}
