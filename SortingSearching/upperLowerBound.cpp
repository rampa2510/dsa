#include <iostream>

using namespace std;

int upperBound(int *a, int n, int k) {
  int s = 0, e = n - 1, m, ans = -1;
  while (s <= e) {
    m = (s + e) / 2;
    if (a[m] == k) {
      ans = m;
      s = m + 1;
    } else if (a[m] > k)
      e = m - 1;
    else
      s = m + 1;
  }
  return ans;
}

int lowerBound(int *a, int n, int k) {
  int s = 0, e = n - 1, m, ans = -1;
  while (s <= e) {
    m = (s + e) / 2;
    if (a[m] == k) {
      ans = m;
      e = m - 1;
    } else if (a[m] > k)
      e = m - 1;
    else
      s = m + 1;
  }
  return ans;
}

int main() {
  int n, q, x, up, low;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> x;
    up = upperBound(a, n, x);
    low = lowerBound(a, n, x);
    cout << low << " " << up << "\n";
  }

  return 0;
}
