#include <iostream>



using namespace std;

bool binSearch(int *a, int s, int e, int k) {
  if (s > e)
    return false;
  int m = (s + e) / 2;
  if (a[m] == k)
    return true;
  if (a[m] > k)
    return binSearch(a, s, m - 1, k);
  return binSearch(a, m + 1, e, k);
}

int main() {
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> k;
  cout << binSearch(a, 0, n - 1, k) << "\n";
  return 0;
}
