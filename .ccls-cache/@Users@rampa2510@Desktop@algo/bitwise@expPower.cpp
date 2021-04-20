#include <iostream>
#include <string>

using namespace std;

void power(int a, int b) {
  int ans = 1, last_bit = 0;
  while (b > 0) {
    last_bit = b & 1;
    if (last_bit)
      ans *= a;
    a *= a;
    b >>= 1;
  }
  cout << ans << "\n";
}

int main() {
  int a, b;
  cin >> a >> b;
  power(a, b);
  return 0;
}
