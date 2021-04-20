#include <iostream>

using namespace std;

int findMissingNum(int *a, int n) {
  int s1 = 1;
  int s2 = a[0];

  for (int i = 2; i <= n; i++) {
    s1 ^= i;
  }

  for (int i = 1; i < n; i++) {
    s2 ^= a[i];
  }
  return (s1 ^ s2);
}
int getMissingNo(int a[], int n) {
  // For xor of all the elements in array
  int x1 = a[0];

  // For xor of all the elements from 1 to n+1
  int x2 = 1;

  for (int i = 1; i < n; i++)
    x1 = x1 ^ a[i];

  for (int i = 2; i <= n + 1; i++)
    x2 = x2 ^ i;

  return (x1 ^ x2);
}
// int main() {
//  int n;
//  cin >> n;
//  int a[n];
//  for (int i = 0; i < n - 1; i++) {
//    cin >> a[i];
//  }
//  cout << getMissingNo(a, n) << "\n";
//
//  return 0;
//}
int main() {
  int arr[] = {1, 2, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int miss = findMissingNum(arr, n);
  cout << miss;
  return 0;
}
