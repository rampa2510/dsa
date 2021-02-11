#include <iostream>
#include <vector>
using namespace std;

// here a1 will be the greater length array
// m will the greater length
void addArr(int *a1, int *a2, int m, int n) {
  int c = 0, s;
  vector<int> res;
  for (int i = 0; i < n; i++) {
    //   cout << a2[n - 1 - i] << " " << a1[m - 1 - i] << "\n";
    s = a2[n - 1 - i] + a1[m - 1 - i] + c;
    res.push_back(s % 10);
    c = s / 10;
  }
  for (int i = 0; i < m - n; i++) {
    s = a1[i] + c;
    res.push_back(s % 10);
    c = s / 10;
  }
  if (c) {
    res.push_back(c);
  }

  for (int i = res.size() - 1; i >= 0; i--) {
    cout << res[i] << ", ";
  }
  cout << "END";
}

int main() {
  int s1, s2, m;
  cin >> s1;
  int a1[s1];
  for (int i = 0; i < s1; i++) {
    cin >> a1[i];
  }
  cin >> s2;
  int a2[s2];
  for (int i = 0; i < s2; i++) {
    cin >> a2[i];
  }
  if (s1 > s2) {
    addArr(a1, a2, s1, s2);
  } else {
    addArr(a2, a1, s2, s1);
  }

  return 0;
}
