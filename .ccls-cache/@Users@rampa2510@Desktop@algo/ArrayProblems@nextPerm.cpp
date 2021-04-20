#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t, n;
  int b[100][1000];
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    next_permutation(a, a + n);
    for (int j = 0; j < n; j++) {
      b[i][j] = a[j];
    }
  }
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n; j++) {
      cout << b[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
