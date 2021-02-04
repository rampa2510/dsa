#include <iostream>

using namespace std;

int main() {
  int a[100][100], n, m, i, j, k, e;
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  i = 0;
  j = n - 1;
  while (i < n && j >= 0) {
    e = a[i][j];
    if (e == k) {
      cout << "i = " << i << " j = " << j << endl;
      break;
    } else if (e < k) {
      i++;
    } else {
      j--;
    }
  }

  return 0;
}
