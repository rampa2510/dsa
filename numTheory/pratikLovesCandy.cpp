#include <bitset>
#include <iostream>
#include <vector>
#define RANGE 1000000
#define ll long long int

using namespace std;

void seive(bitset<RANGE> &b, vector<int> &primes) {
  for (ll i = 2; i <= RANGE; i++) {
    if (b[i]) {
      primes.push_back(i);
      for (ll j = i * i; j <= RANGE; j += i)
        b[j] = 0;
    }
  }
}

int main() {
  int t, n;
  bitset<RANGE> b;
  b.set();
  vector<int> primes;
  seive(b, primes);
  cin >> t;
  while (t--) {
    cin >> n;
    cout << primes[n - 1] << endl;
  }
  return 0;
}
