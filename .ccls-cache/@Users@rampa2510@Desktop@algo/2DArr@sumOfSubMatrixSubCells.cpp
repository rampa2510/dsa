#include <iostream>

using namespace std;

int main() {
  int a[100][100], n, m, s = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cout << "\n";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      s += a[i][j] * ((i + 1) * (j + 1) * (n - i) * (m - j));
    }
  }
  cout << s;

  return 0;
}
