#include <iostream>

using namespace std;

bool binSearch2D(int a[100], int k, int l, int h) {
  int m;
  while (h > l) {
    m = (h + l) / 2;
    if (a[m] == k)
      return true;
    else if (a[m] > k)
      h = m - 1;
    else
      l = m + 1;
  }
  return false;
}

int main() {
  int a[100][100], m, n, k;
  bool isPresnet = false;
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    isPresnet = binSearch2D(a[i], k, 0, m - 1);
    if (isPresnet)
      break;
  }

  cout<<isPresnet;

  return 0;
}
