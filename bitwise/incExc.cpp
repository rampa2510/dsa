#include <iostream>

using namespace std;

bool isOdd(int n) { return n & 1; }

int genSub(int *a, int n, int num) {
  int last_bit, pos = 0, count = 0, ans = 0;
  while (n > 0) {
    last_bit = n & 1;
    if (last_bit) {
      num /= a[pos];
      count++;
    }
    pos++;
    n >>= 1;
  }

  /* cout << endl; */
  /* cout << num << " " << count << "\n"; */
  /* cout << endl; */

  if (count == 0)
    return 0;

  if (isOdd(count))
    return num;

  return -1 * num;
}

void printSub(int *a, int n, int num) {
  int l = 1 << n, ans = 0;
  for (int i = 0; i < l; i++) {
    ans += genSub(a, i, num);
    /* cout << "ans " << ans << "\n"; */
  }
  cout << ans << "\n";
}

int main() {
  int n = 1000, a[3] = {2, 3, 5};
  printSub(a, 3, n);

  return 0;
}
