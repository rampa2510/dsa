#include <iostream>
#include <vector>
using namespace std;

bool isOdd(int n) { return n & 1; }

void primeSieve(vector<int> a, int n) {
  int p;
  bool isDivisble;

  // first loop to keep track of the dividing number
  for (int i = 0; i < a.size(); i++) {
    p = a[i];

    // this loop will iterate and remove all tghe divisible elements
    for (auto j = a.begin() + i + 1; j < a.end(); j++) {
      isDivisble = (*j) % p == 0;
      if (isDivisble)
        a.erase(j);
    }
  }

  // print all the elements
  for (auto z : a) {
    cout << z << "\n";
  }
}

void primeSieve2(int *a, int n) {

  // mark all numbers to be prime
  for (int i = 3; i <= n; i += 2)
    a[i] = 1;

  /* cout << a[n + 1] << "\n"; */

  for (int i = 3; i <= n; i += 2) {
    if (a[i]) {
      /* cout << "i " << i << "\n"; */
      for (int j = i * i; j <= n; j += i) {
        a[j] = 0;
      }
    }
  }
  a[2] = 1;
  for (int i = 0; i <= n; i++) {
    if (a[i])
      cout << i << endl;
  }
}

int main() {
  int n;
  /* bool shouldPush; */
  cin >> n;
  int a[n + 1] = {0};
  primeSieve2(a, n);
  /* vector<int> arr; */
  /* // add 2 to the array so we can start with 3 and check for odd Numbers
   */
  /* arr.push_back(2); */

  /* // add all odd numbers till n */
  /* for (int i = 3; i <= n; i++) { */
  /*   shouldPush = isOdd(i); */
  /*   if (shouldPush) */
  /*     arr.push_back(i); */
  /* } */

  /* primeSieve(arr, n); */
  return 0;
}
