#include <bitset>
#include <iostream>
#include <vector>

#define ll long long int
#define range 1000000

using namespace std;

void seive(bitset<range> &b, vector<int> &a) {
  for (ll i = 2; i <= range; i++) {
    if (b[i]) {
      a.push_back(i);
      for (ll j = i * i; j <= range; j += i) {
        b[j] = 0;
      }
    }
  }
}

bool isPrime(ll n, bitset<range> &b, vector<int> &a) {
  if (n <= range)
    return b[n];
  for (int i = 2; (ll)a[i] * (ll)a[i] <= n; i++) {
    if (n % a[i] == 0)
      return false;
  }
  return true;
}

int main() {
  vector<int> vec;
  bitset<range> b;
  b.set();
  b[0] = b[1] = 0;
  b[2] = 1;
  seive(b, vec);
  ll n;
  cin >> n;
  cout << isPrime(n, b, vec);
  return 0;
}
