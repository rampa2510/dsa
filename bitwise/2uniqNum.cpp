#include <iostream>

using namespace std;

int getPosForSetBit(int n) {
  int a = 0, c = 0;
  while (n > 0) {
    a = n & 1;
    if (a)
      return c;
    c++;
    n >>= 1;
  }
  return 0;
}

bool isBitSetOnIPos(int n, int i) {
  int mask = 1 << i;
  return n & mask;
}

void findUniqNums(int *a, int n) {
  int res = 0, res2 = 0, setBitPos, b[n], c = 0;
  bool isBitSet = false;
  for (int i = 0; i < n; i++)
    res ^= a[i];
  setBitPos = getPosForSetBit(res);
  for (int i = 0; i < n; i++) {
    isBitSet = isBitSetOnIPos(a[i], setBitPos);
    if (isBitSet)
      b[c++] = a[i];
  }
  for (int i = 0; i < c; i++) {
    res2 ^= b[i];
  }
  cout << res2 << "\n";
  cout << abs(res - res2) << "\n";
  /* for (auto z : b) { */
  /*   cout << z << "\n"; */
  /* } */
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  findUniqNums(a, n);
  /* cout << getPosForSetBit(n) << "\n"; */
  return 0;
}
