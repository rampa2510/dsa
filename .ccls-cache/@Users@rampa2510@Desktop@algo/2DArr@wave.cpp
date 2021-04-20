#include <iostream>

using namespace std;

int main() {
  int a[100][100], v = 1, n, m;
  cin >> m >> n;
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++) {
      a[i][j] = v++;
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  for (int col = 0; col < n; col++) {
    if (col % 2 == 0) {
      for (size_t row = 0; row < m; row++)
      {cout << a[row][col] << " row " << row << " ";
          if (row > m)
              cout << row << endl;
      }    
      for (size_t row = m - 1; row >= 0; row--)
        cout << a[row][col] << " row " << row << " ";
    }
  }

  //  for (size_t i = 0; i < n; i++) {
  //    for (size_t j = 0; j < m; j++) {
  //      cout << a[i][j] << " ";
  //    }
  //    cout << "\n";
  //  }

  //  for (size_t i = 0; i < 4; i++) {
  //    for (size_t j = 0; j < 3; j++)
  //      cout << a[j][i] << " ";
  //  }

  return 0;
}
