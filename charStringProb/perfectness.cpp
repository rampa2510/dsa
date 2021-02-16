#include <iostream>
#include <unordered_map>
using namespace std;

char findMaxFreqChar(string s) {
  unordered_map<char, int> m;
  m['a'] = 0;
  m['b'] = 0;
  for (auto z : s)
    m[z]++;
  return (m['a'] >= m['b'] ? 'a' : 'b');
}

int main() {
  string s;
  int n, p = 0;
  char c;
  cin >> n;
  cin >> s;
  c = findMaxFreqChar(s);
  cout << c << "\n";
  return 0;
}
