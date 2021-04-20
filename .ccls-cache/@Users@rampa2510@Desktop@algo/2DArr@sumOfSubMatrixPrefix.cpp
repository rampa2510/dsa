#include <iostream>

using namespace std;

void constructPrefixMat(int a[][100], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < m; j++) {
      a[i][j] += a[i][j - 1];
    }
  }
  // for (int i = 0; i < n; i++) {
  //  for (int j = 0; j < m; j++) {
  //    cout << a[i][j] << " ";
  //  }
  //  cout << "\n";
  //}
  // cout << "\n";

  for (int i = 0; i < m; i++) {
    for (int j = 1; j < n; j++) {
      a[j][i] += a[j - 1][i];
    }
  }
}

int sumOfSubMatrix(int a[][100], int i, int j, int x, int y) {
  int res = a[x][y];

  if (i > 0)
    res -= a[i - 1][y];

  if (j > 0)
    res -= a[x][j - 1];

  if (i > 0 && j > 0)
    res += a[i - 1][j - 1];

  return res;
}

int main() {
  int n, m, a[100][100], s;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cout << "\n";

  constructPrefixMat(a, n, m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  s = 0;
  for (int li = 0; li < n; li++) {
    for (int lj = 0; lj < m; lj++) {
      for (int bi = li; bi < n; bi++) {
        for (int bj = lj; bj < m; bj++) {
          s += sumOfSubMatrix(a, li, lj, bi, bj);
        }
      }
    }
  }

  cout << "\n" << s;
  return 0;
}
