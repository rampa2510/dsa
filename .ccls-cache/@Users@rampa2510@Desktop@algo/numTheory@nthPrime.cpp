#include <bitset>
#include <iostream>
#include <vector>
#define ll long long int
#define RANGE 10000000

using namespace std;

int getNPrime(int n, bitset<RANGE> &b) {
  int c = 0;
  for (ll i = 2; i <= RANGE; i++) {
    if (b[i]) {
      c++;
      if (n == c)
        return i;
      for (ll j = i * i; j <= RANGE; j += i)
        b[j] = 0;
    }
  }
  return c;
}

int main() {
  int n;
  cin >> n;
  bitset<RANGE> b;
  b.set();
  cout << getNPrime(n, b);
  return 0;
}
