#include <iostream>

using namespace std;

int main() {
  int n, c = 0;
  cin >> n;
  while (true) {
    if (n == 0 || n == 1)
      break;
    n = n >> 1;
    c++;

  }
  if (n )
    c++;
  cout << c << "\n";
  return 0;
}
