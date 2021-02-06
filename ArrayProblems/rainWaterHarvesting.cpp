#include <algorithm>
#include <iostream>
using namespace std;

// O(n^2)
int rainWater1(int a[100], int n) {
  int res = 0, left, right;

  for (int i = 1; i < n - 1; i++) {

    left = a[i];

    for (int j = 0; j < i; j++)
      left = max(a[j], left);

    right = a[i];

    for (int j = i + 1; j < n; j++)
      right = max(a[j], right);

    res += min(left, right) - a[i];
  }
  return res;
}

// O(n)
//int rainWater(int a[100],int n){
//    int left[n],right[n],res=0,max_ = INT_MIN;
//    
//    left[0] = a[0];
//
//    for(int i=1;i<n;i++)
//        left[i] = max(left[i-1],a[i]);
//    
//}

int main() {
  int n, a[100], r;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  r = rainWater1(a, n);
  cout << r << endl;
  return 0;
}
