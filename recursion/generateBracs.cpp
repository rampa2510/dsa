#include <iostream>

using namespace std;

void generateBracs(int numOfBracs, char *out, int idx, int openBracs,
                   int closeBracs) {
  if (idx == 2 * numOfBracs) {
    out[idx] = '\0';
    cout << out << "\n";
    return;
  }

  if (openBracs < numOfBracs) {
    out[idx] = '(';
    generateBracs(numOfBracs, out, idx + 1, openBracs + 1, closeBracs);
  }

  if (closeBracs < openBracs) {
    out[idx] = ')';
    generateBracs(numOfBracs, out, idx + 1, openBracs, closeBracs + 1);
  }
}

int main() {
  int n;
  cin >> n;
  char out[(2 * n) + 1];
  generateBracs(n, out, 0, 0, 0);
  return 0;
}
