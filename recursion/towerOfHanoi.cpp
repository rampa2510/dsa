#include <iostream>



using namespace std;

void printMove(int n, char frompeg, char topeg) {
  cout << "Move disk " << n << " from " << frompeg << " to " << topeg << "\n";
}

void towerOfHanoi(int n, char frompeg, char auxpeg, char topeg) {
  if (n == 1) {
    printMove(n, frompeg, topeg);
    return;
  }
  towerOfHanoi(n - 1, frompeg, topeg, auxpeg);
  printMove(n, frompeg, topeg);
  towerOfHanoi(n - 1, auxpeg, frompeg, topeg);
}

int main() {
  int n;
  // enter number of disks
  cin >> n;

  char source, aux, dest;
  cin >> source >> aux >> dest;

  towerOfHanoi(n, source, aux, dest);

  return 0;
}
