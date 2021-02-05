#include <iostream>

using namespace std;

void constructSuffixMat(int a[][100], int n, int m) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 2; j >= 0; j--) {
      a[i][j] += a[i][j + 1];
    }
  }

  for (int i = m - 1; i >= 0; i--) {
    for (int j = n - 2; j >= 0; j--) {
      a[j][i] += a[j + 1][i];
    }
  }
  // for (int i = 0; i < n; i++) {
  //  for (int j = 0; j < m; j++) {
  //    cout << a[i][j] << " ";
  //  }
  //  cout << "\n";
  //}
}

int main() {
  int n, m, a[100][100], s, mi, mj, ms;
  cin >> n >> m;
  mi = 0;
  mj = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cout << "\n";
  constructSuffixMat(a, n, m);
  ms = a[0][0];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] > ms) {
        mi = i;
        mj = j;
        ms = a[i][j];
      }
    }
    cout << "\n";
  }
  cout << "\n";

  cout << a[mi][mj] << " " << mi << " " << mj << "\n";
  return 0;
}
