#include <climits>
#include <iostream>

using namespace std;

int kadane(int a[100], int n) {
  int cs = 0, ms = INT_MIN;

  for (int i = 0; i < n; i++) {
    cs += a[i];
    if (cs > ms)
      ms = cs;
    else if (cs < 0)
      cs = 0;
  }

  return ms;
}

int minKadane(int a[100], int n) {
  int cs = 0, ms = INT_MAX;

  for (int i = 0; i < n; i++) {
    cs += a[i];
    if (cs < ms)
      ms = cs;
    else if (cs > 0)
      cs = 0;
  }

  return ms;
}

int maxCircularSum(int a[100], int n) {
  int kadaneSum = kadane(a, n), arrSum = 0, newKadaneSum = minKadane(a, n),
      maxCirSum;

  for (int i = 0; i < n; i++)
    arrSum += a[i];

  if (arrSum == newKadaneSum)
    return kadaneSum;

  maxCirSum = arrSum - newKadaneSum;

  return (maxCirSum > kadaneSum ? maxCirSum : kadaneSum);
}

int main() {
  int a[1000], n, s, t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    s = maxCircularSum(a, n);
    cout << s << endl;
  }

  return 0;
}
