#include <iostream>

using namespace std;

int main() {
  int n = 1000, a[3] = {2, 3, 5};
  int l = 3;
  int oneEle[l];
  for (int i = 0; i < l; i++) {
    oneEle[i] = n / a[i];
  }
  for (auto z : oneEle) {
    cout << z << "\n";
  }
  return 0;
}
