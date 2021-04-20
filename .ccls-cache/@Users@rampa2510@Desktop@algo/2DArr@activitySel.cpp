#include <algorithm>
#include <iostream>
using namespace std;

bool compare(pair<int, int> a1, pair<int, int> a2) {
  return a1.second < a2.second;
}

int main() {
  int t, n, c, p;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    pair<int, int> a[n];
    for (int j = 0; j < n; j++) {
      cin >> a[j].first;
      cin >> a[j].second;
    }
    sort(a, a + n, compare);
    // for (auto z : a) {
    //   cout << z.first << " " << z.second << endl;
    // }
    p = a[0].second;
    c = 1;
    for (int j = 1; j < n; j++) {
      // cout << p << " " << a[j].second << "\n";
      if (p <= a[j].first) {
        p = a[j].second;
        c++;
      }
    }
    cout << c << "\n";
  }
  return 0;
}
