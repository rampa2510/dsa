#include <iostream>

using namespace std;

int isOdd(int n) { return n & 1; }

// bits index starts from 0
int getDigit(int n, int i) {
  int mask = 1 << i;
  int bit = n & mask;
  return bit > 0 ? 1 : 0;
}

int setDigit(int n, int i) {
  int mask = 1 << i;
  return n | mask;
}

int clearBit(int n, int i) {
  int mask = 1 << i;
  mask = ~mask;
  return n & mask;
}

int updateBit(int n, int i, int v) {
  if (v) {
    return setDigit(n, i);
  }
  return clearBit(n, i);
}

int clearLastIBits(int n, int i) {
  int mask = (-1 << i);
  return n & mask;
}

int clearBitsItoJ(int n, int i, int j) {
  int allOnesTillJ = -1 << (j + 1);
  int allZerosTilli = (1 << i) - 1;
  int mask = allZerosTilli | allOnesTillJ;
  return n & mask;
}

int main() {
  int n, i, v;
  cin >> n >> v >> i;
  /* cout << isOdd(n) << "\n"; */
  /* cout << getDigit(n, i) << "\n"; */
  /* cout << setDigit(n, i) << "\n"; */
  /* cout << clearBit(n, i) << "\n"; */
  /* cin >> v; */
  /* cout << updateBit(n, i, v) << "\n"; */
  /* cout << clearLastIBits(n, i) << "\n"; */
  cout << clearBitsItoJ(n, v, i) << "\n";
  return 0;
}
