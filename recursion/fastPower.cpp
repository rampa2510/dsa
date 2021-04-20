#include <iostream>

using namespace std;

bool isOdd(int n) { return n & 1; }

int fastPower(int a, int b) {
  if (b == 0)
    return 1;
  int n;
  n = fastPower(a, b / 2);
  if (isOdd(b))
    return a * n * n;
  return n * n;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << fastPower(a, b) << "\n";
  return 0;
}
