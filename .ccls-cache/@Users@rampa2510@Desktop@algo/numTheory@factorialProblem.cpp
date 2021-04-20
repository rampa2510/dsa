#include <climits>
#include <iostream>

using namespace std;

void factors(int k, int n) {
  int occ, cnt, p, ans = INT_MAX, res;
  for (int i = 2; i * i <= k; i++) {
    if (k % i == 0) {
      occ = 0;
      while (k % i == 0) {
        occ++;
        k /= i;
      }
      // count the power of prime factors for n and its common for n
      cnt = 0;
      p = i;

      while (p <= n) {
        cnt += n / p;
        p = p * i;
      }
      res = cnt / occ;
      ans = ans > res ? res : ans;
    }
  }

  // here the occ will be 1 anyways
  if (k > 1) {
    cnt = 0;
    p = k;
    occ = 1;
    while (p <= n) {
      cnt += n / p;
      p = p * k;
    }
    res = cnt / occ;
    ans = ans > res ? res : ans;
  }

  if (ans == INT_MAX) {
    ans = 0;
  }
  cout << ans << "\n";
}

int main() {
  int t, n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    factors(k, n);
  }
  return 0;
}
