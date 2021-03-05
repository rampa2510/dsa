#include <iostream>
#define ll long long int
#define range 1000000
using namespace std;

void computePrimeSieve(ll *a) {
  for (int i = 3; i <= range; i += 2) {
    a[i] = 1;
  }

  for (ll i = 3; i <= range; i += 2) {
    if (a[i]) {
      for (ll j = i * i; j <= range; j += i) {
        a[j] = 0;
      }
    }
  }
  a[2] = 1;
}

int main() {
  ll a[range] = {0};
  computePrimeSieve(a);
  int x, y;
  cin >> x >> y;
  for (int i = x; i <= y; i++) {
    if (a[i])
      cout << i << endl;
  }
  return 0;
}
