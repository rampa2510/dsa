#include <iostream>

using namespace std;

bool checkPalindrome(int *a, int s, int e) {
  if (s >= e)
    return true;
  else if (a[s] != a[e])
    return false;
  return checkPalindrome(a, s + 1, e - 1);
}

int main() {
  int n;
  bool isPalindrome;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  isPalindrome = checkPalindrome(a, 0, n - 1);
  if (isPalindrome)
    cout << "true";
  else
    cout << "false";

  return 0;
}
