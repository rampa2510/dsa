#include <iostream>
#include <list>

using namespace std;

template <class ForwardItr, class T>
ForwardItr search(ForwardItr s, ForwardItr e, T k) {
  while (s != e) {
    if (*s == k)
      return s;
    s++;
  }
  return e;
}

int main() {
  int n, a;
  cin >> n;
  list<int> l;
  for (int i = 0; i < n; i++) {
    cin >> a;
    l.push_back(a);
  }
    auto ans = search(l.begin(), l.end(), 5);
    cout<<*ans<<"\n";
  return 0;
}
