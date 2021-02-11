#include <iostream>
#define SIZE 1000
using namespace std;

int main() {
  int inc[SIZE], res[100], dec[SIZE], a[SIZE], n, t, m;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n;
    inc[0] = 1;
    dec[n - 1] = 1;
    for (int j = 0; j < n; j++) {
      cin >> a[j];

      // construct the increasing array
      if (j != 0)
        inc[j] = a[j] >= a[j - 1] ? inc[j - 1] + 1 : 1;
    }

    //    for (int c : inc)
    //      cout << "Inc" << c << " ";

    // construct the decreasing array
    for (int j = n - 2; j >= 0; j--)
      dec[j] = a[j + 1] <= a[j] ? dec[j + 1] + 1 : 1;

    //    for (int c : dec)
    //      cout << "dec" << c << " ";

    m = inc[0] + dec[0] - 1;

    for (int j = 1; j < n; j++) {
      if (m < inc[j] + dec[j] - 1)
        m = inc[j] + dec[j] - 1;
    }
    res[i] = m;
  }
  for (int i = 0; i < t; i++) {
    cout << res[i] << endl;
  }
  return 0;
}
