#include <iostream>

using namespace std;

int sumOfArr(int *a, int n) {
  if (n == 0)
    return 0;
  return sumOfArr(a, n - 1) + a[n];
}

int sumOfArr(int *a, int s, int e) {
  cout << s << " e " << e << "\n";
  if (s == e)
    return a[s];
  return sumOfArr(a, s, e / 2) + sumOfArr(a, (e / 2) + 1, e);
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << sumOfArr(a, n - 1) << "\n";
  /* cout << sumOfArr(a, 0, n - 1) << "\n"; */
  /* cout << 5 / 2 << "\n"; */
  return 0;
}
