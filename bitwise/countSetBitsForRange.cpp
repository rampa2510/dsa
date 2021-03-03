#include <iostream>

using namespace std;

int getNofBits(int n) {
  int c = 0, last_bit;
  while (n > 0) {
    last_bit = n & 1;
    if (last_bit)
      c++;
    n >>= 1;
  }
  return c;
}

int main() {
  int t, a, b, sum = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;
    sum = 0;
    for (int i = a; i <= b; i++) {
      sum += getNofBits(i);
    }
    cout << sum << "\n";
  }
  return 0;
}
