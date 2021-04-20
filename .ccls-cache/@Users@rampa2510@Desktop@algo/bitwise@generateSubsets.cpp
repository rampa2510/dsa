#include <cmath>
#include <iostream>
#include <string>
using namespace std;

string decToBin(int n, int l) {
  string ans;
  int diff;
  int last_bit;
  while (n > 0) {
    last_bit = n & 1;
    ans = to_string(last_bit) + ans;
    n >>= 1;
  }
  diff = l - ans.length();
  for (int i = diff; i > 0; i--) {
    ans = "0" + ans;
  }
  return ans;
}

void genSubset(string inp, string *ptr, int n) {
  for (int i = 0; i < n; i++) {
    ptr[i] = decToBin(i, inp.length());
  }
}

void filterChars(int n, string s) {
  int last_bit;
  int i = 0;
  while (n > 0) {
    last_bit = n & 1;
    if (last_bit)
      cout << s[i];
    i++;
    n >>= 1;
  }
  cout << "\n";
}

void printSubSet(string inp) {
  int l = inp.length();
  int n = (1 << l);
  for (int i = 0; i < n; i++)
    filterChars(i, inp);
}

int main() {
  string inp;
  cin >> inp;
  printSubSet(inp);
  /* int l = inp.length(); */
  /* int noOfBits = (int)pow(2, l); */
  /* string ptr[noOfBits]; */
  /* genSubset(inp, ptr, noOfBits); */
  /* int pos = 0; */
  /* for (auto z : ptr) { */
  /*   pos = 0; */
  /*   for (auto s : z) { */
  /*     if (s == '1') */
  /*       cout << inp[pos]; */
  /*     pos++; */
  /*   } */
  /*   cout << endl; */
  /* } */
  return 0;
}
