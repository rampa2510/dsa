#include <iostream>

using namespace std;

int main() {

  int a[100][100], m, n, s;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  s = 0;
  for (int li = 0; li < n; li++) {
    for (int lj = 0; lj < m; lj++) {
      for (int bi = li; bi < n; bi++) {
        for (int bj = lj; bj < m; bj++) {
          for (int ki = li; ki <= bi; ki++) {
            for (int kj = lj; kj <= bj; kj++) {
              s += a[ki][kj];
            }
          }
        }
      }
    }
  }

  cout << s;

  return 0;
}
