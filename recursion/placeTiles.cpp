#include <iostream>

using namespace std;

int placeTiles(int n) {
  if (n <= 3)
    return 1;
  return placeTiles(n - 1) + placeTiles(n - 4);
}

int main() {
  int n;
  cin >> n;
  cout << placeTiles(n) << "\n";
  return 0;
}
