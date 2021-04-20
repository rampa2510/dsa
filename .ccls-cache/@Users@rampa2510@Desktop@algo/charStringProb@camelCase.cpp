#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  vector<int> m;
  cin >> s;
  int l = s.length();
  for (int i = 0; i < l; i++) {
    if ('Z' - s[i] <= 25 && 'Z' - s[i] >= 0) {
      m.push_back(i);
    }
  }
  m.push_back(l);

  for (int i = 0; i < m.size() - 1; i++) {
    cout << s.substr(m[i], (m[i + 1] - m[i])) << "\n";
  }
  return 0;
}
