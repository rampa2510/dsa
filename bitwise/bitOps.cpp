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

int main() {
  int n;
  cin >> n;
  cout << isOdd(n) << "\n";
  cout << getDigit(n, 0) << "\n";
  cout << setDigit(n, 0) << "\n";
  return 0;
}
