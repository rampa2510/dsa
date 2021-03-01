#include <iostream>

using namespace std;

int clearBitsFromItoJ(int n, int i, int j) {
  int all1sTillJ = -1 << (j + 1);
  int all0sTillI = (1 << i) - 1;
  int mask = all1sTillJ | all0sTillI;
  return mask & n;
}

int main() {
  int n, i, j, m;
  cin >> n >> m >> i >> j;
  n = clearBitsFromItoJ(n, i, j);
  int ans = n | (m << i);
  cout << ans << "\n";

  return 0;
}
