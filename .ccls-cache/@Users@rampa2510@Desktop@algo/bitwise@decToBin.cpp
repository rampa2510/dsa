#include <iostream>
#include <string>

using namespace std;

void method2(int n) {
  int p = 1, ans;
  while (n > 0) {
    ans = n & 1;
    ans += ans * p;
    p *= 10;
    n >>= 1;
  }
  cout << ans << "\n";
}

int main() {
  int n, a, b;
  cin >> n;
  b = n;

  string ans;
  while (n > 0) {
    a = n & 1;
    /* cout << a << "\n"; */
    ans = to_string(a) + ans;
    n >>= 1;
  }
  cout << ans << "\n";
  method2(b);
  return 0;
}
