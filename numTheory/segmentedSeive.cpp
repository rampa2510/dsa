#include <bitset>
#include <iostream>
#include <vector>
#define ll long long int
#define RANGE 100000

using namespace std;

void seive(bitset<RANGE> &b, vector<int> &a) {
  for (ll i = 2; i <= RANGE; i++) {
    if (b[i]) {
      a.push_back(i);
      for (ll j = i * i; j <= RANGE; j += i) {
        b[j] = 0;
      }
    }
  }
}

int main() {
  /* ll n,m; */
  /* cin>>n>>m; */
  bitset<RANGE> b;
  vector<int> vec;
  b.set();
  b[0] = b[1] = 0;
  int start;
  seive(b, vec);
  ll n, m;
  cin >> m >> n;
  bool segment[n - m + 1] = {0};

  for (auto z : vec) {
    if (z * z >= n)
      break;
    start = (m / z) * z;

    if (z >= m && z <= n)
      start = 2 * z;

    for (int i = start; i <= n; i += z) {
      segment[i - m] = 1;
    }
  }

  for (int i = m; i <= n; i++) {
    if (!segment[i - m] && i != 1)
      cout << i << endl;
  }
  return 0;
}
