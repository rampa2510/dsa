#include <algorithm>
#include <iostream>
using namespace std;

void reverseRows(int a[][100], int n) {
  int t;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n / 2; j++) {
      t = a[i][j];
      a[i][j] = a[i][n - 1 - j];
      a[i][n - 1 - j] = t;
    }
  }
}

void transposeMat(int a[][100], int n) {
  int t;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i < j) {
        t = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = t;
      }
    }
  }
}

void reverseRowsSTL(int a[][100], int n) {
  int *ptr;
  for (int i = 0; i < n; i++) {
    ptr = a[i];
    reverse(ptr, ptr + n);
  }
}

int main() {
  int a[100][100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  // reverseRows(a, n);

  reverseRowsSTL(a, n);
  //  for (int i = 0; i < n; i++) {
  //    for (int j = 0; j < n; j++) {
  //      cout << a[i][j] << " ";
  //    }
  //    cout << "\n";
  //  }

  // transposeMat(a, n);

  cout << "\n";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
