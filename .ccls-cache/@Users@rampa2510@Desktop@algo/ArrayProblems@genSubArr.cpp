#include <iostream>

using namespace std;

int main() {
  int a[5] = {1, 2, 3, 4, 5}, n = 5;

  for (size_t i = 0; i < n; i++) {
    for (size_t j = i; j < n; j++) {
      for (size_t k = i; k <= j; k++)
        cout << a[k] << ",";
      cout << "\n";
    }
  }

  return 0;
}
