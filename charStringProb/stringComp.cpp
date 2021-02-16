#include <iostream>
#include <string>

using namespace std;

int getLenSubstr(string s, int &ptr) {
  int c = 0, l = s.length(), b = ptr;
  char a = s[b], k = s[b];
  while (a == k && b < l) {
    b++;
    c++;
    k = s[b];
  }
  ptr = b;
  return c;
}

int main() {
  string s;
  cin >> s;
  string n;
  int p = 0, l = s.length(), a;
  while (p < l) {
    n += s[p];
    a = getLenSubstr(s, p);
    n += to_string(a);
  }
  cout << n << "\n";
  return 0;
}
