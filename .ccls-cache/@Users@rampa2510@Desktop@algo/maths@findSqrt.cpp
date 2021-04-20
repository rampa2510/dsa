#include <iostream>

using namespace std;

int findSqrt(int n) {
  int s = 1;
  int e = n;
  int m;
  float ans = -1;
  while (s <= e) {
    m = (s + e) >> 1;
    if (m * m == n)
      return m;
    if (m * m < n) {
      ans = m;
      s = m + 1;
    } else
      e = m - 1;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << findSqrt(n) << "\n";
  return 0;
}
