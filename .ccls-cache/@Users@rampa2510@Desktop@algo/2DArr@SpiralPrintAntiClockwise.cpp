#include <iostream>

using namespace std;

int main() {
  int m, n, sr, er, sc, ec;
  cin >> n >> m;
  sr = 0;
  sc = 0;
  er = n - 1;
  ec = m - 1;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  while (sr <= er && sc <= ec) {
    for (int i = sr; i <= er; i++)
      cout << a[i][sc] << ", ";

    for (int i = sc + 1; i <= ec; i++)
      cout << a[er][i] << ", ";

    for (int i = er - 1; i >= sr; i--) {
      if (ec == sc)
        break;
      cout << a[i][ec] << ", ";
    }

    for (int i = ec - 1; i > sc; i--) {
      if (er == sr)
        break;
      cout << a[sr][i] << ", ";
    }

    sr++;
    sc++;
    er--;
    ec--;
  }

  cout<<"END";

  return 0;
}
