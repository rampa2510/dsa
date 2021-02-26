#include <iostream>

using namespace std;

int main() {
  int n, res = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (auto z : a) {
    res ^= z;
  }

  cout << res << "\n";

  return 0;
}
