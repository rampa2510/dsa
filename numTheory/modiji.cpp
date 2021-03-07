/* #include <iostream> */
/* #define ll long long int */
/* #define range 1000000 */
/* using namespace std; */

/* void computePrimeSieve(ll *a) { */
/*   for (int i = 3; i <= range; i += 2) { */
/*     a[i] = 1; */
/*   } */

/*   for (ll i = 3; i <= range; i += 2) { */
/*     if (a[i]) { */
/*       for (ll j = i * i; j <= range; j += i) { */
/*         a[j] = 0; */
/*       } */
/*     } */
/*   } */
/*   a[2] = 1; */
/* } */

/* int main() { */
/*   ll a[range] = {0}; */
/*   computePrimeSieve(a); */
/*   int x, y; */
/*   cin >> x >> y; */
/*   for (int i = x; i <= y; i++) { */
/*     if (a[i]) */
/*       cout << i << endl; */
/*   } */
/*   return 0; */
#include <iostream>
#define ll long long int
#define RANGE 1000000

using namespace std;

void seive(int *seiveList) {
  // mark all odd numbers
  for (int i = 3; i <= RANGE; i += 2) {
    seiveList[i] = 1;
  }

  seiveList[2] = 1;

  for (ll i = 2; i <= RANGE; i++) {
    if (seiveList[i]) {
      for (ll j = i * i; j <= RANGE; j += i)
        seiveList[j] = 0;
    }
  }
}

int main() {
  int seiveList[RANGE] = {0}, a, b, t, c = 0;
  seive(seiveList);
  cin >> t;
  while (t--) {
    c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
      if (seiveList[i])
        c++;
    cout << c << endl;
  }
  return 0;
}
