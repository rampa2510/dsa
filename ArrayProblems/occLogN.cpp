#include <algorithm>
#include <iostream>

using namespace std;

int low(int *a, int n, int k) {
  int i = 0, m, h = n - 1, ans = -1;
  while (i <= h) {
    m = (i + h) / 2;
    if (a[m] == k) {
      ans = m;
      h = m - 1;
    } else if (a[m] > k)
      h = m - 1;
    else
      i = m + 1;
  }
  /* cout << i << "\n"; */
  return ans;
}

int up(int *a, int n, int k) {
  int i = 0, h = n - 1, m, ans = -1;
  while (i <= h) {
    m = (i + h) / 2;
    if (a[m] == k) {
      ans = m;
      i = m + 1;
    } else if (a[m] > k)
      h = m - 1;
    else
      i = m + 1;
  }
  /* cout << i << "\n"; */
  return ans;
}

int main() {
  int a[10] = {1, 2, 2, 2, 5, 6, 7, 8, 9, 10};
  int lb = low(a, 10, 4);
  int ub = up(a, 10, 4);
  cout << lb<<" "<<ub << "\n";
  return 0;
}
