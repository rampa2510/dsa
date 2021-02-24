#include <iostream>

using namespace std;

int find(int *a, int s, int e, int k) {
  int m;
  while (s <= e) {
    m = (s + e) / 2;
    if (a[m] == k)
      return m;
    else if (a[s] <= a[m]) {
      if (k >= a[s] && k <= a[m])
        e = m - 1;
      else
        s = m + 1;
    } else {
      if (k <= a[e] && k >= a[m])
        s = m + 1;
      else
        e = m - 1;
    }
  }
  return -1;
}

int main() {
  int n, k, ans;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> k;
  ans = find(a, 0, n - 1, k);
  cout << ans << "\n";
  return 0;
}
