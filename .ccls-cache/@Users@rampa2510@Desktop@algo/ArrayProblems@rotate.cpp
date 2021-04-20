#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a[] = {1, 2, 3, 4, 5};
  rotate(a, a + 1, a + 5);
  for (auto z : a) {
    cout << z << "\n";
  }
  return 0;
}
