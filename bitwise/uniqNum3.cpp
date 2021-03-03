#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n, x, cnt[64] = {0}, c = 0, max_bits = INT_MIN;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    c = 0;
    while (x > 0) {
      cnt[c++] += x & 1;
      x >>= 1;
      if (max_bits < c)
        max_bits = c;
    }
  }
  int p = 1, ans = 0;
  for (int i = 0; i < 64; i++) {
    cnt[i] %= 3;
    ans += (cnt[i] * p);
    p <<= 1;
  }
  cout << ans << "\n";
  return 0;
}
