#include <iostream>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int lcm(int a, int b, int gcdNum) { return (a * b) / gcdNum; }

int main() {
  int a, b, gcdNum;
  cin >> a >> b;
  gcdNum = gcd(a, b);
  cout << gcdNum << "\n";
  cout << lcm(a, b, gcdNum) << "\n";
  return 0;
}
