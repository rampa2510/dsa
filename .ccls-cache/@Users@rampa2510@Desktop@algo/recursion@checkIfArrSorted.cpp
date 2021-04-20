#include <iostream>

using namespace std;

bool checkIfSorted(int *a, int i, int n) {
  /* cout << a[i] << " " << a[i + 1] << "\n"; */
  if (i == n - 1)
    return a[i] < a[i + 1];
  if (a[i] < a[i + 1])
    return checkIfSorted(a, i + 1, n);
  return false;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << checkIfSorted(a, 0, n - 1) << "\n";
  return 0;
}
