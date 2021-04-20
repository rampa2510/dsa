#include <iostream>
#include <vector>

using namespace std;

void generateSubSeq(char *in, char *out, int inpIdx, int outIdx) {
  if (in[inpIdx] == '\0') {
    out[outIdx] = '\0';
    cout << out << "\n";
    return;
  }

  out[outIdx] = in[inpIdx];
  generateSubSeq(in, out, inpIdx + 1, outIdx + 1);

  generateSubSeq(in, out, inpIdx + 1, outIdx);
}

/* void genSubSeq(string &str, vector<string> &out, int idx) { */
/*   if (idx == str.length()) */
/*     return; */
/*   genSubSeq(str, out, idx + 1); */
/*   out.push_back(str[idx]); */
/*   genSubSeq(str, out, idx + 1); */
/* } */

int main() {
  char inp[] = "abc";
  char out[10];
  /* cin >> str; */
  generateSubSeq(inp, out, 0, 0);
  return 0;
}
