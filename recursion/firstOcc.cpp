#include <iostream>

using namespace std;

int linSearch(int *a, int i, int n, int k) {
  if (i == n)
    return a[i] == k ? i : -1;
  if (a[i] == k)
    return i;
  return linSearch(a, i + 1, n, k);
}

int main() {
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;
  cout << linSearch(a, 0, n - 1, k) << "\n";
  return 0;
}
