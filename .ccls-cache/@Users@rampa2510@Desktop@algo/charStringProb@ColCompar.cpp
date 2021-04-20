#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string extractKey(string s, int k) {
  char *i = strtok((char *)s.c_str(), " ");
  while (k > 1)
    i = strtok(NULL, " ");
  return (string)i;
}

int main() {

  string str[100], revOrNot, option;
  int n, k;
  pair<string, string> strPair[100];
  cin >> n;
  cin.get();

  for (size_t i = 0; i < n; i++)
    getline(cin, str[i]);

  for (size_t i = 0; i < n; i++)
    cout << str[i] << "\n";

  for (size_t i = 0; i < n; i++) {
    strPair[i].first = str[i];
    strPair[i].second = extractKey(str[i], k);
  }

  for (auto s : strPair) {
    cout << s.second << "\n";
  }

  return 0;
}
