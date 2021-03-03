#include <iostream>

using namespace std;

int getMaxSetBitPos(int n) {
  int pos = 0, c = 0;
  while (n > 0) {
    if (n & 1)
      pos = c;
    c++;
    n >>= 1;
  }
  return pos;
}

int main() {
  int t, n, maxSetBit,a;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    maxSetBit = getMaxSetBitPos(n);
    a = 1<<maxSetBit;
    cout << a;
  }
  return 0;
}
