#include <iostream>

using namespace std;

int lastOcc(int *a, int i, int n, int ans, int k) {
  if (i == n)
    return a[i] == k ? i : ans;
  if (a[i] == k)
    return lastOcc(a, i + 1, n, i, k);
  return lastOcc(a, i + 1, n, ans, k);
}

int main() {
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> k;
  cout << lastOcc(a, 0, n - 1, -1, k) << "\n";
  return 0;
}
