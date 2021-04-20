#include <iostream>
#include <string>

using namespace std;

bool binSearch(int a[10], int k, int s = 0, int e = 9) {
  int m;
  while (s < e) {
    m = (s + e) / 2;
    if (a[m] == k)
      return true;
    else if (a[m] > k)
      e = m - 1;
    else
      s = m + 1;
  }
  return false;
}

bool isVisited(int visited[17], int start, int end) {
  for (int i = start; i < end; i++) {
    if (visited[i])
      return false;
  }
  return true;
}

bool isCB(string s) {
  if (s == "0" || s == "1")
    return false;
  bool isCodingBlockNum = false;
  int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  long long int n = stoll(s);
  if (s.length() < 3) {
    isCodingBlockNum = binSearch(p, n);
    if (isCodingBlockNum)
      return true;
  }
  for (auto z : p) {
    if (n % z == 0)
      return false;
  }
  return true;
}

int main() {
  string s, sub;
  int n, end, c;
  cin >> n;
  bool a, b;
  int visited[n] = {0};
  cin >> s;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      end = i + j;
      sub = s.substr(j, i);
      a = isCB(sub);
      b = isVisited(visited, j, end);
      //      cout << sub << " " << a << " " << b << "\n";
      if (a && b) {
        c++;
        for (int i = i; i < end; i++) {
          visited[i] = 1;
        }
      }
    }
  }
  cout << c << "\n";
  return 0;
}
