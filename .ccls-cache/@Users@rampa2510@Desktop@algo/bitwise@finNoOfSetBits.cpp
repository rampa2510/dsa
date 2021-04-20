#include <iostream>

using namespace std;

void countBits(int n) {
  int ans = 0;
  while (n > 0) {
    n = n & (n - 1);
    ans++;
  }
  cout << ans << "\n";
}

int main() {
  int n, c = 0, a = 1;
  cin >> n;
  while (true) {
    if (n == 0 || n == 1)
      break;
    c += n & a;
    n >>= 1;
  }
  if (n)
    c++;
  cout << c << "\n";
  /* countBits(n); */
  /* cout << __builtin_popcount(n) << "\n"; */
  return 0;
}
