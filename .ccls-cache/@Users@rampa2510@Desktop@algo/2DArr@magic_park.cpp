#include <iostream>

using namespace std;

void magical_park(char park[][100], int n, int m, int k, int s) {

  bool success = true;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s < k) {
        success = false;
        break;
      }

      if (park[i][j] == '.')
        s -= 2;
      else if (park[i][j] == '*')
        s += 5;
      else
        break;

      if (j != m - 1)
        s--;
    }
  }

  if (success)
    cout << "Yes " << s;
  else
    cout << "No " << s;
}

int main() {
  int n, m, k, s, r;
  cin >> n >> m >> k >> s;

  char park[100][100];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cin >> park[i][j];
  }

  magical_park(park, n, m, k, s);

  return 0;
}
