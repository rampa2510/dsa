#include <bitset>
#include <iostream>
#include <vector>
#define range 100
#define ll long long int

using namespace std;

void seive(bitset<range> &b, vector<int> &primes) {
  for (ll i = 2; i <= range; i++) {
    if (b[i]) {
      primes.push_back(i);
      for (ll j = i * i; j <= range; j += i) {
        b[j] = 0;
      }
    }
  }
}

void factorize(int m, const vector<int> &primes) {
  int i = 0;
  vector<int> factors;
  int p = primes[0];

  // this is the same condition that if m is not prime
  // It will contain a number in range 2 to sqrt(m)
  for (int i = 0; p * p <= m; i++) {
    p = primes[i];
    if (m % p == 0) {
      factors.push_back(p);
      while (m % p == 0)
        m /= p;
    }
  }
  /* while (p * p <= m) { */
  /*   p = primes[i]; */
  /*   if (m % p == 0) { */
  /*     factors.push_back(p); */

  /*     // keep dividing until its not divsible */
  /*     while (m % p == 0) */
  /*       m /= p; */
  /*   } */
  /*   i++; */
  /* } */

  // that means the number is prime
  if (m != 1)
    factors.push_back(m);

  for (auto z : factors) {
    cout << z << "\n";
  }
}

int main() {
  bitset<range> b;
  vector<int> primes;
  b.set();
  seive(b, primes);
  b[0] = b[1] = 0;
  int m;
  cin >> m;
  factorize(m, primes);
  return 0;
}
