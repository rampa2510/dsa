#include <algorithm>
#include <iostream>

using namespace std;

int partition(int *a, int s, int e) {
  int i = s - 1;
  int p = a[e];
  for (int j = s; j < e; j++) {
    if (a[j] <= p)
      swap(a[++i], a[j]);
  }
  swap(a[++i], a[e]);
  return i;
}

void quickSort(int *a, int s, int e) {
  if (s >= e)
    return;

  int p = partition(a, s, e);

  quickSort(a, s, p - 1);
  quickSort(a, p + 1, e);
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  quickSort(a, 0, n - 1);
  for (auto z : a) {
    cout << z << "\n";
  }
  return 0;
}
