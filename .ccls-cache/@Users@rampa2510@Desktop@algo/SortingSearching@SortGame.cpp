#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(pair<string, int> a1, pair<string, int> a2) {
  if (a1.second == a2.second) {
    return a1.first < a2.first;
  } else {
    return a1.second > a2.second;
  }
}

int main() {
  int x, n, c;
  string name;
  cin >> x >> n;
  vector<pair<string, int>> a;
  for (int i = 0; i < n; i++) {
    cin >> name >> c;
    // remove the element which has salary less than x
    if (c >= x)
      a.emplace_back(make_pair(name, c));
  }

  n = a.size();

  sort(a.begin(), a.begin() + n, compare);

  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << "\n";
  }
  return 0;
}
