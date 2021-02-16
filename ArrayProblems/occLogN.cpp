#include <algorithm>
#include <iostream>

using namespace std;

int *low(int *a, int n, int k) {
  int i = 0, m, h = n - 1;
  while (i < h) {
    m = (i + h) / 2;
    if (a[m] >= k)
      h = m - 1;
    else
      i = m + 1;
  }
  cout << i << "\n";
  return &a[i];
}

int *up(int *a, int n, int k) {
  int i = 0, h = n - 1, m;
  while (i < h) {
    m = (i + h) / 2;
    if (a[m] <= k)
      i = m + 1;
    else
      h = m - 1;
  }
  cout << i << "\n";
  return &a[i];
}

int main() {
  int a[10] = {1, 2, 2, 2, 5, 6, 7, 8, 9, 10};
  int *lb = low(a, 10, 2);
  int *ub = up(a, 10, 2);
  cout << lb << "\n";
  return 0;
}
