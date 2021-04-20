#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  string s;
  char r;
  int max = 0;
  unordered_map<char, int> m;

  cin >> s;

  for (auto z : s) {
    if (m.find(z) == m.end())
      m[z] = 1;
    else
      m[z]++;
  }

  for (auto z : m) {
    if (z.second > max) {
      r = z.first;
      max = z.second;
    }
  }
  cout << r << "\n";

  return 0;
}
