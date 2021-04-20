#include <iostream>

using namespace std;

int main() {
  int t, l;
  cin >> t;
  string s1, s2, ans;
  for (int i = 0; i < t; i++) {
    ans = "";
    cin >> s1 >> s2;
    l = s1.length();
    for (int j = 0; j < l; j++) {
      if (s1[j] == s2[j])
        ans += "0";
      else
        ans += "1";
    }
    cout << ans << "\n";
  }
  return 0;
}
