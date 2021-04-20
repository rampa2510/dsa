#include <iostream>
#include <string>

using namespace std;

void replacePi(string &s, int idx) {
  s[idx] = '3';
  s[idx + 1] = '.';
  s = s.substr(0, idx + 2) + "14" + s.substr(idx + 2);
}

void iterateOverString(string &s, int idx) {
  if (idx == s.length())
    return;
  if (s[idx] == 'p' && s[idx + 1] == 'i') {
    replacePi(s, idx);
    iterateOverString(s, idx + 4);
  } else {
    iterateOverString(s, idx + 1);
  }
}

void rightShiftArr(char a[], int l, int pos) {
  while (l >= pos) {
    a[l + 2] = a[l];
    l--;
  }
}

void iterateOverArr(char strArr[], int idx) {
  if (strArr[idx] == '\0' || strArr[idx + 1] == '\0')
    return;
  if (strArr[idx] == 'p' && strArr[idx + 1] == 'i') {
    int l = idx + 2;
    while (strArr[l] != '\0')
      l++;
    rightShiftArr(strArr, l, idx + 2);
    strArr[idx] = '3';
    strArr[idx + 1] = '.';
    strArr[idx + 2] = '1';
    strArr[idx + 3] = '4';
    iterateOverArr(strArr, idx + 4);
  } else {
    iterateOverArr(strArr, idx + 1);
  }
}

int main() {
  string s;
  char arr[100];
  cin >> arr;
  /* iterateOverString(s, 0); */
  iterateOverArr(arr, 0);
  cout << arr << "\n";
  return 0;
}
