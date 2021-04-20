#include <iostream>

using namespace std;

void inc(int n) {
  cout << n << endl;
  if (n == 0)
    return;
  inc(n - 1);
}

void dec(int n) {
  if (n < 0)
    return;
  dec(n - 1);
  cout << n << "\n";
}

int main() {
  int n;
  cin >> n;
  cout << "Increasing order"
       << "\n";
  dec(n);
  cout << "Decrasing order"
       << "\n";
  inc(n);
  return 0;
}
