#include <iostream>
#include <list>

using namespace std;

class Book {
public:
  char name;
  int price;
  Book(char n, int p) : name(n), price(p) {}
};

class BookCompare {
public:
  // here we are overloading "()" operator
  // we can overload other operators as well like +
  bool operator()(Book b1, Book b2) { return b1.name == b2.name; }
};

int main() {
  list<Book> l;
  Book b1('d', 40);
  l.push_back(Book('a', 10));
  l.push_back(Book('b', 20));
  l.push_back(Book('c', 30));
  BookCompare cmp;

  // since we overloaded "()" operator
  if (cmp(b1, *l.begin())) {
    cout << "Present"
         << "\n";
  } else {
    cout << "Not present"
         << "\n";
  }
  return 0;
}
