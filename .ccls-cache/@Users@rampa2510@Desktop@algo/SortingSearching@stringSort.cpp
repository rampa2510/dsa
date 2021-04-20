#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool compare(string s1, string s2) {
  int l1 = s1.length(), l2 = s2.length();
  string subStr;
  if (l1 > l2) {
    subStr = s1.substr(0, l2);
  // cout << subStr << " s2 " << s2 << "\n";
    if (subStr == s2)
      return true;
  } else {
    subStr = s2.substr(0, l1);
 //   cout << subStr << " s1 " << s1 << "\n";
    if (subStr == s1)
      return false;
  }

//  cout << (s1 < s2) << " s1 " << s1 << " s2 " << s2 << "\n";

  return s1 < s2;
}

int main() {
  int n;
  cin >> n;
  string a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n, compare);
  for (auto z : a)
    cout << z << endl;
  return 0;
}
