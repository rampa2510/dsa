#include <iostream>

using namespace std;

int getLesserNumInPowOf2(int n) {
  int currNum = 1, prevNum = 1;
  while (true) {
    if (currNum > n)
      return prevNum;
    else if (currNum <= n)
      prevNum = currNum;
    currNum <<= 1;
  }
  return prevNum;
}

int main() {
  int t, n, lessNum, a, diffInSteps;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    lessNum = getLesserNumInPowOf2(n);
    diffInSteps = n - lessNum;
    cout << 1 + diffInSteps << "\n";
  }
  return 0;
}
