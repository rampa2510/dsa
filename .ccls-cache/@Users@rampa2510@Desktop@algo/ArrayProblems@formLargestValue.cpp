#include <algorithm>
#include <iostream>

using namespace std;

bool compareNum(string s1, string s2) {
  string x = s1 + s2;
  string y = s2 + s1;
  return x > y;
}

int main() {
  int t, n;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    string a[n];

    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }

    sort(a, a + n, compareNum);

    for (int j = 0; j < n; j++) {
      cout << a[j];
    }
    cout << endl;
  }

  return 0;
}
