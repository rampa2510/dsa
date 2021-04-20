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

  cout << "\n";

  int startRow = 0, startCol = 0, i, endRow = m - 1, endCol = n - 1;

  while (startRow <= endRow && startCol <= endCol) {
    for (i = startCol; i <= endCol; i++) {
      cout << a[startRow][i] << " ";
    }

    for (i = startRow + 1; i <= endRow; i++) {
      cout << a[i][endCol] << " ";
    }

    for (i = endCol - 1; i >= startCol; i--) {
      if (startRow == endRow)
        break;
      cout << a[endRow][i] << " ";
    }

    for (i = endRow - 1; i > startRow; i--) {
      if (startCol == endCol)
        break;
      cout << a[i][startCol] << " ";
    }

    startRow++;
    endRow--;
    startCol++;
    endCol--;
  }
  return 0;
}
