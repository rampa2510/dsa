#include <iostream>
#include <string>

using namespace std;

void fact(int m, string *res) {
  int c = 0, l = (*res).length() - 1, t, d, s;
  for (int i = l; i >= 0; i--) {
    t = (*res)[i] - '0';
    s = t * m + c;
    d = s % 10;
    (*res)[i] = d + '0';
    s -= d;
    s /= 10;
    c = s;
  }
  if (c) {
    *res = to_string(c) + *res;
  }
}

int main() {
  int n, c = 0;
  cin >> n;
  string l = "1";
  for (int i = 1; i <= n; i++) {
    fact(i, &l);
  }

  cout << l;

  return 0;
}
