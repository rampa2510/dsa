#include <iostream>
using namespace std;
int main() {
  int a[100000], c = 0, cs = 0, t, ms, n;
  cin >> t;
  int res[t];
  for (int i = 0; i < t; i++) {
    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    cs = 0;
    ms = 0;
    for (int j = 0; j < n; j++) {
      cs += a[j];
      if (cs > ms)
        ms = cs;
      else if (cs < 0)
        cs = 0;
    }
    res[c++] = ms;
  }
  for (int b : res) {
    cout << b << endl;
  }
  return 0;
}
