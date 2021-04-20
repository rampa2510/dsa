#include <iostream>

using namespace std;

template <class T> class Vec {
private:
  int ms;
  int cs;
  T *arr;

public:
  T operator[](int i) {
    if (i >= cs) {
      cout << "Vector overflow";
      exit(1);
    }
    return arr[i];
  }
  Vec() {
    cs = 0;
    ms = 1;
    arr = new T[ms];
  }

  void push_back(T d) {
    if (cs == ms) {
      T *oldPtr = arr;
      arr = new T[2 * ms];
      ms = 2 * ms;
      for (int i = 0; i < cs; i++) {
        arr[i] = oldPtr[i];
      }
      cout << ms << "\n";

      delete[] oldPtr;
    }
    arr[cs++] = d;
  }
  int getCs() { return cs; }
  int getMs() { return ms; }

  T pop() { return arr[cs--]; }
};

int main() {
  int cs, ms;
  Vec<char> v;
  cs = v.getCs();
  ms = v.getMs();
  cout << cs << " " << ms << "\n";
  v.push_back('1');
  v.push_back('a');
  v.push_back('b');
  v.push_back('c');
  cs = v.getCs();
  ms = v.getMs();
  cout << cs << " " << ms << "\n";
  cout << v[10] << "\n";
  return 0;
}
