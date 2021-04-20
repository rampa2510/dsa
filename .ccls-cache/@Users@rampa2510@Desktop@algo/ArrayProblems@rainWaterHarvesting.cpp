#include <algorithm>
#include <iostream>
using namespace std;

// O(n^2)
int rainWater1(int a[100], int n) {
  int res = 0, left, right;

  for (int i = 1; i < n - 1; i++) {

    left = a[i];

    for (int j = 0; j < i; j++)
      left = max(a[j], left);

    right = a[i];

    for (int j = i + 1; j < n; j++)
      right = max(a[j], right);

    res += min(left, right) - a[i];
  }
  return res;
}

// O(n)
int rainWater(int a[100], int n) {
  int res = 0, l[n], r[n];

  l[0] = a[0];
  for (int j = 1; j < n; j++)
    l[j] = max(l[j - 1], a[j]);

  r[n - 1] = a[n - 1];

  for (int j = n - 2; j >= 0; j--)
    r[j] = max(r[j + 1], a[j]);

  for (int i = 1; i < n - 1; i++) {

    res += min(l[i], r[i]) - a[i];
  }
  return res;
}

int main() {
  int n, a[100], r;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  r = rainWater(a, n);
  cout << r << endl;
  return 0;
}
