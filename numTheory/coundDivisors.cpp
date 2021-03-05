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

int factorize(int m, const vector<int> &primes) {
  int i = 0;
  int p = primes[0];
  int cnt = 0;
  int ans = 1;

  // this is the same condition that if m is not prime
  // It will contain a number in range 2 to sqrt(m)
  for (int i = 0; p * p <= m; i++) {
    p = primes[i];
    if (m % p == 0) {
      cnt = 0;
      while (m % p == 0) {
        // here cnt is the power till which the number will be multiplied
        cnt++;
        m /= p;
      }
      // since each and every
      ans *= (cnt + 1);
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
    ans *= 2;

  return ans;
}

int main() {
  bitset<range> b;
  vector<int> primes;
  b.set();
  seive(b, primes);
  b[0] = b[1] = 0;
  int m;
  cin >> m;
  cout << factorize(m, primes) << endl;
  return 0;
}
